
#include "Replace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace <filename> <find> <replace>" << std::endl;
		return 1;
	}
	Replace	replace(av[1], av[2], av[3]);
	replace.search_and_replace();
	return 0;
}
