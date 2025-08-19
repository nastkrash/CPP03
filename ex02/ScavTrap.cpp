#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor for the name " << this->getName() << " called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap destructor called for " << this->getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignment operator called" << std::endl;
    if (this != &other) 
        ClapTrap::operator=(other); // Reuse base assignment
    return *this;
}


// Override attack
void ScavTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() == 0)
        std::cout << "ScavTrap " << this->getName() << " doesn't have any energy points left." << std::endl;
    else if (this->getHitPoints() == 0)
        std::cout << "ScavTrap " << this->getName() << " doesn't have any hit points left." << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage." << std::endl;
        this->setEnergyPoints(this->getEnergyPoints()-1);
    }
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode!" << std::endl;
}



