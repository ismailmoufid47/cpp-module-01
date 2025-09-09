#include "Zombie.hpp"
#include <iostream>

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string new_name)
{
	name = new_name;
}