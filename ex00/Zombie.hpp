#pragma once

#include <string>

class Zombie
{
private:
	std::string name;
public:
	void announce(void);
	void setName(std::string name);
};
