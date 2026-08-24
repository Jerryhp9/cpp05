#include  "Intern.hpp"

Intern::Intern() {
	std::cout  << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& other) {
	*this = other;
	std::cout  << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
	std::cout << "Intern copy assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

Intern::~Intern() {
	std::cout  << "Intern destructor called" << std::endl;
}

formType::type hash_Form(std::string formName)
{
	if (formName == "ShrubberyCreationForm")
		return (formType::ShrubberyCreationForm);
	if (formName == "RobotomyRequestForm")
		return (formType::RobotomyRequestForm);
	if (formName == "PresidentialPardonForm")
		return (formType::PresidentialPardonForm);
	return (formType::UnknownForm);
}

AForm* Intern::makeForm(std::string formName, std::string target) {
	AForm *form = NULL;
	switch (hash_Form(formName)) {
		case (formType::ShrubberyCreationForm):
			form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		case (formType::RobotomyRequestForm):
			form = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		case (formType::PresidentialPardonForm):
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		case (formType::UnknownForm):
			throw AForm::InvalidFormException();
	}
	return (NULL);
}
