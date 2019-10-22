#include "TimeManager.h"
#include "Debug.h"

//TODO: handles ticks, deltaTime, time since app start, maybe eventually some other bits...

TimeManager::TimeManager()
{
	Debug::Log("Time Manager created.");
}

TimeManager::~TimeManager()
{
	Debug::Log("Time Manager destroyed.");
}