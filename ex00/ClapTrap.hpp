/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:23:53 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/01 17:43:51 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_TRAP_H

#define CLASS_TRAP_H

#include <iostream>

class ClapTrap {
    
    protected:
        std::string     _name;
        int             _hitPts;
        int             _energyPts;
        int             _attackDmg;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &clapCopy);
        virtual ~ClapTrap();
        
        ClapTrap&       operator=(ClapTrap const & rhs);
        
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        
        void            setAttackDmg(unsigned int attack);
        unsigned int    getHitPts() const;
        unsigned int    getEnergyPts() const;
        std::string     getName();
};

#endif