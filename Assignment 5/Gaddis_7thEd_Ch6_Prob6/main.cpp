/*
 David Ballantyne
 01/27/14
 purpose:Gaddis_7thEd_Ch6_Prob6
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//Function Prototypes
float KinEn(float, float);//Kinetic Energy Function
//Execution Begins Here
int main(int argc, char** argv) {
	//Declare Variables
	float m1, v1, ke;//mass * veloc
	
	//Prompt
	cout<<"Enter an objects mass in kilograms and velocity in meters per second\n"
		<<"to determine it's total kinetic energy\n";
	//input
	cout<<"mass: ";
	cin>>m1;
	cout<<"velocity: ";
	cin>>v1;
	ke=KinEn(m1,v1);
	//Output

	cout<<"The total kinetic energy of the object is "<<ke<<" Joules\n";
	return 0;
}
float KinEn(float m, float v){
	float k;
	v*=v;
	m*=0.5;
	k=v*m;
	return k;
}
