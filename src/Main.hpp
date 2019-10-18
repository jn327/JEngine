#ifndef MAIN_HPP
#define MAIN_HPP

#ifdef __APPLE__
	#include "Platform/MacOS/MacHelper.hpp"
	MacHelper __macHelper;
#endif // __APPLE__

#ifdef __linux__
	#include "Platform/Linux/LinuxHelper.hpp"
	LinuxHelper __linuxHelper;
#endif // __linux__

#ifdef _WIN32
	#include "Platform/Win32/WindowsHelper.hpp"
	WindowsHelper __windowsHelper;
#endif // _WIN32

//

#endif // MAIN_HPP
