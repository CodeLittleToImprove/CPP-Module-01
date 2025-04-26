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


#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << "NOOOOO my beloved " << this->getType() << " broke" << std::endl;
}

std::string Weapon::getType() const
{
	return this->_type;
}

void Weapon::setType(const std::string &type)
{
	this->_type = type;
}
