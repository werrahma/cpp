#include "PhoneBook.hpp"

std::string get_line()
{
	std::string name;
	getline (std::cin, name);
	if (std::cin.eof())
			exit (0);
	while (name.empty())
	{
		getline (std::cin, name);
		if (std::cin.eof())
			exit (0); 
		std::cout << "A saved contact can’t have empty fields" << std::endl << "try again :";
	}
	return (name);
}

void	contact::satting_search(int index)
{
	std::cout << "----------------------"<< std::endl;
	std::cout << "index      | " << index << std::endl;
	std::cout << "first name | " << first_name << std::endl;
	// std::cout << std::endl << "----------------------------------------------"<< std::endl;
	std::cout << "last name  | " << last_name << std::endl;
	std::cout << "nickname   | " << nickname << std::endl;
	std::cout << "----------------------"<< std::endl;

}	

void	contact::add()
{
	std::cout << "enter first name: "; first_name = get_line();
	std::cout << "enter last name: "; last_name = get_line();
	std::cout << "enter neckname: "; nickname = get_line();
	std::cout << "enter phone number: "; phone_number = get_line();
	std::cout << "enter darkest_secret: "; darkest_secret = get_line();
}
void	contact::print_contact()
{
	std::cout << "fist name:      " << first_name << std::endl;
	std::cout << "last name:      " << last_name << std::endl;
	std::cout << "nickname:       " << nickname << std::endl;
	std::cout << "phone_number:   " << phone_number << std::endl;
	std::cout << "darkest_secret: " << darkest_secret << std::endl;
}

int 	ifdigit(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
void	PhoneBook::search(int index)
{
	int i = 0;
	std::string name;
	// std::cout << i << std::endl;
	while (i < index)
	{
		contacts[i].satting_search(i);
		i++;
	}
	std::cout << "choos index : ";
	getline(std::cin, name);
	while (1)
	{
		getline(std::cin, name);
		std::cout << "try again : ";
		if (!ifdigit(name))
			std::cout << "index can't be aptha";
		else if (name.empty())
			break;
	}
	// 
	contacts[std::stoi(name)].print_contact();
}

void 	PhoneBook::checker(std::string command, int index)
{
	if (command == "ADD")
		contacts[index].add();
	else if (command == "EXIT")
		exit(0);
	else if (command == "SEARCH")
		search(index);
	// else if (command == )
}

int main()
{
	PhoneBook obj;
	int 	i = 0;
	std::string str;
	while (1)
	{
		if (i == 8)
			i = 0;
		std::cout << "chooos a command between this: ADD or SEARCH or EXIT : ";
		std::getline (std::cin, str);
		if (std::cin.eof())
			exit (0);
		obj.checker(str, i);
		if (str == "ADD")
			i++;
	}
}
