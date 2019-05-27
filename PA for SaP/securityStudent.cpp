#pragma once
#include "securityStudent.h"
#include "student.h"
#include <iostream>

const void SecurityStudent::print() {

	std::cout << "First Name : " << fName << "\t Last Name :" << lName << "\t Age : " << age << "\t daysInCourse : {" << daysToComplete[0] << ", " << daysToComplete[1] << ", " << daysToComplete[2] << "} Degree Program : Security." << std::endl;
		
	return;
}

degree SecurityStudent::getDegreeProgram() {

	return type;

}

SecurityStudent::SecurityStudent(std::string ID, std::string fName, std::string lName, std::string email, int age, int days[])
	: Student(ID, fName, lName, email, age, days),
	type(SECURITY){
}