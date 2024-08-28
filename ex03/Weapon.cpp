#include "Weapon.hpp"

const std::string& Weapon::getType()const
{
	return type_;
}

void Weapon::setType(const std::string &newType)
{
	this->type_ = newType;
}