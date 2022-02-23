#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"
#include <string>
#include <iostream>

int main()
{
    Phonebook 	pbook;
	std::string	input;

	std::cout << "Welcome to the Phonebook" << std::endl;
	while (1)
	{
		std::cout << "Insert a command: ";
		std::getline(std::cin, input);
		std::cout << input << std::endl;
		if (input.compare("ADD") == 0)
			pbook.add_contact();
		else if (input.compare("SEARCH"))
			pbook.display_contacts();
//		else if (input.compare("EXIT"))
		else
		{
			std::cout << "Input error, use ADD, SEARCH or EXIT" << std::endl;
			break ;
		}
	}
    return (0);
}