/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:32:27 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/19 16:34:50 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    
	protected:

	std::string		_name;
	int				_hitPoints;
	unsigned int	_maxHitPoints;
	int				_energyPoints;
	int				_attackDamage;
    
    

	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & clapCopy);
	virtual ~ClapTrap();

	ClapTrap&	operator=(ClapTrap const & rhs);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void			setAttackDamage(unsigned int attack);
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	std::string		getName() const;
};


#endif