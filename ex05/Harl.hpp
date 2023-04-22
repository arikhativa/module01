
#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl;

typedef void (Harl::*t_harl_methods )(void) const;

class Harl
{
	public:
		static const	std::string	DEBUG;
		static const	std::string	INFO;
		static const	std::string	WARNING;
		static const	std::string	ERROR;

		Harl();
		~Harl();
		void	complain( std::string level ) const;

	private:
		static const	int	_NUM_OF_LEVELS = 4;
		std::string		_levels[_NUM_OF_LEVELS];
		t_harl_methods	_methods[_NUM_OF_LEVELS];

		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

#endif /* ************************************************************ HARL_H */
