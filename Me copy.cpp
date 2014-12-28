/*
 * Adrienne Bouchie
 * June 20th, 2014
 * Objective: Write a program that implements a C++ class that represents you as an individual
 * Me.cpp
 *
 */

#include <iostream>
#include <string>
using namespace std;

class Me {

	public:

	// Default Constructor that initializes the private variables to some default value
	Me() {
		firstName = "JANE";
		lastName = "DOE";
		middleInitial = 'M';
		birthday = "1/1/1990";
		genderType = "Female";
		majorDeclared = "Undeclared";
		for ( int i=0; i<4; i++ ) {
			for( int j=0; j<5; j++ ) {
				fall[i][j]= " ";
				spring[i][j]= " ";
			}
		}
	}
	
	
	// Constructor that takes in values from the user and sets the private data members to the values passed to the function
	Me( string fName, string lName, string mI, string bDay, string gender, string major )
		: firstName( fName ),
		  lastName( lName ),
		  middleInitial( mI ),
		  birthday( bDay ),
		  genderType ( gender ), 
		  majorDeclared( major ) 
		{
			for ( int i=0; i<4; i++ ) {
				for( int j=0; j<5; j++ ) {
					fall[i][j]= " ";
					spring[i][j]=" ";
				}
			}			
	}
	
	
	// Function that displays the value of each data member
	void displayMeInfo () {
		cout << firstName << " " << middleInitial << " " << lastName << endl;
		cout << birthday << endl;
		cout << genderType << endl;
		cout << majorDeclared << endl; 
	}
	
	
	// Function that allows the user to input his or her course information
	void inputCourseInfo() {
	 	
		string courseTaken;
		const int YEAR = 4;
		const int COURSES = 5;
		
		for ( int i=0; i<YEAR; i++ ) {
			for ( int j =0; j<COURSES; j++ ) {
				cout << "Enter course " << j+1 << " for the fall of year " << i+1 << endl;
				cin >> courseTaken;
				fall[i][j] = courseTaken;
			}
			
			for ( int k =0; k<COURSES; k++ ) {
                cout << "Enter course " << k+1 << " for the spring of year " << i+1 << endl;
				cin >> courseTaken;
                spring[i][k] = courseTaken;
            }
		}			
	}
	
	
	// Function that displays the course information that the user provided
 	void displayCourseInfo() {
		
		int yearCounter = 1;
		const int YEAR = 4;
		const int COURSES = 5;


		for ( int i=0; i<YEAR; i++ ) {
			cout << "These are the courses you took during the fall of year " << i+1 << endl;
                  for ( int j =0; j<COURSES; j++ ) {
           				cout << "\t" << fall[i][j] << endl;
                  }

			cout << "These are the courses you took during the spring of year " << i+1 << endl;
                  for ( int k =0; k<COURSES; k++ ) {
                        cout << "\t" << spring[i][k] << endl;
                  }
        }       			
	}


	private:
	
	string firstName;
	string lastName;
	string middleInitial;
	string birthday;
	string genderType;
	string majorDeclared;
	string fall[4][5];
	string spring[4][5];

};
