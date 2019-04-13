#include "Engine.h"



Engine::Engine()
{
}


Engine::~Engine()
{
}

void Engine::Run()
{
	vkRender.InitVulkan();
	//MainLoop();
	Cleanup();
}

void Engine::MainLoop()
{

}

void Engine::Cleanup()
{
	vkRender.Cleanup();
}
