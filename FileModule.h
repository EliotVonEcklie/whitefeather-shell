#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdbool>

namespace File
{
	void Do(std::string Action, std::string Range, std::string Flags);

	extern std::string CurrentWorkingDirectory;
	extern std::vector<std::string> Actions;
		
	void Create(std::string Files, std::string Content);
	void Delete(std::string Files, bool Force = false, bool Recursive = false);
}

