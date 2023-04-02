#include "Replace.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Replace::Replace(const std::string &fileName, const std::string &find, const std::string &replace) :
	_fileName(fileName), _find(find), _replace(replace)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Replace::~Replace(void)
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Replace::replace_line_if_needed(std::string &line) const
{
	std::string::size_type itr = line.find(_find);

	while(itr != std::string::npos)
	{
		line.erase(itr, _find.length());
		line.insert(itr, _replace);
		itr = line.find(_find);
	}
}

void Replace::search_and_replace(void) const
{
	std::ifstream		ifs(_fileName.c_str());
	std::ofstream		ofs;
	std::string			stream;
	std::string			line;

	if (!ifs.is_open())
	{
		std::cout << "Error: Failed to open file: '" << _fileName << "'" << std::endl;
		return ;
	}
	ofs.open((_fileName + ".replace").c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error: Failed to create a file" << std::endl;
		ifs.close();
		ofs.close();
		return ;
	}
	while (std::getline(ifs, line))
	{
		replace_line_if_needed(line);
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}

/* ************************************************************************** */