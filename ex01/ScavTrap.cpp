/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 16:30:01 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/12 16:41:54 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
	
}
// ScavTrap::ScavTrap(const ScavTrap &copy);
// virtual ScavTrap::~ScavTrap();
// ScavTrap ScavTrap::&operator=(const ScavTrap &src);

void attack(const std::string &target);
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

