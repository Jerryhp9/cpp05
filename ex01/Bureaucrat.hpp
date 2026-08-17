#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(int num, const std::string name);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		const std::string getName();
		int getGrade();

		Bureaucrat& incrementGrade();
		Bureaucrat& decrementGrade();

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