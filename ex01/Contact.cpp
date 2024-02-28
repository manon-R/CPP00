#include <iostream>
#include "Contact.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define  CTRL_D	"FORCED EXIT"

static string get_property(string message)
{
	string property;

	while (property.empty() == true)
	{
		cout << message;
		std::getline(cin, property);
		if (!cin.good())
		{
			cout << endl;
			cout << RED << CTRL_D << RESET << endl;
			return 0;
		}
		cout << endl;
	}
	return (property);
}

Contact::Contact(void){

	cout << GREEN << "Contact Constructor called" << RESET << endl;
}

Contact::~Contact(void){

	cout << RED << "Contact Destructor called" << RESET << endl;
}

void Contact::contact_form(void){
	
	string tmp;

	cout << "Please fill this form to create a new Contact" << endl;
	cout << RED << "!!! All fields must be filled in !!!" << RESET << endl;
	set_first_name(get_property("First name => "));
	set_last_name(get_property("Last name => "));
	set_nickname(get_property("Nickname => "));
	set_number(get_property("Phone Number => "));
	set_darkest_secret(get_property("Darkest secret => "));
}


////////////////////////////// GET //////////////////////////////


string Contact::get_first_name(void) const{
	return this->first_name;
}

string Contact::get_last_name(void) const{
	return this->last_name;
}

string Contact::get_nickname(void) const{
	return this->nickname;
}

string Contact::get_number(void) const{
	return this->number;
}

string Contact::get_darkest_secret(void) const{
	return this->darkest_secret;
}


////////////////////////////// SET //////////////////////////////

void Contact::set_first_name(string value)
{
	this->first_name = value;
}

void Contact::set_last_name(string value)
{
	this->last_name = value;
}

void Contact::set_nickname(string value)
{
	this->nickname = value;
}

void Contact::set_number(string value)
{
	this->number = value;
}

void Contact::set_darkest_secret(string value)
{
	this->darkest_secret = value;
}