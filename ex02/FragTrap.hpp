/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:02:16 by mkadri            #+#    #+#             */
/*   Updated: 2024/12/20 16:03:43 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
	
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap();

	FragTrap&	operator=(FragTrap const & rhs);

	void	highFiveGuys();
};