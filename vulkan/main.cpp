#include"Engine.h"

#ifndef NDEBUG
const bool DEBUG = false;
#else
const bool DEBUG = true;
#endif // !NDEBUG


int main()
{
	Engine engine;
	try
	{
		engine.Run();
	}
	catch(const std::exception & error)
	{
		std::cerr << error.what() << std::endl;
		if (DEBUG)
		{
			system("pause");
		}
		return EXIT_FAILURE;
	}

	if (DEBUG)
	{
		system("pause");
	}
	return EXIT_SUCCESS;
}