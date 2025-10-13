/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:45:52 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/13 14:12:56 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Diamond("Guardian");

	Diamond.ScavTrap::attack("Enemy");
	std::cout << std::endl;
	Diamond.takeDamage(30);
	std::cout << std::endl;
	Diamond.beRepaired(20);
	std::cout << std::endl;
	Diamond.whoAmI();
	std::cout << std::endl;
	return 0;
}
