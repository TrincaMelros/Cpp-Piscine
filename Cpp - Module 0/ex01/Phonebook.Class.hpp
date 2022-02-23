#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <iostream>
#include "Contact.Class.hpp"

class Phonebook {
private:
	class Contact list[8];
	int		contacts;

public:
	Phonebook();
	~Phonebook();

	void	add_contact(void);
	void	display_contacts(void);
};

#endif