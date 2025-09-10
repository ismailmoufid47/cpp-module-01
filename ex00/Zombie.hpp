#pragma once

#include <string>

class Zombie
{

private:
	std::string name;

public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void announce(void);
	void setName(std::string name);

};