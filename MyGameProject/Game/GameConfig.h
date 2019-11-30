#pragma once

#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 518
//#define SCREEN_WIDTH 318
//#define SCREEN_HEIGHT 230

#define INDEX_CAMERA_WIDTH 30
#define INDEX_CAMERA_HEIGHT 20
#define VELOCITY_CAMERA 3

#define FPS 60
#define SPF 1.0f/FPS

// TEX ID
#define TEX_DEMOOBJECT 100
#define TEX_DEMOENEMY 200
#define TEX_APPLE APPLE
#define TEX_GEM GEM
#define TEX_HEART BLUEHEART
#define TEX_GENIETOKEN GENIETOKEN
#define TEX_BLUEVASE BLUEVASE
#define TEX_STONE STONE
#define TEX_BALL BALL
#define TEX_SPIKE SPIKE
#define TEX_PILLAR PILLAR
#define TEX_EXITPORT EXITPORT

#define TEX_BAT BAT
#define TEX_SKELETON SKELETON
#define TEX_THINGUARD THINGUARD
#define TEX_FATGUARD FATGUARD
#define TEX_CHAINEDPILLAR CHAINEDPILLAR


#define PLAYER_RUN_VELOCCITY 500

// keyBoard
#define DOWN_ARROW DIK_DOWNARROW
#define UP_ARROW DIK_UPARROW
#define LEFT_ARROW DIK_LEFTARROW
#define RIGHT_ARROW DIK_RIGHTARROW
#define JUMP_ARROW DIK_D
#define ATTACK_ARROW DIK_S
#define THROW_ARROW DIK_A


// SCENE ID
#define DEMO_SCENE 1

// GRID
#define GRID_COLUMN_NUMBERS 141
#define GRID_ROW_NUMBERS 71


// state speed
#define RUN_SPEED 120
#define JUMP_SPEED 150
#define SLIDE_SPEED 50
#define MAX_JUMP 90

//
enum Tag {
	GROUND,
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
	CHAINE,
	STONE,
	BALL,
	SPIKE,
	CHAINEDPILLAR,
	PILLAR,
	EXITPORT,
	NONE,
	PLAYER
};

enum Layer {
	StaticType,
	PlayerType,
	EnemyType,
	//Enemy projectile
	EProjectileType,
	//Player projectile
	PProjectileType,
	//katana + pprojectile tac dong duoc
	ItemHolderType,
	//katana + pprojectile ko tac dong dc
	ItemAvailableType,
	NoneType
};