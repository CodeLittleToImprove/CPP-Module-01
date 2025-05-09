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
	Zombie *zombie1 = newZombie("Heapy");	// Creates a Zombie on the heap using newZombie() function
	randomChump("Stacky");					// Creates a Zombie on the stack using randomChump() function
	Zombie zombie2("Stacky2");				// Creates a Zombie on the stack directly in the main function
	zombie1->announce();
	delete zombie1;
	return 0;
}
