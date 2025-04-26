/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui-quo <tbui-quo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:11:14 by tbui-quo          #+#    #+#             */
/*   Updated: 2025/04/24 17:44:30 by tbui-quo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void)
{
	int		hordeSize = 5;
	Zombie	*zombieHorde = createZombieHorde(hordeSize, "Walker Team A");

	for (int i = 0; i < hordeSize; i++)
	{
		zombieHorde[i].announce();
	}
	delete [] zombieHorde;
	return (0);
}
