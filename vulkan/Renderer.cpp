#include "Renderer.h"



Renderer::Renderer()
{
}


Renderer::~Renderer()
{
}

void Renderer::InitVulkan()
{
	CreateInstance();
}

void Renderer::Cleanup()
{
	vkDestroyInstance(instance_, nullptr);
}

void Renderer::CreateInstance()
{
	VkApplicationInfo appInfo = {};
	appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	appInfo.pNext = nullptr;
	appInfo.pApplicationName = "Vulkan singularity";
	appInfo.applicationVersion = VK_MAKE_VERSION(0, 0, 0001);
	appInfo.pEngineName = "VulkanGDE";
	appInfo.engineVersion = VK_MAKE_VERSION(0, 0, 0001);
	appInfo.apiVersion = VK_API_VERSION_1_0;

	VkInstanceCreateInfo InstInfo = {};
	InstInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	InstInfo.pNext = nullptr;
	InstInfo.flags = 0;
	InstInfo.pApplicationInfo = &appInfo;
	
	//* Layer select part (need modify)
	InstInfo.enabledLayerCount = 0;
	InstInfo.ppEnabledLayerNames = nullptr;
	
	//* Extensions select part (need modify)
	InstInfo.enabledExtensionCount = 0;
	InstInfo.ppEnabledExtensionNames = nullptr;

	if (vkCreateInstance(&InstInfo, nullptr, &instance_) != VK_SUCCESS)
	{
		throw std::runtime_error("Failed to create Instance!");
	}

	//std::cout << "Instance successfully created!" << std::endl;
}
