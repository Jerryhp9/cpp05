#include "Bureaucrat.hpp"

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

Bureaucrat::Bureaucrat(int num, const std::string name) : name(name),  grade(num)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	 if (num < 1)
		throw GradeTooLowException();
	if (num > 150)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name) {
	this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const std::string Bureaucrat::getName() {
	return (name);
}

int Bureaucrat::getGrade() {
	return (grade);
}

Bureaucrat& Bureaucrat::incrementGrade() {
	if ((this->grade -= 1) < 1)
		throw GradeTooLowException();
	return (*this);
}

Bureaucrat& Bureaucrat::decrementGrade() {
	if ((this->grade += 1) > 150)
		throw GradeTooHighException();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj) {
	Bureaucrat new_obj(obj);
	out << new_obj.getName() << ", Bureaucrat grade " << new_obj.getGrade() << std::endl;
	return (out);
}