/*
 David Ballantyne
 01/13/14
 purpose:Gaddis_7thEd_Ch3_Prob18
*/
//Libraries
#include <iostream>
#include <cmath>
#include <iomanip>>
using namespace std;

//Global Constants

//Functioning Prototypes

//Global Constants
int main(int argc, char** argv) {
	//Declare Variables
	double pi= 3.141592653589793;// Because getting the closest exact area of pizza is important
	float r, area, slices;// diameter = 2 * radius
	
	//promt
	cout<<"Calculate the number of pizza slices available respective to the diameter\n"
		<<"of your pizza.\n";
	cout<<"Enter the diameter of your pizza in inches: ";
	cin>> r;
	
	//process
	r= r/2;
	area = pi*(r*r);
	slices= area/14.125;
	//output
	cout<<setprecision(4)<<fixed<<showpoint;
	cout<<"The number of slices that may be taken from a pizza\n"
		<<"with and area of "<< area<<" sqr inches.\n"
		<<"is "<<slices<<" slices.\n";
		
	//exit stage right	
	return 0;
}
