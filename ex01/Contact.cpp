#include <iostream>
#include "Contact.hpp"

static void get_property(std::string property, std::string message)
{
	while (property.empty() == true)
	{
		std::cout << message;
		std::getline(std::cin, property);
		std::cout << std::endl;
	}
}

Contact::Contact(void){

	std::cout << GREEN << "Contact Constructor called" << RESET << std::endl;
}

Contact::~Contact(void){

	std::cout << RED << "Contact Destructor called" << RESET << std::endl;
}

void Contact::contact_form(void){
	std::cout << "Please fill this form to create a new Contact" << std::endl;
	std::cout << RED << "!!! All fields must be filled in !!!" << RESET << std::endl;
	get_property(first_name, "First name => ");
	get_property(last_name, "Last name => ");
	get_property(nickname, "Nickname => ");
	get_property(nickname, "Phone Number => ");
	get_property(darkest_secret, "Darkest secret => ");
}
