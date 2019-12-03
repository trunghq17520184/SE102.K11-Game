#pragma once
#include "Item.h"
#include "Textures.h"

class Apple : public Item {
public:
	Apple();
	~Apple();
	void Update(float dt) override;
	void OnCollision(Entity* impactor, SideCollision side, float collisionTime, double dt = 1.0 / 60) override;
};