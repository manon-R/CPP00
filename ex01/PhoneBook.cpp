#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

using std::cout;
using std::endl;
using std::string;

static void display_space(int nb)
{
	int i = 0;
	while (i < nb)
	{
		cout << " ";
		i++;
	}
}

static void display_info(string str, bool end){
	if (str.length() > 10)
		cout << std::setfill ('.') << std::setw (10) << std::left << str.substr(0, 9);
	else
		cout << std::setfill (' ') << std::setw (10) << std::left << str;
	if (end)
		cout << CYAN << "|" << RESET;
}

PhoneBook::PhoneBook(void){

	cout << GREEN <<"PhoneBook Constructor called" << RESET << endl;
	size_content = 0;
	oldest_id = 0;
	return;
}

PhoneBook::~PhoneBook(void){

	cout << RED << "PhoneBook Destructor called" << RESET << endl;
	return;
}

int	PhoneBook::get_sizecontent(void){
	return (size_content);
}

void PhoneBook::add_contact()
{
	int index = size_content;
	if (index == 8)
	{
		index = oldest_id;
		oldest_id = (oldest_id == 7) ? 0 : oldest_id + 1;
	}
	contactList[index].contact_form();
	size_content = (size_content == 8) ? size_content : (size_content + 1);
	cout << GREEN << "Contact n*" << size_content << " added with success" << RESET << endl;
}

void PhoneBook::search_contact(int index)
{
	cout << CYAN << "Contact information for index " << index << ":" << RESET << endl;
	cout << "First name: " << contactList[index].get_first_name() << endl;
	cout << "Last name: " << contactList[index].get_last_name() << endl;
	cout << "Nickname: " << contactList[index].get_nickname() << endl;
}

void PhoneBook::display_all()
{
	int i = 0;
	cout << CYAN << "index     |first name| last name| nickname " << RESET << endl;
	cout << CYAN << "----------|----------|----------|----------" << RESET << endl;
	while (i < size_content)
	{
		display_row(i);
		i++;
	}
	cout << endl;
}

void PhoneBook::display_row(int index)
{
	string tmp;

	cout << index;
	display_space(9);
	cout << CYAN << "|" << RESET;
	tmp = contactList[index].get_first_name();
	display_info(tmp, true);

	tmp = contactList[index].get_last_name();
	display_info(tmp, true);

	tmp = contactList[index].get_nickname();
	display_info(tmp, false);

	cout << endl;
}

