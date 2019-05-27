#pragma once
#include "student.h"
#include "degree.h"

class SecurityStudent : public Student {

public:

	virtual const void print();
	virtual degree getDegreeProgram();
	SecurityStudent(std::string ID, std::string fName, std::string lName, std::string email, int age, int days[]);
	

private:

	degree type;

};