#include "Zombie.hpp"

int main()
{
    std::cout << "Creating 4 zombies named Unai" << std::endl;
    Zombie *hordeUnai = zombieHorde(4, "Unai");
    for (int i = 0; i < 4; i++)
    {
        hordeUnai[i].announce();
    }
    std::cout << "Creating 7 zombies named Nerea" << std::endl;
    Zombie *hordeNerea = zombieHorde(7, "Nerea");
    for (int i = 0; i < 7; i++)
    {
        hordeNerea[i].announce();
    }
    delete[] (hordeNerea);
    delete[] (hordeUnai);
}
