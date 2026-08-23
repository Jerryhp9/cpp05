#ifndef INTERN
#define INTERN

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

struct  formType {
	enum  type {
		ShrubberyCreationForm,
		RobotomyRequestForm,
		PresidentialPardonForm,
		UnknownForm
	};
};

class Intern : virtual public AForm, public PresidentialPardonForm, public RobotomyRequestForm, public ShrubberyCreationForm {
	public:
		Intern();
		Intern(const Intern& other);
		Intern&  operator=(const Intern& other);
		~Intern();
		AForm* makeForm(std::string formName, std::string target); 
};

#endif