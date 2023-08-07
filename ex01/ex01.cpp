#include <iostream>

std::string get_line()
{
	std::string name;
	while (name.empty())
	{
		getline (std::cin, name);
		if (name.empty())
			std::cout << "A saved contact can’t have empty fields" << std::endl << "try again :";
	}
	return (name);
}



class contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	public :
		void	add();

};

void	contact::add()
{
	std::cout << "enter first name: "; first_name = get_line();
	std::cout << "enter last name: "; last_name = get_line();
	std::cout << "enter neckname: "; nickname = get_line();
	std::cout << "enter phone number: "; phone_number = get_line();
	std::cout << "enter darkest_secret: "; darkest_secret = get_line();
}

class PhoneBook
{
	public:
		contact contacts[8];

		// checker()

};

int main()
{
	PhoneBook obj;
	int 	i = 0;
	// std::string str;
	// std::getline (std::cin, str);
	while (i <= 8)
		obj.contacts[i++].add();
}
