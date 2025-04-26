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


#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon)
	:_weapon(weapon) // this is called initializer list must be used because of reference in weapon
{
	this->_name = name;
	std::cout << this->_name << " has as weapon a " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " died" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}