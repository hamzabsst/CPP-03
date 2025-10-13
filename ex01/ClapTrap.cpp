/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:36:45 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/13 09:41:50 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("NPC"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor for " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor for " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = other;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy operator called" << std::endl;
	_name = other._name;
	_attackDamage = other._attackDamage;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor for " << _name << " called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0) return;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > amount)
		_hitPoints -= amount;
	else if (_hitPoints > 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0 || _hitPoints <= 0) return;
	std::cout << "ClapTrap " << _name << " repaired " << amount << " of hit points!" << std::endl;
	_hitPoints += amount;
	_energyPoints--;
}
