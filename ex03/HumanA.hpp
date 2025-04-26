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


# ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

#include <iostream>



class	HumanA
{
private:
	std::string		_name;
	Weapon			&_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack();
};

#endif
