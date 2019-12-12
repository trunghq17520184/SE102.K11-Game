#pragma once

//#define SCREEN_WIDTH 2256
//#define SCREEN_HEIGHT 1136
#define SCREEN_WIDTH 318
#define SCREEN_HEIGHT 230

// id scene

//

#define FPS 60
#define SPF 1.0f/FPS
//
#define TIME_IMMORTAL 1.3f

// TEX ID
#define TEX_APPLE APPLE
#define TEX_HEART BLUEHEART
#define TEX_GEM GEM
#define TEX_GENIETOKEN GENIETOKEN
#define TEX_BLUEVASE BLUEVASE
#define TEX_STONE STONE
#define TEX_BALL BALL
#define TEX_SPIKE SPIKE
#define TEX_EXITPORT EXITPORT
#define TEX_OBSTACLES 1239
#define TEX_BAT BAT
#define TEX_SKELETON SKELETON
#define TEX_THINGUARD THINGUARD
#define TEX_FATGUARD FATGUARD
#define TEX_CHAINEDPILLAR CHAINEDPILLAR
#define TEX_PILLAR CHAINEDPILLAR

#define TEX_ENEMY 2603
#define TEX_ENEMY_EXPLOSION 2604
#define TEX_SMALLITEM_EXPLOSION 2605
#define TEX_BIGITEM_EXPLOSION 2606
#define TEX_APPLE_WEAPON 2607

// keyBoard
#define DOWN_ARROW DIK_DOWNARROW
#define UP_ARROW DIK_UPARROW
#define LEFT_ARROW DIK_LEFTARROW
#define RIGHT_ARROW DIK_RIGHTARROW
#define JUMP_ARROW DIK_D
#define ATTACK_ARROW DIK_S
#define THROW_ARROW DIK_A

// camera
#define INDEX_CAMERA_WIDTH 35
#define INDEX_CAMERA_HEIGHT 20
#define VELOCITY_CAMERA 3


// SCENE ID
#define SCENE_1 1
#define ID_RIVIVING_SCENE 2

// GRID
#define GRID_ROW_NUMBERS 15
#define GRID_COLUMN_NUMBERS 30


// playerState speed
#define RUN_SPEED 120
#define JUMP_SPEED 200
#define SLIDE_SPEED 50	
#define CLIMB_SPEED 130
#define MAX_JUMP 76

// FatGuard Speed
#define FATGUARD_RUNSPEED 100


// type
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
	PLAYER,
	ENEMYWEAPONE,
	PLAYERWEAPON,
	NONE
};

// Type
enum Layer {
	PlayerType,
	EnemyType,
	ItemType,
	ObstaclesType,	// Chuong ngai vat
	StaticType,
	Surface,
	Weapon,
	NoneType
};

