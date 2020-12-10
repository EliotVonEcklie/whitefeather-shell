#include <iostream>
#include <string>
#include "FileModule.h"

void inputLoop()
{
    while (1)
    {
        std::cout << "$ ";
        
        std::string InputString;

        std::getline(std::cin, InputString);

        File::Actions::Delete(InputString);
    }
    return;
}

int main()
{
    std::cout << "White Feather Terminal version 0.1.0\n"
              << "Copyright H4ck Software 2020.\n\n";
    
    inputLoop();
    return 0;
}
