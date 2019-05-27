#pragma once
#include "student.h"
#include "securityStudent.h"

class Roster {
public:

	Roster(const std::string *studentData);

private:

	Student *classRosterArray[5];

	//Helper
	Student* createStudent(std::string data);


};