#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <limits>

class Contact {

	public:

		Contact(void);
		~Contact(void);
	
		void	setcontact(void);
		void	showcontact(void);
		void	showcontact_detail(void);

	private:
	
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _secret;

};

#endif
