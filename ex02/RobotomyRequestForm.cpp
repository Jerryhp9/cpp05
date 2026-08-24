#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("unannounced") {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string s_target) : AForm("RobotomyRequestForm", 72, 45) , _target(s_target) {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
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

const std::string RobotomyRequestForm::getTarget() const {
	return (_target);
}

void RobotomyRequestForm::toExecute() const {
	std::cout << "Make some drilling noise" << std::endl;
	if (std::rand() % 2 == 1)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " has failed to robotomized" << std::endl;
}