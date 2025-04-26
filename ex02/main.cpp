/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui-quo <tbui-quo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:11:14 by tbui-quo          #+#    #+#             */
/*   Updated: 2025/04/24 17:44:30 by tbui-quo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(void)
{
	// A string variable initialized
	std::string brain = "HI THIS IS BRAIN";

	// A pointer to the string
	std::string* stringPTR = &brain;

	// A reference to the string // kinda equal to just using brain directly
	std::string& stringREF = brain;

	// Print memory addresses
	std::cout << "Memory address of brain:    " << &brain << std::endl;
	std::cout << "Memory address held by PTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by REF: " << &stringREF << std::endl;

	std::cout << std::endl;

	// Print values
	std::cout << "Value of brain:              " << brain << std::endl;
	std::cout << "Value pointed to by PTR:     " << *stringPTR << std::endl;
	std::cout << "Value pointed to by REF:     " << stringREF << std::endl;

	return 0;
}
