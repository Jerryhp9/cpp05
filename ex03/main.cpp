#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void executeShubbery()
{
	std::cout << "\n[----------------Execute ShubberyCreationForm---------------]" << std::endl;
	
	std::cout << "\n---------ShubberyCreationForm construction---------\n";
	ShrubberyCreationForm home("home");
	std::cout << home << std::endl;

	std::cout << "\n---------ShubberyCreationForm copy construction---------\n";
	ShrubberyCreationForm yard(home);
	std::cout << yard << std::endl;

	std::cout << "\n---------Bureaucrat junior and senior construction---------\n";
	Bureaucrat junior(138, "junior");
	std::cout << junior << std::endl;
	Bureaucrat senior(137, "senior");
	std::cout << senior << std::endl;
	
	std::cout << "\n---------Junior Sign and execute ShubberyCreationForm---------\n";
	junior.signForm(home);
	junior.executeForm(home);

	std::cout << "\n---------Senior Sign and execute ShubberyCreationForm---------\n";
	senior.signForm(yard);
	senior.executeForm(yard);
	std::cout << std::endl;
}

void executeRobotomy()
{
	std::cout << "\n[----------------Execute RotobomyRequestForm---------------]" << std::endl;
	
	std::cout << "\n---------RotobomyRequestForm construction---------\n";
	RobotomyRequestForm robot("robot");
	std::cout << robot << std::endl;

	std::cout << "\n---------RotobomyRequestForm copy construction---------\n";
	RobotomyRequestForm bot(robot);
	std::cout << bot << std::endl;

	std::cout << "\n---------Bureaucrat junior and senior construction---------\n";
	Bureaucrat junior(73, "junior");
	std::cout << junior << std::endl;
	Bureaucrat senior(44, "senior");
	std::cout << senior << std::endl;
	
	std::cout << "\n---------Junior Sign and execute RotobomyRequestForm---------\n";
	junior.signForm(robot);
	junior.executeForm(robot);

	std::cout << "\n---------Senior Sign and execute RotobomyRequestForm---------\n";
	senior.signForm(bot);
	senior.executeForm(bot);
	std::cout << std::endl;
}

void executePresidentialPardon()
{
	std::cout << "\n[----------------Execute PresidentialPardonForm---------------]" << std::endl;
	
	std::cout << "\n---------PresidentialPardonForm construction---------\n\n";
	PresidentialPardonForm civil("civil");
	std::cout << civil << std::endl;

	std::cout << "\n---------PresidentialPardonForm copy construction---------\n";
	PresidentialPardonForm justice(civil);
	std::cout << justice << std::endl;

	std::cout << "\n---------Bureaucrat junior and senior construction---------\n";
	Bureaucrat junior(10, "junior");
	std::cout << junior << std::endl;
	Bureaucrat senior(4, "senior");
	std::cout << senior << std::endl;
	
	std::cout << "\n---------Junior Sign and execute PresidentialPardonForm---------\n";
	junior.signForm(civil);
	junior.executeForm(civil);

	std::cout << "\n---------Senior Sign and execute PresidentialPardonForm---------\n";
	senior.signForm(justice);
	senior.executeForm(justice);
	std::cout << std::endl;
}

int main()
{
	std::srand(std::time(0));

	executeShubbery();
	executeRobotomy();
	executePresidentialPardon();
	return (0);
}