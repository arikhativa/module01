#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		explicit HumanB(const std::string& name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack(void) const;
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif /* ********************************************************** HUMANB_H */
