#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: " << std::string(av[0]) << " <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error opening " << filename << ": " << std::strerror(errno) << std::endl;
		return 1;
	}
	std::ofstream outfile(filename + ".replace");
	if (!outfile.is_open())
	{
		std::cerr << "Error opening " << filename << ".replace" << ": " << std::strerror(errno) << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line << std::endl;
	}

}