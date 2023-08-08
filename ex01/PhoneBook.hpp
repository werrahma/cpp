#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
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


class PhoneBook
{
	contact contacts[8];
	public:
		void    checker(std::string command);

};

#endif