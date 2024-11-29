/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:28:12 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/29 13:29:44 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
    ScavTrap	scarvTrap_G("Goku");

    std::cout << std::endl << std::endl;
    scarvTrap_G.attack("Vegeta");
    std::cout << "Goku energy points : " << scarvTrap_G.getEnergyPoints() << std::endl;
    std::cout << "Goku hit points : " << scarvTrap_G.getHitPoints() << std::endl;
    scarvTrap_G.takeDamage(47);
    std::cout << "Goku hit points : " << scarvTrap_G.getHitPoints() << std::endl;
    scarvTrap_G.beRepaired(24);
    std::cout << "Goku hit points : " << scarvTrap_G.getHitPoints() << std::endl;
    scarvTrap_G.guardGate();
    scarvTrap_G.takeDamage(101);
    scarvTrap_G.beRepaired(100);
    scarvTrap_G.guardGate();
}