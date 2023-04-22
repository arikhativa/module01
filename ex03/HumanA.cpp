#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanA::~HumanA()
{
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

/* ************************************************************************** */
