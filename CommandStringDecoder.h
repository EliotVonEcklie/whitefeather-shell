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

	void HandleCommandParserException(int Exception);

	std::string GetModule();
	std::string GetAction();
	std::string GetRange();

	// std::string GetDirectory();

	// std::string GetFlags();

	bool hasValidModule();
	bool hasValidAction();
	
	// bool hasValidRange();

	// bool hasValidDirectory();

	// bool hasValidFlags();

private:
	std::string CommandString;

	const std::vector<std::string> ValidModules = {
		"file",
		"terminal"
	};

	const std::vector<std::string> ValidActions = {
		"file.create",
		"file.delete",
		"terminal.exit"
	};

};

