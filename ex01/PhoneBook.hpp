#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	int	get_sizecontent(void);

	void add_contact();
	void search_contact(int index);
	void display_all(void);

private:

	Contact contactList[8];
	int		size_content;
	int		oldest_id;

	void display_row(int);
};

#endif