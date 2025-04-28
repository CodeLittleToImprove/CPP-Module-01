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

#include <iostream>
#include <fstream>


void replaceAndWrite(std::ifstream &inputFile, std::ofstream &outputFile, const std::string &searchString, const std::string &replaceString)
{
	std::string	line;
	size_t		pos;
	bool		found = false;
	bool		isFirstLine = true;


	while (std::getline(inputFile, line))
	{
		pos = 0;
		while ((pos = line.find(searchString, pos)) != std::string::npos)
		{
			line.erase(pos, searchString.length());
			line.insert(pos, replaceString);
			found = true;
			pos += replaceString.length();
		}
		if (isFirstLine)
		{
			outputFile << line;
			isFirstLine = false;
		}
		else
			outputFile << std::endl << line;
	}
	if (!found)
		std::cout << "Warning: No occurrences of \"" << searchString << "\" were found in the file." << std::endl;
	if (!found)
		std::cout << "Warning: No occurrences of \"" << searchString << "\" were found in the file." << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: " << " <filename> <search> <replace>" << std::endl;
		return 1;
	}

	std::string		inputFilename = argv[1];
	std::string		searchString = argv[2];
	std::string		replaceString = argv[3];

	if (searchString.empty() || replaceString.empty())
	{
		std::cerr << "Error: search and replace strings cannot be empty." << std::endl;
		return 2;
	}
	std::ifstream	inputFile(inputFilename.c_str()); //convert from String to const char * and calls constructor of ifstream

	if (!inputFile.is_open())
	{
		std::cout << "Failed to open file " << argv[1] << "." << std::endl;
		return 3;
	}
	std::string outputFilename = inputFilename + ".replace";
	std::ofstream	outputFile(outputFilename.c_str());

	if (!outputFile.is_open())
	{
		std::cout << "Failed to create file " << outputFilename << "." << std::endl;
		return 4;
	}
	replaceAndWrite(inputFile, outputFile, searchString, replaceString);

	inputFile.close();
	outputFile.close();
	return 0;
}
