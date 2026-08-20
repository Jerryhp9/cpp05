#ifndef ROBOT
#define ROBOT

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string s_target);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();
		void toExecute(const Bureaucrat& executor) const;
};

#endif