
#include <iostream>
#include <string>

int main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR(&str);
	std::string &stringREF(str);

	std::cout << "address:" << std::endl;
	std::cout << "str: \t\t" << &str << std::endl;
	std::cout << "stringPTR: \t" << stringPTR << std::endl;
	std::cout << "stringREF: \t" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "values:" << std::endl;
	std::cout << "str: \t\t" << str << std::endl;
	std::cout << "stringPTR: \t" << *stringPTR << std::endl;
	std::cout << "stringREF: \t" << stringREF << std::endl;
}
