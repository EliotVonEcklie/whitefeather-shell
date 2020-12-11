#include <iostream>
#include <vector>
#include <string>

#include "CommandStringDecoder.h"
#include "FileModule.h"

void InputLoop()
{
    while (1)
    {
        std::cout << "$ ";
        
        std::string InputString;

        std::getline(std::cin, InputString);

        CommandStringDecoder InputCommand(InputString);

        if (InputCommand.hasValidModule() == true)
        {
            if (InputCommand.hasValidAction() == true)
            {
                std::cout << "Module: " << InputCommand.GetModule() << ", Action: " << InputCommand.GetAction() << "\n\n";
            }
            else if (InputCommand.GetAction().empty() == true)
            {
                std::cout << "\nSyntax Error!\n"
                    << "\n\tNo action especified!\n\n";
            }
            else
            {
                std::cout << "\nSyntax Error!\n"
                          << "\n\tUnexpected action: " << InputCommand.GetModule() << "." << InputCommand.GetAction() << "\n\n";
            }
        }
        else
        {
            std::cout << "\nSyntax Error!\n"
                      << "\n\tUnexpected module: " << InputCommand.GetModule() << "\n\n";
        }
    }
    return;
}

int main()
{
    std::cout << "White Feather Terminal v0.1.0\n"
              << "Copyright H4ck Software 2020.\n\n";
    
    InputLoop();
    return 0;
}
