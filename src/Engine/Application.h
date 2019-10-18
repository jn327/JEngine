#include "TimeManager.h"

class Application
{
 public:
 	Application(int width, int height, std::string name);
	int Run();

 private:
	sf::RenderWindow _window;

	TimeManager* _timeManager;
};