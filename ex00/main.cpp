#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie* zombie1 = newZombie("Zombie1");
	zombie1->announce();
	delete zombie1;

	randomChump("Zombie2");

}