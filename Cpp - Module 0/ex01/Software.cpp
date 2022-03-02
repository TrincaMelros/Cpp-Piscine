#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"
#include <string>
#include <iostream>

int main()
{
    Phonebook 	pbook;
	std::string	input;
	std::string index;

	std::cout << "Welcome to the Phonebook" << std::endl;
	while (1)
	{
		std::cout << "Insert a command: ";
		std::getline(std::cin, input);
		std::cout << input << std::endl;
		if (input.compare("ADD") == 0)
			pbook.add_contact();
		else if (input.compare("SEARCH") == 0)
		{
			pbook.display_contacts();
			std::cout << "Insert index of contact" << std::endl;
			std::getline(std::cin, index);
//			converter para int, comparar e mostrar dados
		}
		else if (input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Input error, use ADD, SEARCH or EXIT" << std::endl;
	}
    return (0);
}