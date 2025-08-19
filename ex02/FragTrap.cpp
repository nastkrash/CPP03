#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
    std::cout << "FlagTrap default constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FlagTrap Constructor for the name " << this->getName() << " called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    std::cout << "FlagTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap() 
{
    std::cout << "FlagTrap destructor called for " << this->getName() << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FlagTrap assignment operator called" << std::endl;
    if (this != &other) 
        ClapTrap::operator=(other); // Reuse base assignment
    return *this;
}


// Override attack
void FragTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() == 0)
        std::cout << "FlagTrap " << this->getName() << " doesn't have any energy points left." << std::endl;
    else if (this->getHitPoints() == 0)
        std::cout << "FlagTrap " << this->getName() << " doesn't have any hit points left." << std::endl;
    else
    {
        std::cout << "FlagTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage." << std::endl;
        this->setEnergyPoints(this->getEnergyPoints()-1);
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " requests a high five!" << std::endl;
}





