#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(int num, const std::string name);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		const std::string getName() const ;
		int getGrade() const;

		Bureaucrat& incrementGrade();
		Bureaucrat& decrementGrade();
		void signForm(AForm& form);
		void executeForm(const AForm& form) const;

		class GradeTooHighException : public std::exception {
			public:
				const char *what()const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what()const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif