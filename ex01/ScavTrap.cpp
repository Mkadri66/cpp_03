/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:53:31 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/29 12:34:11 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_maxHitPoints = 100;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy): ClapTrap(copy) {
	*this=copy;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs) {

	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return *this;
}
void	ScavTrap::guardGate() {

	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " cannot guard the gate, he is dead..." << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << _name << " is now in gate keeper mode !" << std::endl;
}

void	ScavTrap::attack(const std::string & target) {

	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " is dead..." << std::endl;
		return ;
	}
	if (_energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " has no more energy points and can't do anything..." << std::endl;
		return ;
	}

	_energyPoints--;
	std::cout << "ScavTrap " << _name << " inflicts " << _attackDamage << " points of damage to " << target << std::endl;
}