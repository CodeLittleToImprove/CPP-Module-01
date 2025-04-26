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


# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
private:
	std::string _type;
public:
	Weapon		(const std::string &type); // can handle temporaries and normal ones thanks to reference
	~Weapon();
	std::string	getType() const;
	void		setType(const std::string &type);
};

#endif
