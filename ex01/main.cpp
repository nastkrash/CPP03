#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "\n--- Creating ClapTrap ---" << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("Enemy1");
    clap.takeDamage(3);
    clap.beRepaired(5);

    std::cout << "\n--- Creating ScavTrap ---" << std::endl;
    ScavTrap scav("Scavy");
    scav.attack("Enemy2");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();

    std::cout << "\n--- Destructor will be called automatically in reverse order ---" << std::endl;
    return 0;
}

