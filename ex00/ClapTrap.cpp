/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:24:19 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/01 17:44:15 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructors and destructor

ClapTrap::ClapTrap(): _hitPts(10), _energyPts(10), _attackDmg(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called " << std::endl;
}

// affectation

ClapTrap&       ClapTrap::operator=(ClapTrap const & rhs)
{
    if(this != &rhs)
    {
        _name = rhs._name;
        _hitPts = rhs._hitPts;
        _energyPts = rhs._energyPts;
        _attackDmg = rhs._attackDmg;
    }
    return *this;
}

// functions

void	ClapTrap::attack(const std::string &target) {

	if (_hitPts <= 0) {
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
		return ;
	}
	if (_energyPts == 0) {
		std::cout << "ClapTrap " << _name << " has no more energy points and can't do anything..." << std::endl;
		return ;
	}

	_energyPts--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDmg << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damages !" << std::endl;
	_hitPts -= amount;
	if (_hitPts <= 0) {
		std::cout << _name << " dies in terrible pain..." << std::endl;
		return ;
	}
	if (amount <= 0)
		std::cout << _name << " stands strong !" << std::endl;
	else
		std::cout << _name << " staggers a bit..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_hitPts <= 0) {
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
		return ;
	}
	if (_energyPts == 0) {
		std::cout << "ClapTrap " << _name << " has no more energy points and can't do anything..." << std::endl;
		return ;
	}
	if (_hitPts == 10) {
		std::cout << "ClapTrap " << _name << " is already full life..." << std::endl;
		return ;
	}

	_energyPts--;
	for (unsigned int i = 0; i < amount && i < 10; i++)
		_hitPts++;
	std::cout << "ClapTrap " << _name << " repairs himself of " << amount << " hit points. It feels way better !" << std::endl;
}

void	ClapTrap::setAttackDmg(unsigned int attack) {

	this->_attackDmg = attack;
}

unsigned int	ClapTrap::getHitPts() const {
	return this->_hitPts;
}

unsigned int	ClapTrap::getEnergyPts() const {
	return this->_energyPts;
}