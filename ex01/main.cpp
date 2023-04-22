
#include "Zombie.hpp"

int	main()
{
	int N = 10;
	int i = 0;
	Zombie *Horde = zombieHorde(N, "Horde");

	while (i < N)
	{
		Horde[i].announce();
		++i;
	}
	delete [] Horde;
	return 0;
}
