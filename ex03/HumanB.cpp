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


#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_is_armed = false;
	std::cout << this->_name << " entered Summoners Rift " << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " died" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	this->_is_armed = true;
	std::cout << this->_name << " picked up a " << this->_weapon->getType() << " to join the fiesta " << std::endl;
}

void HumanB::attack()
{
	if (this->_is_armed)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with his bare hands " << std::endl;
}