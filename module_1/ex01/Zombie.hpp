#include <string>

class Zombie {
    private:
        std::string name;

    public:
        Zombie(std::string name); 
        ~Zombie(void);
        void announce(void);        
};

Zombie* zombieHorde( int N, std::string name );
