#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	int	get_sizecontent(void);

	void add_contact();

private:

	Contact contactList[8];
	int		size_content;
};

#endif