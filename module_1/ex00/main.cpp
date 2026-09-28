#include "Zombie.hpp"

int main(void) {
    std::string dynamicChumpName = "Rob";
    std::string staticChumpName = "Rob";
    Zombie      *dynamicChump = newZombie(dynamicChumpName);

    dynamicChump->announce();
    randomChump(staticChumpName);
    
    return EXIT_SUCCESS;
}
