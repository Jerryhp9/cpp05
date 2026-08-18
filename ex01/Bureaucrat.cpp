#include "Bureaucrat.hpp"

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

Bureaucrat::Bureaucrat(int num, const std::string name) : _name(name),  _grade(num)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	 if (num < 1)
		throw GradeTooLowException();
	if (num > 150)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) {
	this->_grade = other._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const std::string Bureaucrat::getName() {
	return (_name);
}

int Bureaucrat::getGrade() const{
	return (_grade);
}

Bureaucrat& Bureaucrat::incrementGrade() {
	if ((this->_grade -= 1) < 1)
		throw GradeTooLowException();
	return (*this);
}

Bureaucrat& Bureaucrat::decrementGrade() {
	if ((this->_grade += 1) > 150)
		throw GradeTooHighException();
	return (*this);
}

void Bureaucrat::signForm(Form& form) {
	try {
			form.beSigned(*this);
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException& e) {
		std::cerr <<  _name << " couldn't sign " << form.getName() << " because his/her grade compared to " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj) {
	Bureaucrat new_obj(obj);
	out << new_obj.getName() << ", Bureaucrat grade " << new_obj.getGrade() << std::endl;
	return (out);
}