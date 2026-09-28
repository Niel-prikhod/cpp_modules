#include "Zombie.hpp"

int main(void) {
    std::string dynamicChumpName = "Rob";
    std::string staticChumpName = "Bob";
    Zombie      *dynamicChump = newZombie(dynamicChumpName);

    dynamicChump->announce();
    randomChump(staticChumpName);
    delete dynamicChump;
    
    return EXIT_SUCCESS;
}
