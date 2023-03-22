#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	HumanB::attack(void) const
{
	if (_weapon == NULL)
		std::cout << _name << " attacks with their <no weapon>" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

/* ************************************************************************** */