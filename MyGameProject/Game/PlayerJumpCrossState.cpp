﻿#include "PlayerJumpCrossState.h"

PlayerJumpCrossState::PlayerJumpCrossState(PlayerData* data)
{
	this->playerData = data;
	auto texs = Textures::GetInstance();
	texs->Add(1028, "Resources/PlayerState/jump_cross_after.png", D3DCOLOR_XRGB(255, 0, 255));
	m_Animation = new Animation();
	m_Animation->AddFrames(texs->GetTexture(1028), 1, 7, 0.1f, D3DCOLOR_XRGB(255, 255, 255));

}

PlayerJumpCrossState::~PlayerJumpCrossState()
{
}

void PlayerJumpCrossState::Render()
{
	PlayerState::Render();
}

void PlayerJumpCrossState::Update(float dt)
{
	auto player = playerData->player->GetInstance();
	if (player->GetPosition().y > player->_LegY + 68)
	{
		player->IsJump = false;
		m_Animation->SetCurrentFrame(4);
	}

	if (player->GetPosition().y < player->_LegY + 68 && player->IsJump == true)
	{
		player->SetVy(JUMP_SPEED*1.1);
	}
	else {
		player->SetVy(-JUMP_SPEED*1.1);
	}

	if (player->GetPosition().y < player->_LegY - 10)
	{
		player->SetPosition(player->GetPosition().x, player->_LegY);
		player->SetState(Idle);
	}
	if (m_Animation->IsLastFrame(dt))
		m_Animation->SetCurrentFrame(m_Animation->GetCurrentFrameID() - 1);

	switch (m_Animation->GetCurrentFrameID())
	{
	case 0:
		m_Animation->SetDefaultTime(0.05f);
		break;
	case 1:
		m_Animation->SetDefaultTime(0.1f);
		break;
	case 2:
		m_Animation->SetDefaultTime(0.2f);
		break;
	case 3:
		m_Animation->SetDefaultTime(0.25f);
		break;

	default:
		m_Animation->SetDefaultTime(0.25f);
		break;
	}

	PlayerState::Update(dt);
}

void PlayerJumpCrossState::HandleInput()
{
	auto player = playerData->player->GetInstance();
	auto keyboard = KeyBoard::GetInstance();

	if (keyboard->GetKey(THROW_ARROW))
	{
		player->SetState(JumpThrow);
		return;
	}

	if (keyboard->GetKey(ATTACK_ARROW))
	{
		player->SetState(JumpAttack);
		return;
	}

	// Nếu ấn right-arrow thì chạy qua phai
	if (keyboard->GetKey(RIGHT_ARROW))
	{
		player->SetMoveDirection(Entity::MoveDirection::LeftToRight);
		player->SetVx(RUN_SPEED / 1.1);
		return;
	}
	// Nếu ấn left-arrow thì chạy qua trái
	if (keyboard->GetKey(LEFT_ARROW))
	{
		player->SetMoveDirection(Entity::MoveDirection::RightToLeft);
		player->SetVx(-RUN_SPEED / 1.1);
		return;
	}
	player->SetVx(0);
}

PlayerState::State PlayerJumpCrossState::GetStateName()
{
	return JumpCross;
}

void PlayerJumpCrossState::ResetState()
{
	auto player = playerData->player;
	//collider around center point, collider often smaller than player sprite
	player->SetColliderLeft(-17);
	player->SetColliderRight(23);
	player->SetColliderTop(37);
	player->SetColliderBottom(-20);
	PlayerState::ResetState();
}
