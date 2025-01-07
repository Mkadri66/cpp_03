/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:02:21 by mkadri            #+#    #+#             */
/*   Updated: 2024/12/20 16:14:10 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {

	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_maxHitPoints = 100;
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy): ClapTrap(copy) {
	*this=copy;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs) {

	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return *this;
}

void	FragTrap::highFiveGuys() {

	if (_hitPoints <= 0) {
		std::cout << "Can 't highfive " << _name << " because he is dead" << std::endl;
		return ;
	}
	std::cout << "High Five guys 👏!" << std::endl;
}