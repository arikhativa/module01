
#include <string>
#include <sstream>

template <typename T>
std::string	toString(T num)
{
	std::ostringstream ss;
	ss << num;
	return ss.str();
}
