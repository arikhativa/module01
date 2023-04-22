
#include "Harl.hpp"

int	main()
{
	Harl h;

	std::cout << "valid inputs:" << std::endl;
	h.complain(Harl::DEBUG);
	h.complain(Harl::INFO);
	h.complain(Harl::WARNING);
	h.complain(Harl::ERROR);
	std::cout << std::endl;

	std::cout << "empty input:" << std::endl;
	h.complain("");
	return 0;
}
