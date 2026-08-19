#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char * AForm::GradeTooLowException::what() const throw() {
	return ("form's grade is too low");
}

const char * AForm::GradeTooHighException::what() const throw() {
	return ("form's grade is too high");
}

AForm::AForm() : _name("application form"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
	std::cout << "form default constructor called" << std::endl;
}

AForm::AForm(std::string form, int gradeToSign, int gradeToExecute) : _name(form), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << "form constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return (*this);
}

AForm::~AForm() {
	std::cout << "form destructor called" << std::endl;
}

bool AForm::checkSignExecute(const Bureaucrat& executor) const {
	if (this->_isSigned == true)
	{
		if (executor.getGrade() < this->_gradeToExecute)
			return (true);
	}
	return (false);
}

const std::string AForm::getName() const {
	return (_name);
}

bool AForm::getIssigned() const {
	return (_isSigned);
}

int AForm::getGradeToSign() const {
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const {
	return (_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat& personnel) {
	if (personnel.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& obj) {
	out << "\n" << "GradeToSign: " << obj.getGradeToSign() << "\n" << "GradeToExecute: " << obj.getGradeToExecute() << "\n" << "getIssigned: " << obj.getIssigned() << "\n";
	return (out);
}
