#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &new_name) : name(new_name), weapon(0) {}

void HumanB::setWeapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
}

void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
