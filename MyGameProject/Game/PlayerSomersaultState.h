#pragma once
#include "PlayerState.h"
#include "Player.h"

class PlayerSomersaultState : public PlayerState
{
public:
	PlayerSomersaultState() {};
	PlayerSomersaultState(PlayerData* data);
	~PlayerSomersaultState();
	void Render() override;
	void Update(float dt) override;
	void HandleInput() override;
	void OnCollision(Entity* impactor, Entity::SideCollision side, float collisionTime, float dt = 1.0 / 60) override;
	State GetStateName() override;
	void ResetState(int dummy) override;
};