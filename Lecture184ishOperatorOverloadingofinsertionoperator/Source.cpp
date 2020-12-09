#include "Header.h"

class User
{
public:
	string first_name;
	string last_name;

	User user (string first, string second)
	{
		first_name = first;
		last_name = second;
	}

};
 
ostream& operator << (ostream& output, User user)
{
	output << "First name: " << user.first_name << "\nLast name: " <<
		user.last_name;
	return output;
}

istream& operator >> (istream& input, User& user)
{
	input >> user.first_name >> user.last_name;
	return input;
}

int main()
{
	User user;
	cin >> user;
	
	cout << user;
	
	/*
	In the above case, you input a first name and last name (with no middle names)
	
	After the input, you will get the output (as an example):
	First name: Donkey
	Last name: Kong

	*/
}
