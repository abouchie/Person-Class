/*
 * Adrienne Bouchie
 * June 20th, 2014
 * Objective: Create a program that implements a C++ class that represents you as an individual
 * Main.cpp
 *
 */

#include <iostream>
#include "Me.cpp"
using namespace std;


int main () {


	string fName;
	string lName;
	string mInitial;
	string dob;
	string gender;
	string major;
	
	cout << "Hello. Please enter your first name: " << endl;
	cin >> fName;
	cout << "Enter your last name: " << endl;
	cin >> lName;
	cout << "Enter your middle initial: " << endl;
	cin >> mInitial;
	cout << "Enter your date of birth (mm/mm/yyyy): " << endl;
	cin >> dob;
	cout << "Enter your gender (m/f): " << endl;
	cin >> gender;
	cout << "Enter your declared major: " << endl;
	cin >> major;
	
	cout << "\nThis is the the class for: " << endl;
	Me MyInfo( fName, lName, mInitial, dob, gender, major );

	MyInfo.displayMeInfo();

	cout << "\nNow lets input the courses you took at Fordham" << endl;
	MyInfo.inputCourseInfo(); 	
	MyInfo.displayCourseInfo();
}




