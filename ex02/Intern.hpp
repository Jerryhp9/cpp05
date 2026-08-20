#ifndef INTERN
#define INTERN

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern : virtual public AForm, public PresidentialPardonForm, public RobotomyRequestForm, public ShrubberyCreationForm {
	public:
		Intern();
		Intern(const Intern& other);
		Intern&  operator=(const Intern& other);
		~Intern();
		AForm makeForm(); 
};

#endif