/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:32:22 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/19 16:35:34 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	_maxHitPoints = 10;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this=copy;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
	
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string &target) {

	if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
		return ;
	}
	if (_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " has no more energy points and can't do anything..." << std::endl;
		return ;
	}

	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damages !" << std::endl;
	_hitPoints -= amount;
	if (_hitPoints <= 0) {
		std::cout << _name << " dies in terrible pain..." << std::endl;
		return ;
	}
	if (amount <= 0)
		std::cout << _name << " stands strong !" << std::endl;
	else
		std::cout << _name << " staggers a bit..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
		return ;
	}
	if (_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " has no more energy points and can't do anything..." << std::endl;
		return ;
	}
	if (_hitPoints == 10) {
		std::cout << "ClapTrap " << _name << " is already full life..." << std::endl;
		return ;
	}

	_energyPoints--;
	for (unsigned int i = 0; i < amount && i < _maxHitPoints; i++)
		_hitPoints++;
	std::cout << "ClapTrap " << _name << " repairs himself of " << amount << " hit points. It feels way better !" << std::endl;
}

void	ClapTrap::setAttackDamage(unsigned int attack) {

	this->_attackDamage = attack;
}

unsigned int	ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

std::string	ClapTrap::getName() const {
	return this->_name;
}