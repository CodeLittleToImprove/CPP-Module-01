/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui-quo <tbui-quo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:11:09 by tbui-quo          #+#    #+#             */
/*   Updated: 2025/04/24 16:11:10 by tbui-quo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

#include <iostream>

class	HumanB
{
private:
	std::string		_name;
	Weapon			*_weapon;
	bool			_is_armed;
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif
