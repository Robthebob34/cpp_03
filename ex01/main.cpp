/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:18:12 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:18:14 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap hero("Hero");
    ScavTrap villain("Villain");

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

    return 0;
}
