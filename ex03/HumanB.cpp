#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &newWeapon)
{
	weapon_ = &newWeapon;
}

void HumanB::attack() const
{
	if (weapon_)
	{
		std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
	}
	else
	{
		std::cout << name_ << " has no weapon to attack with!" << std::endl;
	}
}
