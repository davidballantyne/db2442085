/*
	David Ballantyne
	01/12/14
	purpose: Gaddis_7thEd_Ch3_Prob1
*/
//Libraries
#include <iostream>
using namespace std; 

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
	//Declare Variables
	float gallons, miles, mpg;
	
	//promt
	cout<<"Enter how many gallons of gas your vehicle can hold?"<<endl;
	cin>> gallons;
	cout<<"How man  miles can your vehicle travel before refueling?"<<endl;
	cin>> miles;
	
	//process
	mpg= miles/ gallons;
	
	//output
	cout<<"Your vehicles MPG is "<< mpg<<" miles per gallon"<<endl;
	return 0;
}
