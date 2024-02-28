#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define  CTRL_D			"FORCED EXIT"
#define  VALID_INDEX	"Please enter valid index "

static void invalid_cmd(void)
{
	cout << "Please enter a VALID command : " << endl;
	cout << GREEN <<"ADD" << RESET << " to save a new contact" << endl;
	cout  << GREEN << "SEARCH" << RESET << " to display specific contact" << endl;
	cout << "or " << GREEN <<"EXIT" << RESET <<" to quit this wonderful phonenook app" << endl;
	cout << endl;
}

int	main(void)
{
	cout << CYAN << "********** PhoneBook **********" << RESET << endl;
	cout << endl;
	
	PhoneBook phonebook;
	cout << endl;

	cout << CYAN << "**** Welcome in my crappy awesome phonebook software ****" << RESET << endl;
	cout << endl;
	while (true)
	{
		string input;
		while (input.empty() == true)
		{
			cout << "Please enter one of the following command : SEARCH, ADD or EXIT" << endl;
			cout << "=> ";
			std::getline(std::cin, input);
			if (!cin.good())
			{
				cout << endl;
				cout << RED << CTRL_D << RESET << endl;
				return 0;
			}
		}
		if (input == "EXIT" || input == "exit")
			break;
		if (input != "SEARCH" && input != "ADD" && input != "search" && input != "add")
		{
			invalid_cmd();
			continue ;
		}
		if (input == "SEARCH" || input == "search")
		{
			if (phonebook.search() == -1)
				return 0;
		}
		else if (input == "ADD" || input == "add")
			phonebook.add_contact();
		cout << endl;
	}
	cout << endl;
	cout << CYAN << "**** Bye Bye Phonebook User ! ****" << RESET << endl;
	cout << endl;
	
	return 0;
}