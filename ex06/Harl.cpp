
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

	while (i < 4)
	{
		if (level == levels[i])
			break;
		++i;
	}
	switch(i)
	{
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case 1:
			this->info();
			this->warning();
			this->error();
			break;
		case 2:
			this->warning();
			this->error();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

static void	print(const std::string &level, const std::string &message)
{
	std::cout << "[ " << level << " ]" << std::endl << message << std::endl << std::endl;

}

void	Harl::debug(void) const
{
	print(_DEBUG, "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!");
}

void	Harl::info(void) const
{
	print(_INFO, "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!");
}

void	Harl::warning(void) const
{
	print(_WARNING, "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.");
}

void	Harl::error(void) const
{
	print(_ERROR, "This is unacceptable! I want to speak to the manager now.");
}

/* ************************************************************************** */
