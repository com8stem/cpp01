#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name_;
public:
	Zombie(std::string name);

	~Zombie();

	void announce()const;

	void set_name(const std::string name);

	std::string get_name()const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif