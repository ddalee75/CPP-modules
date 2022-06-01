#include <iostream>

int	main()
{
	std::string braaain = "HI THIS IS BRAIN";
	std::string *string_ptr = &braaain;
	std::string &string_ref = braaain;

	std::cout << std::endl;
	std::cout << "Address of the string : " << &braaain << std::endl;
	std::cout << "Address of the string by using string_ptr: " << string_ptr << std::endl;
	std::cout << "Address of the string by using string_ref: " << &string_ref << std::endl;
	std::cout << std::endl;
	std::cout << "String by using string_ptr: " << *string_ptr << std::endl;
	std::cout << "String by using string_ref: " << string_ref << std::endl;
	std::cout << std::endl;

	return (0);
}