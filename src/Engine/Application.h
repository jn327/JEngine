#include "TimeManager.h"

class Application
{
 public:
 	Application(const int width, const int height, const char* name);
	~Application();

	int Run();

 private:
	sf::RenderWindow _window;

	TimeManager* _timeManager;
};