#include "ThinGuardIdleState.h"

ThinGuardIdleState::ThinGuardIdleState(EnemyData* data) : EnemyState(data)
{
	e_Animation = new Animation();
	e_Animation->AddFramesA(Textures::GetInstance()->GetTexture(TEX_ENEMY), 4, 2, 4, 2, 2, 8, 10, 0.04f, D3DCOLOR_XRGB(255, 0, 255));
}

void ThinGuardIdleState::Update(float dt)
{
	//....
	auto enemy = enemyData->enemy;
	enemy->SetVx(0);
	enemy->SetVy(0);
}

void ThinGuardIdleState::ResetState()
{
}