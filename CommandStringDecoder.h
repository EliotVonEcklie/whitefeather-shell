#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "FileModule.h"

class CommandStringDecoder
{
public:
	CommandStringDecoder(std::string CommandString);

	void SetCommandString(std::string CommandString);

	std::string GetModule();
	std::string GetAction();
	std::string GetRange();
	std::string GetDirectory();

	// std::string GetFlags();

private:
	std::string CommandString;

	std::string Module;
	std::string Action;
	std::string Range;
	std::string Directory;
};

