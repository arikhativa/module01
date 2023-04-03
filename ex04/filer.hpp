
#ifndef FILER_HPP
# define FILER_HPP

# include <iostream>
# include <string>
# include <fstream>

namespace filer
{
	void	search_and_replace(const std::string &fileName, const std::string &find, const std::string &replace);
}

#endif
