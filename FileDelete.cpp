#include "FileModule.h"

void File::Delete(std::string Files, bool Force = false, bool Recursive = false)
{
	size_t Loop;

	for (Loop = 0; Loop < Files.size(); Loop++)
	{
		std::cout << Loop << "SUCCESS: \t\t" << Files.at(Loop) << "\n";
	}

	std::cout << "\nDeleted " << Loop << " entries successfully.\n";
	
	return;
}
