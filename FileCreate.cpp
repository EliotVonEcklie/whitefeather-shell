#include "FileModule.h"

void File::Create(std::string Files, std::string Content)
{
	for (size_t Loop = 0; Loop < Files.size(); Loop++)
	{
		std::cout << Loop << "\t\t" << Files.at(Loop) << "\n";
		std::fstream NewFile;

		NewFile.open((char*)Files.at(Loop), std::ios::out);
		NewFile << Content;
		NewFile.close();
	}

	std::cout << "\nCreated " << Files.size()  << " entries.\n";

	return;
}
