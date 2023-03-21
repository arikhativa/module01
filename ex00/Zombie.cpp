#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie(std::string name) : _name(name)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


/* ************************************************************************** */