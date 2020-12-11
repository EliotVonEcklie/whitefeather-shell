#include "FileModule.h"

void File::Delete(std::string Files, bool Force = false, bool Recursive = false)
{
	std::cout << "\nDeleting range 'everything' from directory 'here' :\n\n";

	size_t Loop;

	for (Loop = 0; Loop < Files.size(); Loop++)
	{
		std::cout << Loop << "\t\t" << Files.at(Loop) << "\n";
	}

	std::cout << "\nDeleted " << Loop << " entries.\n";
	
	return;
}
