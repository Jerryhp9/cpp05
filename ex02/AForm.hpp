#ifndef FORM
#define FORM

#include <iostream>

class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		const std::string _target;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		AForm();
		AForm(std::string form, std::string s_target, int gradeToSign, int gradeToExecute);
		AForm& operator=(const AForm& other);
		virtual ~AForm();
		const std::string	getName() const;
		const std::string	getTarget() const;
		bool				getIssigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool checkSignExecute(const Bureaucrat& executor) const;
		void execute(const Bureaucrat& executor) const;
		virtual void Toexecute() const = 0;

		void beSigned(const Bureaucrat& personnel);
		class GradeTooHighException : public std::exception {
			public:
				const char *what()const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what()const throw();
		};

};

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif