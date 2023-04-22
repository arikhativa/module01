
# include <iostream>
# include <string>
# include <sstream>
# include <fstream>

static void replace_string_if_needed(std::string &file, const std::string &find, const std::string &replace)
{
	std::string::size_type itr = file.find(find);

	while(itr != std::string::npos)
	{
		file.erase(itr, find.length());
		file.insert(itr, replace);
		itr = file.find(find);
	}
}

static int	search_and_replace(const std::string &fileName, const std::string &find, const std::string &replace)
{
	std::ifstream		ifs(fileName.c_str());
	std::ofstream		ofs;
	std::stringstream	buffer;

	if (!ifs.is_open())
	{
		std::cerr << "Error: Failed to open file: '" << fileName << "'" << std::endl;
		return -1;
	}
	ofs.open((fileName + ".replace").c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error: Failed to create a file" << std::endl;
		ifs.close();
		return -1;
	}
	buffer << ifs.rdbuf();
	std::string	file(buffer.str());
	replace_string_if_needed(file, find, replace);
	ofs << file;
	ifs.close();
	ofs.close();
	return 0;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace <filename> <find> <replace>" << std::endl;
		return -1;
	}
	return search_and_replace(av[1], av[2], av[3]);
}
