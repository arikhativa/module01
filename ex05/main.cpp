
#include "Harl.hpp"

int	main()
{
	Harl h;

	std::cout << "valid inputs:" << std::endl;
	h.complain(Harl::_DEBUG);
	h.complain(Harl::_INFO);
	h.complain(Harl::_WARNING);
	h.complain(Harl::_ERROR);
	std::cout << std::endl;

	std::cout << "empty input:" << std::endl;
	h.complain("");
	return 0;
}
