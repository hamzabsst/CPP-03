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
	std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_attackDamage = other._attackDamage;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor for " << _name << " called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot attack because it has no hit points left!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot attack because it has no energy points left!" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
		return;
	}
	if (_hitPoints > amount)
		_hitPoints -= amount;
	else
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!";
	if (_hitPoints == 0)
		std::cout << " " << _name << " is destroyed!";
	else
		std::cout << " Hit points remaining: " << _hitPoints;
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot repair because it is destroyed!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot repair because it has no energy points left!" << std::endl;
		return;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " repaired itself for " << amount << " hit points! Current HP: " << _hitPoints << ", Energy: " << _energyPoints << std::endl;
}
