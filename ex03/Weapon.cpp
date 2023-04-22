#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon(const std::string &type) : _type(type)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const	&Weapon::getType(void) const
{
	return _type;
}

void	Weapon::setType(const std::string &type)
{
	_type = type;
}

/* ************************************************************************** */
