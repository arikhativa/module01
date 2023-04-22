
#include "Harl.hpp"

const	std::string	Harl::DEBUG("DEBUG");
const	std::string	Harl::INFO("INFO");
const	std::string	Harl::WARNING("WARNING");
const	std::string	Harl::ERROR("ERROR");

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl()
{
	std::string		levels[] = {DEBUG, INFO, WARNING, ERROR};
	t_harl_methods	methods[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < _NUM_OF_LEVELS; ++i)
	{
		_levels[i] = levels[i];
		_methods[i] = methods[i];
	}
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

	while (i < _NUM_OF_LEVELS)
	{
		if (level == _levels[i])
			(this->*_methods[i])();
		++i;
	}
}

void	Harl::debug(void) const
{
	std::cout << DEBUG << ": " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << INFO << ": " << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << WARNING << ": " << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) const
{
	std::cout << ERROR << ": " << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/* ************************************************************************** */
