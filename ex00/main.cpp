#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("Hero");

    std::cout << "\n=== Testing Attacks ===" << std::endl;
    clap.attack("Monster");

    std::cout << "\n=== Taking Damage ===" << std::endl;
    clap.takeDamage(4);

    std::cout << "\n=== Repairing ===" << std::endl;
    clap.beRepaired(4);

    std::cout << "\n=== Draining Energy ===" << std::endl;
    for (int i = 0; i < 10; ++i)
        clap.attack("Dummy");

    std::cout << "\n=== Testing with No Energy ===" << std::endl;
    clap.beRepaired(5);
    clap.attack("ExhaustedTarget");

    std::cout << "\n=== Taking Fatal Damage ===" << std::endl;
    clap.takeDamage(100);

    std::cout << "\n=== Trying to Act While Dead ===" << std::endl;
    clap.beRepaired(10);
    clap.attack("Ghost");

    return 0;
}
