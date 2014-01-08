/*
	David Ballantyne
	01/07/14
	purpose: Gaddis_7thEd_Ch2_Prob12
*/
//Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
	//variables
	float acre, tract, ttlLand;
	
	//Process
	acre= 4.356e4; //square feet
	tract= 36.9767e4; //square feet
	ttlLand= tract/ acre;
	
	//Output
	cout<<" The total amout of Acres in " << tract<<"(sqft) of land is"<<
			endl<< ttlLand<<" Acres";
	return 0;
}
