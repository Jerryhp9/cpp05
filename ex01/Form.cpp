#include "Form.hpp"
#include "Bureaucrat.hpp"

const char * Form::GradeTooLowException::what() const throw() {
	return ("form's grade is too low");
}

const char * Form::GradeTooHighException::what() const throw() {
	return ("form's grade is too high");
}

Form::Form() : _name("receptionist"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
	std::cout << "form default constructor called" << std::endl;
}

Form::Form(std::string form, int gradeToSign, int gradeToExecute) : _name(form), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << "form constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form& Form::operator=(const Form& other) {
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return (*this);
}

Form::~Form() {
	std::cout << "form destructor called" << std::endl;
}

const std::string Form::getName() {
	return (_name);
}

bool Form::getIssigned() {
	return (_isSigned);
}

int Form::getGradeToSign() {
	return (_gradeToSign);
}

int Form::getGradeToExecute() {
	return (_gradeToExecute);
}

void Form::beSigned(const Bureaucrat& personnel) {
	if (personnel.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const Form& obj) {
	Form new_obj(obj);
	out << "\n" << "GradeToSign: " << new_obj.getGradeToSign() << "\n" << "GradeToExecute: " << new_obj.getGradeToExecute() << "\n" << "getIssigned: " << new_obj.getIssigned() << "\n";
	return (out);
}
