#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	std::cout << GREEN <<"PhoneBook Constructor called" << RESET << std::endl;
	size_content = 0;
	oldest_id = 0;
	return;
}

PhoneBook::~PhoneBook(void){

	std::cout << RED << "PhoneBook Destructor called" << RESET << std::endl;
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
	size_content++;
	std::cout << GREEN << "Contact n*" << size_content << " added with success" << RESET << std::endl;
}

void PhoneBook::search_contact(int index)
{
	std::cout << CYAN << "Contact information for index " << index << ":" << RESET << std::endl;
	std::cout << "First name: " << contactList[index].get_first_name() << std::endl;
	std::cout << "Last name: " << contactList[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contactList[index].get_nickname() << std::endl;
}

void PhoneBook::display_all()
{
	int i = 0;
	std::cout << CYAN << "index     |first name| last name| nickname " << RESET << std::endl;
	std::cout << CYAN << "----------|----------|----------|----------" << RESET << std::endl;
	while (i < size_content)
	{
		display_row(i);
		i++;
	}
	std::cout << std::endl;
}


static void display_space(int nb)
{
	int i = 0;
	while (i < nb)
	{
		std::cout << " ";
		i++;
	}
}

static void display_info(std::string str, bool end){

	int i = 0;
	int space;

	if (str.length() > 10)
		std::cout << str.substr(0, 9);
	else
		std::cout << str;
	if (str.length() > 10)
		std::cout << ".";
	else
	{
		space = (10 - str.length() >= 0) ? 10 - str.length() : 0;
		display_space(space);
	}
	if (end)
		std::cout << CYAN << "|" << RESET;
}

void PhoneBook::display_row(int index)
{
	std::string tmp;

	std::cout << index;
	display_space(9);
	std::cout << CYAN << "|" << RESET;
	tmp = contactList[index].get_first_name();
	display_info(tmp, true);

	tmp = contactList[index].get_last_name();
	display_info(tmp, true);

	tmp = contactList[index].get_nickname();
	display_info(tmp, false);

	std::cout << std::endl;
}

