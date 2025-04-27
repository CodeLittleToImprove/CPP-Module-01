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


# ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>



class	Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Harl	(void);
	~Harl	(void);
	void	complain(std::string level);
};

// typedef void (Harl::*mem_fun)(void);
#endif
