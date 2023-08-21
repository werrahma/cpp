#include "PhoneBook.hpp"

int 	ifdigit(std::string str, int flag)
{
	int i = 0;
	int n;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	n = atoi(str.c_str());
	if (n > 7 && flag == 1)
		return (0);
	return (1);
}
std::string get_line(std::string str)
{
	std::string name;
	while (1)
	{
		getline (std::cin, name);
		if (std::cin.eof())
			exit (0);
		else if (str == "phone_number")
		{
			if (!ifdigit(name, 2) || name.empty())
				std::cout << "invalid phone number try again : ";
			else 
				break;
		}
		else if (!name.empty())
			break;
		else
			std::cout << "A saved contact can’t have empty fields" << std::endl << "try again :";
	}
	return (name);
}

void	contact::table_display(int index)
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" <<  std::setw(10) << index ;
	if (first_name.length() > 10)
		std::cout << "|" << std::setw(10) << first_name.substr(0, 9) + '.' ;
	else
		std::cout << "|" << std::setw(10) <<first_name ;
	if (last_name.length() > 10)
		std::cout << "|" << std::setw(10) << last_name.substr(0, 9) + '.' ;
	else
		std::cout << "|" << std::setw(10) <<last_name ;
	if (nickname.length() > 10)
		std::cout << "|" << std::setw(10) << nickname.substr(0, 9) + '.' << "|" << std::endl;
	else
		std::cout << "|" << std::setw(10) <<nickname << "|" << std::endl;

}	

void	contact::add()
{
	std::cout << "enter first name: "; first_name = get_line("first_name");
	std::cout << "enter last name: "; last_name = get_line("last_name");
	std::cout << "enter neckname: "; nickname = get_line("nickname");
	std::cout << "enter phone number: "; phone_number = get_line("phone_number");
	std::cout << "enter darkest_secret: "; darkest_secret = get_line("darkest_secret");
}
void	contact::print_contact()
{
	std::cout << "first name:      " << first_name << std::endl;
	std::cout << "last name:      " << last_name << std::endl;
	std::cout << "nickname:       " << nickname << std::endl;
	std::cout << "phone_number:   " << phone_number << std::endl;
	std::cout << "darkest_secret: " << darkest_secret << std::endl;
}

void	PhoneBook::search(int index)
{
	int i = 0;
	std::string name;
	std::cout << "|index     |first name|last name |nickname  |"<< std::endl;
	while (index >= 0)
	{
		contacts[i].table_display(i);
		i++;
		index--;
	}
	std::cout << "choos index : ";
	while (1)
	{
		getline(std::cin, name);
		if (std::cin.eof())
			exit (0);
		else if (name.empty())
			std::cout << "try again : ";
		else if (!ifdigit(name, 1) || name.length() > 2)
			std::cout << "invalid index try again : ";
		else if (!name.empty())
			break;
	}
	contacts[atoi(name.c_str())].print_contact();
}

void 	PhoneBook::checker(std::string command, int index, int i)
{
	if (command == "ADD")
		contacts[i].add();
	else if (command == "EXIT")
		exit(0);
	else if (command == "SEARCH")
		search(index);
}

int main()
{
	PhoneBook obj;
	int 	i = -1;
	int 	index = -1;
	std::string str;
	while (1)
	{
		std::cout << "chose a command between this: ADD or SEARCH or EXIT : ";
		std::getline (std::cin, str);
		if (std::cin.eof())
			exit (0);
		if (str == "ADD" && index < 7)
			index++;
		if (str == "ADD")
			i++;
		if (i == 8)
			i = 0;
		obj.checker(str, index, i);
	}
}
