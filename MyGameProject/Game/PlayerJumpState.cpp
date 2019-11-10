﻿#include "PlayerJumpState.h"

PlayerJumpState::PlayerJumpState(PlayerData* data)
{
	this->playerData = data;
	auto texs = Textures::GetInstance();
	texs->Add(1021, "Resources/PlayerState/aladinjump.png", D3DCOLOR_XRGB(255, 0, 255));
	m_Animation = new Animation();
	m_Animation->AddFrames(texs->GetTexture(1021), 1, 6, 0.2f, D3DCOLOR_XRGB(255, 255, 255));

}

PlayerJumpState::~PlayerJumpState()
{
}

void PlayerJumpState::Render()
{
	D3DXVECTOR3 p;
	auto player = playerData->player->GetInstance();
	if (playerData->player->GetMoveDirection() == Entity::MoveDirection::RightToLeft)
		p = D3DXVECTOR3(player->GetPosition().x , player->GetPosition().y + (74 / 2 - 55 / 2), 0);
	else
		p = D3DXVECTOR3(player->GetPosition().x , player->GetPosition().y + (74 / 2 - 55 / 2), 0);
	m_Animation->Render(p, BoxCollider(), D3DCOLOR_XRGB(255, 255, 255), playerData->player->GetMoveDirection() == Entity::MoveDirection::RightToLeft);

}

void PlayerJumpState::Update(float dt)
{
	auto player = playerData->player->GetInstance();
	
	
	float MaxYPos = player->GetPre_Y_Position() + MAX_JUMP;

	if (player->GetPosition().y > MaxYPos)
		player->IsJump = false;

	if (player->IsJump == true && player->GetPosition().y <= MaxYPos)
	{
		player->SetVy(JUMP_SPEED);
	}

	if (player->IsJump == false)
	{
		player->SetVy(-JUMP_SPEED);
	}
	
	if (m_Animation->IsLastFrame(dt) == true)
	{
		player->SetState(Fall);
	}
	PlayerState::Update(dt);
	
	
}

void PlayerJumpState::HandleInput()
{
	auto player = playerData->player->GetInstance();
	auto keyboard = KeyBoard::GetInstance();

	if (keyboard->GetKey(ATTACK_ARROW))
	{
		player->SetState(JumpAttack);
	}
	// Nếu ấn right-arrow thì chạy qua phai
	if (keyboard->GetKey(RIGHT_ARROW) || keyboard->GetKeyDown(RIGHT_ARROW))
	{
		player->SetMoveDirection(Entity::MoveDirection::LeftToRight);
		player->SetVx(RUN_SPEED);
		return;
	}
	// Nếu ấn left-arrow thì chạy qua trái
	if (keyboard->GetKey(LEFT_ARROW) || keyboard->GetKeyDown(LEFT_ARROW))
	{
		player->SetMoveDirection(Entity::MoveDirection::RightToLeft);
		player->SetVx(-RUN_SPEED);
		return;
	}
}