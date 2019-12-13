#include "SkeletonWeaponExplosion.h"

SkeletonWeaponExplosion::SkeletonWeaponExplosion(D3DXVECTOR3 pos) : Effect(pos)
{
	auto textures = Textures::GetInstance();
	//textures->Add(TEX_SKELETON_WEAPON_EXPLOSION, "Resources/Weapons/apple.png", D3DCOLOR_XRGB(255, 255, 255));
	Textures* texs = Textures::GetInstance();
	animation = new Animation();
	animation->AddFramesA(texs->GetTexture(TEX_APPLE_WEAPON_EXPLOSION), 1, 5, 1, 9, 9, 1, 9, 0.1f);
}
