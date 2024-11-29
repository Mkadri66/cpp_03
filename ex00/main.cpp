/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:22:00 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/29 13:23:58 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	ClapTrap	clapTrap_G("Goku");
	ClapTrap	clapTrap_V("Vegeta");

	clapTrap_G.attack("Freezer");
	clapTrap_G.setAttackDmg(4);
	clapTrap_G.attack("Cell");

	std::cout << std::endl;
	std::cout << "Goku hit points : " << clapTrap_G.getHitPts() << std::endl;
	clapTrap_G.takeDamage(7);
	std::cout << "Goku hit points : " << clapTrap_G.getHitPts() << std::endl;
	clapTrap_G.beRepaired(4);
	std::cout << "Goku hit points : " << clapTrap_G.getHitPts() << std::endl;

	std::cout << std::endl;
	clapTrap_G.takeDamage(11);
	clapTrap_G.attack("Buu");
	clapTrap_G.beRepaired(10);

	std::cout << std::endl;
	std::cout << "Vegeta energy points : " << clapTrap_V.getEnergyPts() << std::endl;
	for (int i = 0; i < 10; i++) {
		clapTrap_V.attack("Zamasu");
	}
	std::cout << std::endl;
	clapTrap_V.attack("random");
	clapTrap_V.beRepaired(4);

	return 0;
}