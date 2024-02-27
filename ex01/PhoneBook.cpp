#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	std::cout << GREEN <<"PhoneBook Constructor called" << RESET << std::endl;
	size_content = 0;
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
		index = 0;
	contactList[index].contact_form();
	size_content++;
	std::cout << GREEN << "Contact n*" << size_content << " added with success" << RESET << std::endl;
}