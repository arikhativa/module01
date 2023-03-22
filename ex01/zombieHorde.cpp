
#include "toString.hpp"
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;

	if (N <= 0)
		return NULL;
    Zombie *Horde = new Zombie[N];
	while (i < N)
	{
		std::string tmpName = name + "-" + toString<int>(i);
		Horde[i].init(tmpName);
		++i;
	}
	return Horde;
}
