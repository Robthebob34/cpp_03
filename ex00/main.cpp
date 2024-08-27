/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:36:24 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 13:36:36 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap hero("Hero");
    ClapTrap villain("Villain");

    hero.attack("Villain");
    villain.takeDamage(0);

    villain.attack("Hero");
    hero.takeDamage(0);

    hero.beRepaired(5);
    villain.beRepaired(5);

    for (int i = 0; i < 10; i++)
    {
        hero.attack("Villain");
    }

    hero.beRepaired(10);
    villain.takeDamage(15);

    ClapTrap copyHero(hero);
    copyHero.attack("Villain");

    return 0;
}
