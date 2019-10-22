#include "Debug.h"

void Debug::Log( const char* message )
{
	//TODO: maybe provide info with time
	//also an override to say who called and on what function?
	std::cout << message << std::endl;;
}