#include <iostream>
#include <iomanip>

int main()
{
	std::string   string = "HI THIS IS BRAIN";
	std::string * stringPTR = &string;
	std::string & stringREF = string;

	std::cout << std::left << std::setw(32) << "Address of string"				<< ": " <<	&string		<< std::endl;

	std::cout << std::left << std::setw(32) << "Address held by stringPTR"		<< ": " <<	stringPTR	<< std::endl;

	std::cout << std::left << std::setw(32) << "Address held by stringREF"		<< ": " <<	&stringREF	<< std::endl;

	std::cout << std::left << std::setw(32) << "Value of string"				<< ": " <<	string		<< std::endl;

	std::cout << std::left << std::setw(32) << "Value pointed to by stringPTR"	<< ": " <<	*stringPTR	<< std::endl;

	std::cout << std::left << std::setw(32) << "Value pointed to by stringREF"	<< ": " <<	stringREF	<< std::endl;

}