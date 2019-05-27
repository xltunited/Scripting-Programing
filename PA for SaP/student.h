#pragma once
#include "degree.h"
#include <string>


class Student {

public:

	// Mutators
	void setStudentID(std::string ID);
	void setFName(std::string fName);
	void setLName(std::string lName);
	void setEmail(std::string email);
	void setAge(int age);
	void setCompletion(int days[]);
	void setDegree(degree typeDegree);

	// Accessors
	std::string getStudentID();
	std::string getFName();
	std::string getLName();
	std::string getEmail();
	int getAge();
	int* getCompletion();
	degree getDegree();

	// Constructor
	Student(std::string ID, std::string fName, std::string lName, std::string email, int age, int days[]);

	// Print
	virtual const void print();

	// Destructor
	~Student();

	// Get degree
	virtual degree getDegreeProgram();

	
protected:
	
	std::string studentID;
	std::string fName;
	std::string lName;
	std::string email;
	int age;
	int daysToComplete[3];
	degree degreeType;

};