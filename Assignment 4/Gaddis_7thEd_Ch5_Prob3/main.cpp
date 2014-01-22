/*
 David Ballantyne
 01/21/14
 purpose:Gaddis_7thEd_Ch5_Prob3
*/
//Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Functioning Prototypes


int main(int argc, char** argv) {
	//Declare Variables
	float level=1.5;// ocean levels in millimeters
	
	//prompt
	cout<<"Ocean level Increase for the next 25 years\n";
	cout<<"Years                   Increase in mm's\n";
	cout<<"------------------------------------------\n";
	for (int i=1; i<=25; i++){
		cout<<i<<"\t\t\t"<<i*level<<endl;
	}
	return 0;
}
