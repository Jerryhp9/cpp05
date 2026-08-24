#ifndef FORM
#define FORM

#include <iostream>

class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		AForm();
		AForm(std::string form, int gradeToSign, int gradeToExecute);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();
		const std::string	getName() const;
		virtual const std::string	getTarget() const = 0;
		bool				getIssigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void execute(const Bureaucrat& executor) const;
		virtual void toExecute() const = 0;

		void beSigned(const Bureaucrat& personnel);
		class GradeTooHighException : public std::exception {
			public:
				const char *what()const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what()const throw();
		};

		class FormNotSignException :  public std::exception {
			public:
				const char *what()const throw();
		};

};

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif