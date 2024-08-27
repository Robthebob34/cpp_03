/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:23:18 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:23:23 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap hero("Hero");
    ScavTrap villain("Villain");
    FragTrap champion("Champion");

    hero.attack("Villain");
    villain.takeDamage(0);

    villain.attack("Hero");
    hero.takeDamage(20);

    hero.beRepaired(5);
    villain.beRepaired(5);

    for (int i = 0; i < 10; i++)
    {
        villain.attack("Hero");
    }

    villain.guardGate();

    champion.attack("Villain");
    villain.takeDamage(30);

    champion.highFivesGuys();

    return 0;
}
