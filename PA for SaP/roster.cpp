#pragma once
#include "roster.h"
#include <iostream>

Roster::Roster(const std::string *studentData) {
	//Prints Array[0]
	std::cout << *studentData << std::endl;
	//Prints Address
	std::cout << &studentData << std::endl;

	if (sizeof(studentData) > 0) {


		std::string ID = "A1";

		std::string name = "Test";

		std::string last = "LastTest";

		std::string email = "test@test.com";

		int age = 20;

		int days[] = { 10, 10, 10 };

		classRosterArray[0] = &SecurityStudent(ID, name, last, email, age, days);

		
		std::cout << "Start Array Print" << std::endl;
		std::cout << classRosterArray[0] << std::endl;
		//std::cout << classRosterArray[1] << std::endl;
		classRosterArray[0]->print();
		std::cout << "End Array Print" << std::endl;

		/*for (int i = 0; i < sizeof(studentData); i++) {
			std::cout << studentData[i] << std::endl;
			classRosterArray[i] = createStudent(studentData[i]);

		}

		for (int j = 0; j < sizeof(classRosterArray); j++) {

			std::cout << j << std::endl;
			
			*classRosterArray[j]->print();

		}*/

	}


}

Student* Roster::createStudent(std::string data) {

	std::string ID = "A1";

	std::string name = "Test";

	std::string last = "LastTest";

	std::string email = "test@test.com";

	int age = 20;

	int days[] = {10, 10, 10};

	std::cout << ID << std::endl;


	return &SecurityStudent(ID, name, last, email, age, days);
}