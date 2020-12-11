#pragma once
#include "FileModule.h"

namespace File
{
	std::string CurrentWorkingDirectory;

	std::vector<std::string> Actions = {
		"create",
		"delete"
	};
}

void File::Do(std::string Action, std::string Range, std::string Flags)
{
	return;
}
