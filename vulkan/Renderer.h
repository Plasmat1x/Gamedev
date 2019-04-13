#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <fstream>
#include <vector>
#include <exception>
#include <iostream>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <vulkan/vulkan.h>

#ifndef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif // !NDEBUG


class Renderer
{
public:
	Renderer();
	~Renderer();

	void InitVulkan();
	void Cleanup();
private:

	//* variables
	VkInstance instance_;

	//* extensions and layers variables
	const std::vector<const char*> validationLayers;
	
	//* create modules
	void CreateInstance();

	//*tools
	bool checkValidationLayersSupport();

};

/*

Plans:
instance = complete
physical device
memory
queue
surface


*/

