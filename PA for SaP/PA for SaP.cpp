#include <iostream>
#include "roster.h"

int main()
{
	int var = 19;
    std::cout << "Hello World :V!\n" << var;

	std::string test = "Hello,here,we,go,to";

	for (int i = 0; i < test.size(); i++) {

		std::cout << test[i] << std::endl;

	}

	const std::string studentData[] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Eddy,Leon,eleon18@wgu.edu,23,30,30,30,SOFTWARE"
	};

	Roster classRoster(studentData);

	std::cout << "Here I finished" << std::endl;


}

