#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a(10, "Avin");
		Bureaucrat b(150, "Bob");
		Bureaucrat c;
		// Bureaucrat d(-1, "Desmond");
		c = a;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		c.decrementGrade();
		std::cout << c << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}