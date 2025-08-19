#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
    	// Constructors & Destructors
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& src);
        ~ClapTrap();
        // Assignment operator
        ClapTrap& operator=(const ClapTrap& other);
	    // Public Methods
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        // Getters & Setters
        std::string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;
        void setName(const std::string& name);
        void setHitPoints(unsigned int hitPoints);
        void setEnergyPoints(unsigned int energyPoints);
        void setAttackDamage(unsigned int attackDamage);

};

#endif