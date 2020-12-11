#include "CommandStringDecoder.h"

const enum CommandParserException
{
	ModuleNotFoundException = 1,
	EmptyActionException = 2,
	ActionNotFoundException = 3
};

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
		else if ((Loop + 1) == String.size())
		{
			CurrentParticle += CurrentCharacter;
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

CommandStringDecoder::CommandStringDecoder(std::string CommandString = "") throw(int)
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

	std::vector<std::string> CommandParticles = DivideString(this->CommandString);

	Module = CommandParticles.at(0);

	return Module;
}

std::string CommandStringDecoder::GetAction()
{
	std::string Action;

	std::vector<std::string> CommandParticles = DivideString(this->CommandString);

	for(size_t Loop = 0; Loop < CommandParticles.size(); Loop++)
	{
		if (CommandParticles.at(Loop) == "do")
		{
			if (CommandParticles.size() <= (Loop + 1))
			{
				break;
			}
			Action = CommandParticles.at(Loop + 1);
			break;
		}
	}

	return Action;
}

std::string CommandStringDecoder::GetRange()
{
	std::string Range;

	return "";
}

bool CommandStringDecoder::hasValidModule()
{
	bool hasValidModule = false;

	for(int Loop = 0; Loop < this->ValidModules.size(); Loop++)
	{
		if (Module == this->ValidModules.at(Loop))
		{
			hasValidModule = true;
			break;
		}
	}

	return hasValidModule;
}

bool CommandStringDecoder::hasValidAction()
{
	std::string Action = this->GetModule() + "." + this->GetAction();

	bool hasValidAction = false;

	for (int Loop = 0; Loop < this->ValidActions.size(); Loop++)
	{
		if (Action == this->ValidActions.at(Loop))
		{
			hasValidAction = true;
			break;
		}
	}

	return hasValidAction;
}
