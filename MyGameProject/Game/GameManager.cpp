#include "GameManager.h"
#include "Textures.h"
#include  "Sprites.h"
#include "SceneManager.h"

GameManager::GameManager(HWND hWnd, HINSTANCE hInstance)
{
	graphic = Graphic::GetInstance();
	graphic->Init(hWnd);
	
	sceneManager = SceneManager::GetInstance();

	sceneManager->ReplaceScene(new DemoScene());


	this->hWnd = hWnd;
	this->hInstance = hInstance;
	isPause = false;
}

GameManager::~GameManager()
{
	//delete graphic;
	//graphic = NULL;
	//delete keyboard;
	//keyboard = NULL;
	//delete sceneManager;
	//sceneManager = NULL;
}

void GameManager::Update(float dt)
{
	if (isPause)
		return;

	sceneManager->Update(dt);
}

void GameManager::Render()
{
	auto device = Graphic::GetInstance()->GetCurrentDirect3DDevice();
	auto spriteHandler = Graphic::GetInstance()->GetCurrentSpriteHandler();
	auto scene = sceneManager->GetInstance()->GetCurrentScene();
	device->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_XRGB(200, 200, 255), 0.0f, 0);
	
	{
		device->BeginScene();

		spriteHandler->Begin(D3DXSPRITE_ALPHABLEND);

		scene->Render();

		spriteHandler->End();

		device->EndScene();
	}
	device->Present(NULL, NULL, NULL, NULL);
}

void GameManager::ProcessInput()
{
	
}
