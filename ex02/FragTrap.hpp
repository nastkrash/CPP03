#ifndef FLAGTRAP_CLASS_H
# define FLAGTRAP_CLASS_H
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    	// Constructors & Destructors
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& src);
        ~FragTrap();
        // Assignment operator
        FragTrap& operator=(const FragTrap& other);

    // Methods
        void highFivesGuys(void);
        void attack(const std::string& target);
};

#endif