
#include "filer.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace <filename> <find> <replace>" << std::endl;
		return 1;
	}
	filer::search_and_replace(av[1], av[2], av[3]);
	return 0;
}
