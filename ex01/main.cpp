#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

#define  CTRL_D			"FORCED EXIT"
#define  VALID_INDEX	"Please enter valid index "

int	main(void)
{
	std::string input;
	int			index;

	std::cout << CYAN << "********** PhoneBook **********" << RESET << std::endl;
	std::cout << std::endl;
	
	PhoneBook test;
	std::cout << std::endl;

	std::cout << CYAN << "**** Welcome in my crappy awesome phonebook software ****" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << "Please enter one of the following command : SEARCH, ADD or EXIT" << std::endl;
	std::cout << "=> ";
	std::cin >> input;
	if (!std::cin.good())
	{
		std::cout << std::endl;
		std::cout << RED << CTRL_D << RESET << std::endl;
		return 0;
	}
	while (input != "EXIT" && input != "exit")
	{
		if (input != "SEARCH" && input != "ADD" && input != "search" && input != "add")
		{
			std::cout << "Please enter a VALID command : " << std::endl;
			std::cout << GREEN <<"ADD" << RESET << " to save a new contact" << std::endl;
			std::cout  << GREEN << "SEARCH" << RESET << " to display specific contact" << std::endl;
			std::cout << "or" << GREEN <<"EXIT" << RESET <<" to quit this wonderful phonenook app" << std::endl;
			std::cout << std::endl;
			std::cout << "=> ";
			std::cin >> input;
			if (!std::cin.good())
			{
				std::cout << std::endl;
				std::cout << RED << CTRL_D << RESET << std::endl;
				return 0;
			}
			continue ;
		}
		if (input == "SEARCH" || input == "search")
		{
			if (test.get_sizecontent() == 0)
				std::cout << "PhoneBook is empty ..."<< std::endl;
			else
			{
				test.display_all();
				do
				{
					std::cout << "Please enter the index of the entry to display: [0-" << (test.get_sizecontent() - 1) << "]: ";
					std::cin >> index;
					if (std::cin.fail())
					{
						std::cout << RED << VALID_INDEX << RESET << std::endl;
						std::cin.clear();
						std::cin.ignore();
						index = -1;
					}
					if (!std::cin.good())
					{
						std::cout << std::endl;
						std::cout << RED << CTRL_D << RESET << std::endl;
						return 0;
					}
				} while (index < 0 || index > (test.get_sizecontent() - 1));
				test.search_contact(index);
			}
		}
		if (input == "ADD" || input == "add")
			test.add_contact();
		std::cout << std::endl;
		std::cout << "Please enter one of the following command : SEARCH, ADD or EXIT" << std::endl;
		std::cout << "=> ";
		std::cin >> input;
		if (!std::cin.good())
		{
			std::cout << std::endl;
			std::cout << RED << CTRL_D << RESET << std::endl;
			return 0;
		}
	}

	std::cout << std::endl;
	std::cout << CYAN << "**** Bye Bye Phonebook User ! ****" << RESET << std::endl;
	std::cout << std::endl;
	
	return 0;
}