/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:45:52 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/13 10:26:10 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap scav("Guardian");

	scav.attack("Enemy");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.highFivesGuys();

	return 0;
}
