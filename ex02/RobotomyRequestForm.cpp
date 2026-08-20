#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", "unannounced", 25, 5) {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string s_target) : AForm("RobotomyRequestForm", s_target, 25, 5){
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other)
	{
		*this = other;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::toExecute(const Bureaucrat& executor) const {
	std::srand(std::time(0));
	std::cout << "Make some drilling noise" << std::endl;
	if (std::rand() % 2 == 1)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " has failed to robotomized" << std::endl;
}