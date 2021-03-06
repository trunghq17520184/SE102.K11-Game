#include "Graphic.h"

Graphic* Graphic::instance = NULL;


Graphic* Graphic::GetInstance()
{
	if (instance == NULL)
		instance = new Graphic();
	return instance;
}

void Graphic::Init(HWND hWnd)
{
	d3d = Direct3DCreate9(D3D_SDK_VERSION);

	this->hWnd = hWnd;
	
	D3DPRESENT_PARAMETERS d3dpp;
	
	ZeroMemory(&d3dpp, sizeof(d3dpp));
	
	d3dpp.Windowed = true;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.BackBufferCount = 1;
	d3dpp.BackBufferFormat = D3DFMT_X8R8G8B8;
	d3dpp.BackBufferHeight = SCREEN_HEIGHT;
	d3dpp.BackBufferWidth = SCREEN_WIDTH;
	
	d3d->CreateDevice(
		D3DADAPTER_DEFAULT,
		D3DDEVTYPE_HAL,
		hWnd,
		D3DCREATE_SOFTWARE_VERTEXPROCESSING,
		&d3dpp,
		&d3ddv
	);
	if (d3ddv == NULL)
	{
		OutputDebugString(L"[ERROR] Create Device failed\n");
		return;
	}

	d3ddv->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &backBuffer);
	
	D3DXCreateSprite(d3ddv, &spriteHandler);

	OutputDebugString(L"Init Device Successful;\n");
}

Graphic::~Graphic()
{
	if (backBuffer != NULL) {
		backBuffer->Release();
	}
	if (d3ddv != NULL) {
		d3ddv->Release();
	}
	if (d3d != NULL) {
		d3d->Release();
	}

	if (spriteHandler != NULL) {
		spriteHandler->Release();
	}
}

void Graphic::Draw(float x, float y, LPDIRECT3DTEXTURE9 texture)
{
	auto position = D3DXVECTOR3(x, y, 0);

	spriteHandler->Draw(
		texture, 
		NULL,
		NULL, 
		&position,
		D3DCOLOR_ARGB(255, 255, 255, 255)
	);
}

HWND Graphic::GetCurrentHWND()
{
	return hWnd;
}

void Graphic::SetCurrentHWND(HWND hWnd)
{
	this->hWnd = hWnd;
}

LPDIRECT3DDEVICE9 Graphic::GetCurrentDirect3DDevice()
{
	return d3ddv;
}

void Graphic::SetCurrentDirect3DDevice(LPDIRECT3DDEVICE9 d3dvv)
{
	this->d3ddv = d3ddv;
}

LPD3DXSPRITE Graphic::GetCurrentSpriteHandler()
{
	return spriteHandler;
}

void Graphic::SetCurrentSpriteHandler(LPD3DXSPRITE spriteHandler)
{
	this->spriteHandler = spriteHandler;
}

LPDIRECT3DSURFACE9 Graphic::GetBackBuffer()
{
	return backBuffer;
}

void Graphic::SetBackBuffer(LPDIRECT3DSURFACE9 backBuffer)
{
	this->backBuffer = backBuffer;
}


