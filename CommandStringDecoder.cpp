#include "CommandStringDecoder.h"

std::vector<std::string> DivideString(std::string String, char Delimiter = ' ')
{
	std::vector<std::string> StringParticles;

	size_t Particle = 0;

	std::string CurrentParticle;

	for (size_t Loop = 0; Loop < String.size(); Loop++)
	{

		char CurrentCharacter = String.at(Loop);

		if (CurrentCharacter == Delimiter)
		{
			StringParticles.push_back(CurrentParticle);
			CurrentParticle.erase(0, CurrentParticle.size());
			continue;
		}
		else
		{
			CurrentParticle += CurrentCharacter;
			continue;
		}
	}

	return StringParticles;
}

CommandStringDecoder::CommandStringDecoder(std::string CommandString)
{
	this->CommandString = CommandString;
	return;
}

void CommandStringDecoder::SetCommandString(std::string CommandString)
{
	this->CommandString = CommandString;
	return;
}

std::string CommandStringDecoder::GetModule()
{
	std::string Module;

	std::vector<std::string> CommandParticles = DivideString(CommandString);

	Module = CommandParticles.at(0);

	return Module;
}

std::string CommandStringDecoder::GetAction()
{
	std::string Action;

	std::vector<std::string> CommandParticles = DivideString(CommandString);

	for(size_t Loop = 0; Loop < CommandParticles.size(); Loop++)
	{
		if (CommandParticles.at(Loop) == "do")
		{
			Action = CommandParticles.at(Loop + 1);
			break;
		}
	}

	return Action;
}
