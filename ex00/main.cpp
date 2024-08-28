#include "Zombie.hpp"

int main()
{
	Zombie* zombie;
	
	zombie = newZombie("Alpha");
	zombie->announce();
	delete zombie;

	randomChump("Bravo");
	
	return 0;
}