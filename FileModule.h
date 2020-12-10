#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace File
{
	int Do(std::string ActionString, std::string FileRange);

	extern std::vector<std::string> Files;
		
	namespace Actions
	{
		void Delete(std::string FileRange);

		extern std::vector<std::string> List;
	}
}

