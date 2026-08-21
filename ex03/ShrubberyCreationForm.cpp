#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("unannounced") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {
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

const std::string ShrubberyCreationForm::getTarget() const {
	return (_target);
}

void ShrubberyCreationForm::toExecute() const {
		const std::string str = this->_target + "_Shrubbery";
		std::cout << "target: " << _target << std::endl;
		std::ofstream outfile(str.c_str());
		if (!outfile.is_open())
		{
			std::cerr << "Unable to open \"outfile\"" << std::endl;
			return;
		}
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
		outfile.close();
}