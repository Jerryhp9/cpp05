#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public: //getters for both name and grade, both exception implementation mentioned in the subject, 
			//increment and decrement within the range 1 to 150, insertion operator overload
		Bureaucrat(unsigned int num);
		~Bureaucrat();
		
};

#endif