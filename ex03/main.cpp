#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern SomeRandomIntern;
	AForm *rrf = NULL;
	AForm *scf = NULL;
	AForm *ppf = NULL;
	AForm *invalid = NULL;
	try {
		rrf = SomeRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		std::cout << *rrf << std::endl;

		scf = SomeRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		std::cout << *scf << std::endl;
		
		ppf = SomeRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		std::cout << *ppf << std::endl;
		
		invalid = SomeRandomIntern.makeForm("RobotoCreationPardonForm", "Bender");
		std::cout << "invalid ptr is " << invalid << std::endl;
	}
	catch (std::exception& e) {
		std::cout  << "Intern unable to create form due to " << e.what() << std::endl;
	}
	if (rrf)
		delete(rrf);
	if (scf)
		delete(scf);
	if (ppf)
		delete(ppf);
	return (0);
}