#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		const std::string name;
		unsigned int grade;
	public: //getters for both name and grade, both exception implementation mentioned in the subject, 
			//increment and decrement within the range 1 to 150, insertion operator overload
		Bureaucrat(unsigned int num, const std::string name);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		const std::string getName();
		unsigned int getGrade();

		Bureaucrat& incrementGrade();
		Bureaucrat& decrementGrade();

		class GradeTooHighException : public std::exception {
			virtual const char *what()const throw();
		};	

		class GradeTooLowException : public std::exception {
			virtual const char *what()const throw();
		};	
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif