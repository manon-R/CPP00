#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::string input;

	std::cout << CYAN << "********** PhoneBook **********" << RESET << std::endl;
	std::cout << std::endl;
	
	PhoneBook test;
	std::cout << std::endl;


	// std::cout << CYAN << "********** Contact **********" << RESET << std::endl;
	// std::cout << std::endl;

	// test.add_contact();
	// test.add_contact();
	// test.add_contact();
	// test.add_contact();
	// test.add_contact();
	// test.add_contact();
	// test.add_contact();
	// test.add_contact();

	// std::cout << std::endl;

	// std::cout << CYAN << "**** Try to add 9th contact ****" << RESET << std::endl;
	// std::cout << std::endl;
	
	// test.add_contact();

	// std::cout << std::endl;

	std::cout << CYAN << "**** Welcome in my crappy awesome phonebook software ****" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << "Please enter one of the following command : SEARCH, ADD or EXIT" << std::endl;
	std::cout << "=> ";
	std::cin >> input;
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
			continue ;
		}
		if (input == "SEARCH" || input == "search")
			std::cout << "This is the search command" << std::endl;
		if (input == "ADD" || input == "add")
			test.add_contact();
		std::cout << "Please enter one of the following command : SEARCH, ADD or EXIT" << std::endl;
		std::cout << "=> ";
		std::cin >> input;
	}

	std::cout << std::endl;
	std::cout << CYAN << "**** Bye Bye Phonebook User ! ****" << RESET << std::endl;
	std::cout << std::endl;
	
	return 0;
}