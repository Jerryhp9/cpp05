#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern SomerandomIntern;
	AForm *rrf;
	AForm *scf;
	AForm *ppf;
	AForm *invalid;
	try {
		rrf = SomerandomIntern.makeForm("RobotomyRequestForm", "Bender");
		std::cout << *rrf << std::endl;

		scf = SomerandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		std::cout << *scf << std::endl;

		ppf = SomerandomIntern.makeForm("PresidentialPardonForm", "Bender");
		std::cout << *ppf << std::endl;

		invalid = SomerandomIntern.makeForm("RobotoCreationPardonForm", "Bender");
		std::cout << "invalid ptr is " << invalid << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete(rrf);
	delete(scf);
	delete(ppf);
	return (0);
}