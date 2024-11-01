/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:22:00 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/01 17:53:14 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	ClapTrap	clapTrap_J("John");
	ClapTrap	clapTrap_P("Peter");

	clapTrap_J.attack("Bob");
	clapTrap_J.setAttackDmg(4);
	clapTrap_J.attack("Kevin");

	std::cout << std::endl;
	std::cout << "John hit points : " << clapTrap_J.getHitPts() << std::endl;
	clapTrap_J.takeDamage(7);
	std::cout << "John hit points : " << clapTrap_J.getHitPts() << std::endl;
	clapTrap_J.beRepaired(4);
	std::cout << "John hit points : " << clapTrap_J.getHitPts() << std::endl;

	std::cout << std::endl;
	clapTrap_J.takeDamage(11);
	clapTrap_J.attack("Steven");
	clapTrap_J.beRepaired(10);

	std::cout << std::endl;
	std::cout << "Peter energy points : " << clapTrap_P.getEnergyPts() << std::endl;
	for (int i = 0; i < 10; i++) {
		clapTrap_P.attack("poor Richard");
	}
	std::cout << std::endl;
	clapTrap_P.attack("random");
	clapTrap_P.beRepaired(4);

	return 0;
}