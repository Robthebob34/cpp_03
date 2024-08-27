/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:34:38 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:34:41 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    // Create a DiamondTrap object
    DiamondTrap dt("Diamond");

    // Test methods
    dt.attack("Target");
    dt.takeDamage(20);
    dt.beRepaired(10);
    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();

    return 0;
}
