#ifndef CONTACT_H
# define CONTACT_H

# include <string>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

class Contact {

public:

	Contact(void);
	~Contact(void);

	void contact_form(void);

	std::string get_first_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nickname(void) const;
	std::string get_number(void) const;
	std::string get_darkest_secret(void) const;


	void set_first_name(std::string value);
	void set_last_name(std::string value);
	void set_nickname(std::string value);
	void set_number(std::string value);
	void set_darkest_secret(std::string value);



private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string darkest_secret;

};

#endif

