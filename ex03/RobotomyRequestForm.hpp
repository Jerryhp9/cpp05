#ifndef ROBOT
#define ROBOT

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {
	private:
		const std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string s_target);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();
		const std::string getTarget() const;
		void toExecute() const;
};

#endif