#ifndef ROBOT
#define ROBOT

#include <iostream>
#include "AForm.hpp"

class Bureaucrat;

class RobotRequestForm : public AForm {
	private:
		std::string target;
	public:
		RobotRequestForm();
		RobotRequestForm(std::string s_target);
		RobotRequestForm& operator=(const RobotRequestForm& other);
		~RobotRequestForm();
		std::string getTarget();
		void execute(const Bureaucrat& executor) const;
};

#endif