#include "FileModule.h"

void File::Actions::Delete(std::string FileRange)
{
	if(FileRange == "rangeselect everything")
	{
		std::cout << "\nDeleting range 'everything' from directory 'here' :\n\n";

		size_t Loop;

		for (Loop = 0; Loop < File::Files.size(); Loop++)
		{
			std::cout << Loop << "\t" << File::Files.at(Loop) << "\n";
		}

		std::cout << "\nDeleted " << Loop << " entries in 0.0 seconds.\n";

	}
}
