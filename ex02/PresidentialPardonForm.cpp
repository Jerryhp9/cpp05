#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidnetialPardonForm", "unannounced", 25, 5) {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string s_target) : AForm("PresidnetialPardonForm", s_target, 25, 5){
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other)
	{
		*this = other;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::toExecute(const Bureaucrat& executor) const {
	std::cout << this->getTarget() << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}