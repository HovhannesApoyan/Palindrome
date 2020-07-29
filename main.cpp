#include <iostream>
#include <string>

int main()
{
	std::string str;
	getline(std::cin, str);
	if (std::equal(str.begin(), str.end(), str.rbegin()))
		std::cout << "\"" << str << "\" is a palindrom.\n";
	else
		std::cout << "\"" << str << "\" isn't  a palindrom.\n";
	return 0;
}