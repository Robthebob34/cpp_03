/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:23:00 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:23:02 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default Constructor
FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " default constructor called." << std::endl;
}

// Parameterized Constructor
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " parameterized constructor called." << std::endl;
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << _name << " copy constructor called." << std::endl;
}

// Destructor
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructor called." << std::endl;
}

// Assignment Operator
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << _name << " copy assignment operator called." << std::endl;
    return *this;
}

// attack Method
void FragTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "FragTrap " << _name << " powerfully attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << _name << " cannot attack due to insufficient energy or hit points!" << std::endl;
    }
}

// highFivesGuys Method
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " is requesting a positive high five!" << std::endl;
}
