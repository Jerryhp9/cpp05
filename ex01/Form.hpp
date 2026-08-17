#ifndef FORM
#define FORM

#include <iostream>

class Form {
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		Form();
		Form(int isSigned, int gradeToSign, int gradeToExecute);
		Form& operator=(const Form& other);
		~Form();
		const std::string	getName();
		bool				getIssigned();
		const int			getGradeToSign();
		const int			getGradeToExecute();
		void beSigned();
		void signForm();
		class GradeTooHighException : public std::exception {
			public:
				const char *what()const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what()const throw();
		};

};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif