
#include "Zombie.hpp"

static std::string	toString(int num)
{
	std::ostringstream ss;
	ss << num;
	return ss.str();
}

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;

	if (N <= 0)
		return NULL;
    Zombie *Horde = new Zombie[N];
	while (i < N)
	{
		std::string tmpName = name + "-" + toString(i);
		Horde[i].init(tmpName);
		++i;
	}
	return Horde;
}
