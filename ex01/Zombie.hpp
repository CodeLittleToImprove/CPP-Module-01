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


# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void	announce();
	void	setName(std::string name);
};

Zombie	*newZombie(std::string name);
Zombie	*createZombieHorde(int n, std::string name);
#endif
