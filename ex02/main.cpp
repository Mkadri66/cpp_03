/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:57:21 by mkadri            #+#    #+#             */
/*   Updated: 2024/12/20 16:13:07 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap_I("IronMan");
    
	fragTrap_I.attack("Thor");
	std::cout << "IronMan energy points : " << fragTrap_I.getEnergyPoints() << std::endl;
	std::cout << "IronMan hit points : " << fragTrap_I.getHitPoints() << std::endl;
	fragTrap_I.takeDamage(47);
	std::cout << "IronMan hit points : " << fragTrap_I.getHitPoints() << std::endl;
	fragTrap_I.beRepaired(24);
	std::cout << "IronMan hit points : " << fragTrap_I.getHitPoints() << std::endl;
	fragTrap_I.highFiveGuys();
	fragTrap_I.takeDamage(101);
	fragTrap_I.beRepaired(100);
	fragTrap_I.highFiveGuys();

	std::cout << std::endl;


    return (0);
}