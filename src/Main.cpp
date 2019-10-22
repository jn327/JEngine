#include "Main.hpp"
#include "Engine/Application.h"

int main()
{
	Application* app = new Application(600, 600, "My Window!");
	int runReturn = app->Run();

	delete app;
	return runReturn;
}
