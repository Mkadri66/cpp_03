/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:53:08 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/19 16:53:19 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & copy);
	~ScavTrap();

	ScavTrap&	operator=(ScavTrap const & rhs);

	void	guardGate();
	void	attack(const std::string& target);
};