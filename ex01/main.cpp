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

int	main(void)
{
	int			index;

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
			cout << "Please enter a VALID command : " << endl;
			cout << GREEN <<"ADD" << RESET << " to save a new contact" << endl;
			cout  << GREEN << "SEARCH" << RESET << " to display specific contact" << endl;
			cout << "or " << GREEN <<"EXIT" << RESET <<" to quit this wonderful phonenook app" << endl;
			cout << endl;
			continue ;
		}
		if (input == "SEARCH" || input == "search")
		{
			if (phonebook.get_sizecontent() == 0)
				cout << "PhoneBook is empty ..."<< endl;
			else
			{
				phonebook.display_all();
				do
				{
					cout << "Please enter the index of the entry to display: [0-" << (phonebook.get_sizecontent() - 1) << "]: ";
					cin >> index;

					if (cin.eof())
					{
						cout << endl;
						cout << RED << CTRL_D << RESET << endl;
						return 0;
					}
					if (cin.fail())
					{
						cout << RED << VALID_INDEX << RESET << endl;
						cin.clear();
						index = -1;
					}
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				} while (index < 0 || index > (phonebook.get_sizecontent() - 1));
				phonebook.search_contact(index);
			}
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