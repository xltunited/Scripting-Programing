#include "student.h"
#include <array>
#include <iostream>
#pragma once

// Mutators

void Student::setStudentID(std::string ID) {

	this->studentID = ID;

}

void Student::setFName(std::string fName) {

	this->fName = fName;

}

void Student::setLName(std::string lName) {

	this->lName = lName;

}

void Student::setEmail(std::string email) {

	this->email = email;

}

void Student::setAge(int age) {

	this->age = age;

}

void Student::setCompletion(int days[]) {

	for (int i = 0; i < sizeof(days); i++) {

		this->daysToComplete[i] = days[i];

	}
	
}

void Student::setDegree(degree typeDegree) {

	this->degreeType = typeDegree;

}

// Accessors
std::string Student::getStudentID() {

	return this->studentID;

}
std::string Student::getFName(){

	return this->fName;

}
std::string Student::getLName(){

	return this->lName;

}
std::string Student::getEmail(){

	return this->email;

}

int Student::getAge() {

	return this->age;

}

int* Student::getCompletion() {

	return this->daysToComplete;

}

degree Student::getDegree() {

	return this->degreeType;

}

// Constructor
Student::Student(std::string ID, std::string fName, std::string lName, std::string email, int age, int days[]) {

	this->studentID = ID;

	this->fName = fName;

	this->lName = lName;

	this->email = email;

	this->age = age;

	for	(int i = 0; i < sizeof(days); i++) {

		this->daysToComplete[i] = days[i];

	}

	//this->degreeType = typeDegree;

}

// Print
const void Student::print() {

	std::cout << "Getting called :" << fName << std::endl; 

	return;

}

// Destructor
Student::~Student() {

	//delete this;

}

// Get Degree
degree Student::getDegreeProgram() {

	return this->degreeType;

}