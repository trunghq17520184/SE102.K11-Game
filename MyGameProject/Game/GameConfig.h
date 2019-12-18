#pragma once

// #define SCREEN_WIDTH 2256
// #define SCREEN_HEIGHT 1136

#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

// #define SCREEN_WIDTH 832
// #define SCREEN_HEIGHT 449

// Game FPS
#define FPS 60
#define SPF 1.0f/FPS
#define TIME_IMMORTAL 1.3f


// TEX ID
#define TEX_FONT1 260301
#define TEX_FONT2 260302

#define TEX_APPLE APPLE
#define TEX_HEART BLUEHEART
#define TEX_GEM GEM
#define TEX_GENIETOKEN GENIETOKEN
#define TEX_BLUEVASE BLUEVASE
#define TEX_PEDDLER PEDDLER
#define TEX_PEDDLER1 6325
#define TEX_STONE STONE
#define TEX_BALL BALL
#define TEX_SPIKE SPIKE
#define TEX_EXITPORT EXITPORT
#define TEX_OBSTACLES 1239
#define TEX_BAT BAT
#define TEX_SKELETON SKELETON
#define TEX_THINGUARD THINGUARD
#define TEX_FATGUARD FATGUARD
#define TEX_JAFAR JAFAR
#define TEX_CHAINEDPILLAR CHAINEDPILLAR
#define TEX_PILLAR CHAINEDPILLAR
#define TEX_SNAKEPILLAR SNAKEPILLAR

#define TEX_ENEMY 2603
#define TEX_ENEMY_EXPLOSION 2604
#define TEX_SMALLITEM_EXPLOSION 2605
#define TEX_BIGITEM_EXPLOSION 2606
#define TEX_APPLE_WEAPON_EXPLOSION 2607
#define TEX_SKELETON_WEAPON_EXPLOSION 2608
#define TEX_APPLE_WEAPON 2609
#define TEX_SKELETON_WEAPON 2610
// TEX ID


// KEYBOARD
#define DOWN_ARROW DIK_DOWNARROW
#define UP_ARROW DIK_UPARROW
#define LEFT_ARROW DIK_LEFTARROW
#define RIGHT_ARROW DIK_RIGHTARROW
#define JUMP_ARROW DIK_D
#define ATTACK_ARROW DIK_S
#define THROW_ARROW DIK_A
#define PRESS_KEY DIK_RETURN
// KEYBOARD


// SOUND
#define SULTAN_DUNGEON 0
#define JAFAR_PALACE 1
#define INTRO 2
#define REVIVING 3
#define LEVEL_COMPLETE 4
#define STONE_RUMBLE 5
#define GENIE_EXPLOSIVE 6
#define HEART_COLLECT 7
#define CONTINUE_POINT 8
#define APPLE_COLLECT 9
#define GEM_COLLECT 10
#define COMING_OUT 11
#define SKELETON_EXPLOSIVE 12
#define SPIKES 13
#define GUARD_INJURED 14
#define JAFAR_SNAKE 15
#define SPLASH_WALL 16
#define WOW 17
#define APPPLE_EXPLOSIVE 18
#define COME_ON 19
#define ALADDIN_IDLE_SPLASH 20
#define ALADDIN_DUCK_SPLASH 21
#define ALADDIN_THROW_APPLE 22
#define ALADDIN_INJURED 23
#define ALADDIN_OOF 24
#define ALADDIN_PUSH 25
#define ALADDIN_HEAD_BOP 26
#define SKELETON_COLIISION 27
#define APPLE_EXPLOSIVE 28
#define MONKEY 29
// SOUND

// CAMERA
#define INDEX_CAMERA_WIDTH 35
#define INDEX_CAMERA_HEIGHT 20
#define VELOCITY_CAMERA_X 3
#define VELOCITY_CAMERA_Y 10
// CAMERA


// SCENE ID
#define SCENE_1 1
#define ID_RIVIVING_SCENE 2
#define ID_INTRO_SCENE 3
#define ID_COMPLETE_SCENE 4
#define SCENE_JAFAR_PALACE 5
#define ID_CONTINUE_SCENE 6
// SCENE ID


// GRID
#define GRID_ROW_NUMBERS 15
#define GRID_COLUMN_NUMBERS 30
// GRID


// PLAYER STATE SPEED
#define RUN_SPEED 120
#define JUMP_SPEED 200
#define SLIDE_SPEED 50	
#define CLIMB_SPEED 130
#define MAX_JUMP 76
// PLAYER STATE SPEED


// FATGUARD SPEED
#define FATGUARD_RUNSPEED 100

// WEAPON SPEED
#define PLAYER_WEAPON_SPEED 200
#define ENEMY_WEAPON_SPEED 10

// WEAPON INDEX
#define APPLE_WEAPON_INDEX 1
#define SKELETON_WEAPON_INDEX 2

// GENIE TOKEN SPEED
#define GENIETOKEN_SPEED 15
#define GENIETOKEN_MAX_Y 7

// TAG
enum Tag {
	BAT,
	SKELETON,
	THINGUARD,
	FATGUARD,
	PEDDLER,
	CARPET,
	JAFAR,
	APPLE,
	BLUEHEART,
	GEM,
	GENIETOKEN,
	BLUEVASE,
	STONE,
	BALL,
	SPIKE,
	EXITPORT,
	GROUND,
	WALL,
	CHAINE,
	CHAINEDPILLAR,
	PILLAR1,
	PILLAR2,
	PILLAR3,
	PILLAR4,
	SNAKEPILLAR,
	PLAYER,
	SKELETONWEAPON,
	PLAYERWEAPON,
	NONE
};

// TYPE
enum Layer {
	PlayerType,
	EnemyType,
	ItemType,
	ObstaclesType,	// Chuong ngai vat
	StaticType,
	Surface,
	pWeapon,
	eWeapon,
	NoneType
};

