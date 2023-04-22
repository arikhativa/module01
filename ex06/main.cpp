
#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (2 == ac)
	{
		Harl	h;
		h.complain(av[1]);
	}
	else
	{
		std::cerr << "usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return -1;
	}
	return 0;
}
