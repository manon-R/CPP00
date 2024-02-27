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
	if (size_content == 0)
		std::cout << "PhoneBook is empty ..."<< std::endl;
	else
	{

		std::cout << CYAN << "index     |first name| last name| nickname " << RESET << std::endl;
		std::cout << CYAN << "----------|----------|----------|----------" << RESET << std::endl;
		
	}

}

void PhoneBook::display_all()
{

}