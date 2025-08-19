#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("Clap");

    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap scav("Scav");

    std::cout << "\n=== Creating FragTrap ===" << std::endl;
    FragTrap frag("Frag");

    std::cout << "\n=== Testing Attacks ===" << std::endl;
    clap.attack("Enemy1");
    scav.attack("Enemy2");
    frag.attack("Enemy3");

    std::cout << "\n=== Taking Damage ===" << std::endl;
    frag.takeDamage(40);

    std::cout << "\n=== Repairing ===" << std::endl;
    frag.beRepaired(20);

    std::cout << "\n=== Using Special Ability ===" << std::endl;
    frag.highFivesGuys();

    std::cout << "\n=== Destructor Order ===" << std::endl;
    return 0;
}
