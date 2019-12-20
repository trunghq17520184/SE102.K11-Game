#include "PlayerState.h"
#include "Player.h"
#include"KeyBoard.h"
#include"Textures.h"

class PlayerDuckThrowState : public PlayerState
{
public:
	PlayerDuckThrowState() {};
	PlayerDuckThrowState(PlayerData* data);
	void Render() override;
	void Update(float dt) override;
	void HandleInput() override;
	void OnCollision(Entity* impactor, Entity::SideCollision side, float collisionTime, float dt = 1.0 / 60) override;
	//State GetState() override;
	State GetStateName() override;
	void ResetState(int dummy) override;
	BoxCollider GetBody()override;
};