#include <iostream>
#include <string>

void inputLoop()
{
    while (1)
    {
        std::cout << " $ ";
        
        std::string InputString;

        std::getline(std::cin, InputString);

        std::cout << "\n\a" << InputString << "\n\n";
    }
    return;
}

int main()
{
    std::cout << "White Feather Terminal version 0.1.0\n"
              << "Character limit is of 2048 characters including null terminator.\n\n";
    
    inputLoop();
    return 0;
}
