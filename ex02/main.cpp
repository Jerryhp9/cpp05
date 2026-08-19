#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a(10, "Avin");
		Bureaucrat b(150, "Bob");
		Bureaucrat c;
		Form ab("Tax form", 50, 25);
		// Bureaucrat d(-1, "Desmond");
		c = a;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		c.decrementGrade();
		std::cout << c << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		a.signForm(ab);
		c.signForm(ab);
		b.signForm(ab);
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}