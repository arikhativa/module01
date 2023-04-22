
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

		static const	std::string	DEBUG;
		static const	std::string	INFO;
		static const	std::string	WARNING;
		static const	std::string	ERROR;
	private:
		
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

#endif /* ************************************************************ HARL_H */
