#include "Phonebook.Class.hpp"

std::string	change_string(std::string input)
{
	int	size;

	size = input.size();
	if (size < 10)
	{
		input.insert(0, 10 - size, ' ');
	}
	else if (size > 10)
	{
		input.resize(10);
		input.replace(9, 1, ".");
	}
	return (input);
	
}

Phonebook::Phonebook(void)
{
	contacts = 0;
    std::cout << "Phonebook constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destructor called" << std::endl;
}

void Phonebook::add_contact(void)
{
	std::string First_name;
	std::string Last_name;
	std::string Nickname;
	std::string Phone_number;
	std::string Darkest_secret;
	int			i;

	i = contacts;
	if (i == 8)
		i = 0;
	std::cout << "First name: ";
	std::getline(std::cin, First_name);
	std::cout << "Last name: ";
	std::getline(std::cin, Last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, Nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, Phone_number);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, Darkest_secret);

	list[i].setContact(First_name, Last_name, Nickname, Phone_number, Darkest_secret);	
}

void	Phonebook::display_contacts(void)
{
	int	i;
	std::string First_name;
	std::string Last_name;
	std::string Nickname;

	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	i = 0;
	while (i < contacts)
	{
		First_name = change_string(list[i].get_firstname());
		Last_name = change_string(list[i].get_lastname());
		Nickname = change_string(list[i].get_nickname());
		std::cout << "|" << << "|" << First_name << "|"; 

	}
}