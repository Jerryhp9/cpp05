#ifndef PRESIDENTIAL
#define PRESIDENTIAL

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		const std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string s_target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();
		const std::string getTarget() const;
		void toExecute() const;
};

#endif