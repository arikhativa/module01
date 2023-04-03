
#include "filer.hpp"

static void replace_line_if_needed(std::string &line, const std::string &find, const std::string &replace)
{
	std::string::size_type itr = line.find(find);

	while(itr != std::string::npos)
	{
		line.erase(itr, find.length());
		line.insert(itr, replace);
		itr = line.find(find);
	}
}

void	filer::search_and_replace(const std::string &fileName, const std::string &find, const std::string &replace)
{
	std::ifstream		ifs(fileName.c_str());
	std::ofstream		ofs;
	std::string			stream;
	std::string			line;

	if (!ifs.is_open())
	{
		std::cout << "Error: Failed to open file: '" << fileName << "'" << std::endl;
		return ;
	}
	ofs.open((fileName + ".replace").c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error: Failed to create a file" << std::endl;
		ifs.close();
		return ;
	}
	while (std::getline(ifs, line))
	{
		replace_line_if_needed(line, find, replace);
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}
