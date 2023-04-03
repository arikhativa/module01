
#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>


class Harl
{
	public:
		Harl();
		~Harl();
		void	complain( std::string level ) const;

		static const	std::string	_DEBUG;
		static const	std::string	_INFO;
		static const	std::string	_WARNING;
		static const	std::string	_ERROR;
	private:
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

typedef void (Harl::*t_harl_methods )(void) const;

#endif /* ************************************************************ HARL_H */
