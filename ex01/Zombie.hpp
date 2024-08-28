#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name_;

public:
	Zombie();

	Zombie(std::string name);

	~Zombie();
	
	void announce() const;

	void set_name(const std::string name);

	std::string get_name() const;
};

Zombie *zombieHorde(int N, std::string name);

#endif