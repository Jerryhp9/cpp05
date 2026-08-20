#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("unknown", 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (AForm::checkSignExecute(executor) == true)
	{
		std::ofstream outfile;
		outfile.open(getName() + "_Shrubbery");
		outfile
		<< "               ,@@@@@@@,\n"
		<< "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		<< "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		<< "       |o|        | |         | |\n"
		<< "       |.|        | |         | |\n"
		<< "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_ \n"
		<< "\n"
		<< "               (Art by jgs)\n";
	}
	
}