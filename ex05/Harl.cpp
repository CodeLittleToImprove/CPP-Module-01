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


#include "Harl.hpp"


Harl::Harl()
{
	std::cout << "Harl reports for duty" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl has finished his duty" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*functionPtrs[])(void)	= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string typeComplains[]			= {"DEBUG", "INFO", "WARNING", "ERROR"};
	bool						matched = false;

	for (int i = 0; i < 4; i++)
	{
		if (typeComplains[i] == level)
		{
			(this->*functionPtrs[i])();
			matched = true;
			break;
		}
	}
	// this is the current object pointer
	// functionPtrs[i] is a pointer to a member function of Harl (for example, &Harl::debug)
	// this->*functionPtrs[i] tells the compiler, "Call the member function functionPtrs[i] on the current object
	//void (*funcPtr)() = &someFunction; default way to call a non member function pointer
	if (!matched)
	{
		std::cout << "Harl can't recognize this kind of complain level " << level << std::endl;
	}
}
