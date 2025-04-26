/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui-quo <tbui-quo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:11:05 by tbui-quo          #+#    #+#             */
/*   Updated: 2025/04/24 16:11:06 by tbui-quo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std:: string name) // Parameterized constructor
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Deconstructor called: " << this->_name << ": Why did the zombie die—again? Because he accidentally ate gluten-free brains… no substance!" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


