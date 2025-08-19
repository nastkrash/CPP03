#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
    	// Constructors & Destructors
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& src);
        ~ScavTrap();
        // Assignment operator
        ScavTrap& operator=(const ScavTrap& other);

    // Methods
        void guardGate();
        void attack(const std::string& target);
};

#endif