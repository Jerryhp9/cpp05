#ifndef PRESIDENTIAL
#define PRESIDENTIAL

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string s_target);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();
		void toExecute(const Bureaucrat& executor) const;
};

#endif