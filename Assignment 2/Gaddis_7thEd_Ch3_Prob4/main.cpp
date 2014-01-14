/*
	David Ballantyne
	01/13/14
	purpose:Gaddis_7thEd_Ch3_Prob4
*/
//Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Global Constants

//Functioning Prototypes
int main(int argc, char** argv) {
	//Declare variables
	string m1, m2, m3; //months
	float rf1, rf2, rf3, avg;// rainfall in inches
	
	//prompt user
	cout<<"Calculate the average rainfall by inputting the name of 3 months \n"
		<<"and their respctive rainfall in inches.\n"
		<<"Make sure to seperate each month and rainfall input by a space in between.\n"
		<<"Input the first months name and amount of rain: ";
	cin>> m1>> rf1;
	cout<<"Input the second months name and amount of rain: ";
	cin>> m2>> rf2;
	cout<<"Input the third months name and amount of rain: ";
	cin>> m3>> rf3;
	
	//process
	avg= (rf1+rf2+rf3)/3.0;
	
	//output
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"The average rainfall for "<<m1<<", "<<m2<<", and "<<m3<<" is \n"
		<<avg<<" inches.";
	return 0;
}
