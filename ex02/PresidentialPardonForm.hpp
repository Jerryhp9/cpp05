#ifndef PRESIDENTIAL
#define PRESIDENTIAL

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string s_target);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();
		std::string getTarget();
		void execute(const Bureaucrat& executor) const;
};

#endif