#pragma once
#include "Renderer.h"

class Engine
{
public:
	Engine();
	~Engine();

	void Run();

private:
	Renderer vkRender;

	void MainLoop();
	void Cleanup();

};

