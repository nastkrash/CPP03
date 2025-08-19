#include "ClapTrap.hpp"

// Constructors & Destructors

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->setName("Default");
    this->setHitPoints(10);
    this->setEnergyPoints(10);
    this->setAttackDamage(0);
}

ClapTrap::ClapTrap(std::string name)
{
    this->setName(name);
    std::cout << "ClapTrap Constructor for the name " << this->getName() << " called" << std::endl;
    this->setHitPoints(10);
    this->setEnergyPoints(10);
    this->setAttackDamage(0); 
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
    std::cout << "Copy constructor called for " << src.getName() << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << this->getName() << std::endl;
}

// Assignment operator

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
    if (this != &src)
    {
        std::cout << "Assignment operator called" << std::endl;
        this->setName(src.getName());
        this->setHitPoints(src.getHitPoints());
        this->setEnergyPoints(src.getEnergyPoints());
        this->setAttackDamage(src.getAttackDamage());
    }
    return *this;
}

// Getters & Setters

std::string ClapTrap::getName() const
{
    return this->name;
}
unsigned int ClapTrap::getHitPoints() const
{
    return this->hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const
{
    return this->energyPoints;
}
unsigned int ClapTrap::getAttackDamage() const
{
    return this->attackDamage;
}
void ClapTrap::setName(const std::string& name)
{
    this->name = name;
}
void ClapTrap::setHitPoints(unsigned int hitPoints)
{
    this->hitPoints = hitPoints;
}
void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
    this->energyPoints = energyPoints;
}
void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    this->attackDamage = attackDamage;
}

// Public Methods

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0)
        std::cout << "ClapTrap " << this->getName() << " doesn't have any energy points left." << std::endl;
    else if (this->hitPoints == 0)
        std::cout << "ClapTrap " << this->getName() << " doesn't have any hit points left." << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage." << std::endl;
        this->energyPoints--;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints == 0)
        std::cout << "ClapTrap " << this->getName() << " doesn't have any energy points left." << std::endl;
    else if (this->hitPoints == 0)
        std::cout << "ClapTrap " << this->getName() << " doesn't have any hit points left." << std::endl;
    else
    {
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout << "ClapTrap " << this->getName() << " repaired itself and gained " << amount << " of hit points, he now has " << this->getHitPoints() << " hit points." << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getHitPoints() == 0)
    {
        std::cout << "ClapTrap " << this->getName() << " doesn't have any hit points left." << std::endl;
        return;
    }
    if (this->getHitPoints() > amount)
        this->setHitPoints(this->getHitPoints() - amount);
    else
        this->setHitPoints(0);
    std::cout << "ClapTrap " << this->name << " took " << amount << " damage, now has " << this->hitPoints << " hit points left..." << std::endl;
        
}


