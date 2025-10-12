/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:45:52 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/12 15:05:03 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap tom("tom");
	ClapTrap jerry("jerry");

	tom.attack("jerry");
	jerry.takeDamage(10);
	jerry.beRepaired(10);
	return 0;
}
