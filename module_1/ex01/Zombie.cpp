#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

void Zombie::announce(void) {
    std::cout << name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie " << name << " was destroyed" << std::endl;
}
