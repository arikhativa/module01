
#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (2 == ac)
	{
		Harl	h;
		h.complain(av[1]);
	}
	else
		std::cout << "usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
	Harl h;
	return 0;
}
