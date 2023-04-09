
#include "Harl.hpp"

const	std::string	Harl::_DEBUG = "DEBUG";
const	std::string	Harl::_INFO = "INFO";
const	std::string	Harl::_WARNING = "WARNING";
const	std::string	Harl::_ERROR = "ERROR";

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Harl::~Harl()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Harl::complain( std::string level ) const
{
	int		i = 0;
	std::string levels[] = {_DEBUG, _INFO, _WARNING, _ERROR};
	t_harl_methods methods[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (i < 4)
	{
		if (level == levels[i])
			(this->*methods[i])();
		++i;
	}
}

void	Harl::debug(void) const
{
	std::cout << _DEBUG << ": " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << _INFO << ": " << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << _WARNING << ": " << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) const
{
	std::cout << _ERROR << ": " << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/* ************************************************************************** */
