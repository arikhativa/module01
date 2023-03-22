
#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("bill");

	zombie->announce();
	delete zombie;
	randomChump("jojo");
	return 0;
}
