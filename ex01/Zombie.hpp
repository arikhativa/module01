#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <sstream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie();
		void	init(std::string name);
		void	announce( void );

	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif /* ********************************************************** ZOMBIE_H */
