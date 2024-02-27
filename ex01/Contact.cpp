#include <iostream>
#include "Contact.hpp"

static std::string get_property(std::string message)
{
	std::string property;

	while (property.empty() == true)
	{
		std::cout << message;
		std::getline(std::cin, property);
		if (!std::cin.good())
			return 0;
		std::cout << std::endl;
	}
	return (property);
}

Contact::Contact(void){

	std::cout << GREEN << "Contact Constructor called" << RESET << std::endl;
}

Contact::~Contact(void){

	std::cout << RED << "Contact Destructor called" << RESET << std::endl;
}

void Contact::contact_form(void){
	
	std::string tmp;

	std::cout << "Please fill this form to create a new Contact" << std::endl;
	std::cout << RED << "!!! All fields must be filled in !!!" << RESET << std::endl;
	set_first_name(get_property("First name => "));
	set_last_name(get_property("Last name => "));
	set_nickname(get_property("Nickname => "));
	set_number(get_property("Phone Number => "));
	set_darkest_secret(get_property("Darkest secret => "));
}


////////////////////////////// GET //////////////////////////////


std::string Contact::get_first_name(void) const{
	return this->first_name;
}

std::string Contact::get_last_name(void) const{
	return this->last_name;
}

std::string Contact::get_nickname(void) const{
	return this->nickname;
}

std::string Contact::get_number(void) const{
	return this->number;
}

std::string Contact::get_darkest_secret(void) const{
	return this->darkest_secret;
}


////////////////////////////// SET //////////////////////////////

void Contact::set_first_name(std::string value)
{
	this->first_name = value;
}

void Contact::set_last_name(std::string value)
{
	this->last_name = value;
}

void Contact::set_nickname(std::string value)
{
	this->nickname = value;
}

void Contact::set_number(std::string value)
{
	this->number = value;
}

void Contact::set_darkest_secret(std::string value)
{
	this->darkest_secret = value;
}