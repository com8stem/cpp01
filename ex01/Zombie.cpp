#include "Zombie.hpp"

void Zombie::set_name(const std::string name)
{
	this->name_ = name;
}

std::string Zombie::get_name() const
{
	return this->name_;
}

void Zombie::announce() const
{
	std::string name = this->get_name();
	std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie()
{
	this->name_ = "default";
	std::cout << this->name_ << " is born" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name_ = name;
	std::cout << this->name_ << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name_ << " is dead" << std::endl;
}
