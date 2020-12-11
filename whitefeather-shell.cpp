#include <iostream>
#include <vector>
#include <string>

#include "FileModule.h"

void InputLoop()
{
    while (1)
    {
        std::cout << "$ ";
        
        std::string InputString;

        std::getline(std::cin, InputString);

        File::Delete(InputString);
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
