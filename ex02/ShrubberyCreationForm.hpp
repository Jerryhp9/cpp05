#ifndef SHRUBBERY
#define SHRUBBERY

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string s_target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		std::string getTarget();
		void execute(const Bureaucrat& executor) const;
};

#endif