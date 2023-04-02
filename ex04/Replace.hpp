#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
	public:
		Replace(const std::string &fileName, const std::string &find, const std::string &replace);
		~Replace();
		void	replace_line_if_needed(std::string &line) const;
		void	search_and_replace(void) const;
	private:
	std::string		_fileName;
	std::string		_find;
	std::string		_replace;

};

#endif /* ********************************************************* REPLACE_H */