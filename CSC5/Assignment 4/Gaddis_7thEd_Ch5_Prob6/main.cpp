/*
 David Ballantyne
 01/24/14
 purpose:Gaddis_7thEd_Ch5_Prob6
 */
 //Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
//GLobal Constants

//Functioning Prototypes


//Execution begins here
int main(int argc, char** argv) {
	//Declare Variables
	float distance, speed, time;
	char y;
	
	do{	
	//prompt
	cout<<"What is the speed of the vehicle in mph?";
	cin>>speed;
	cout<<"How many hours has it traveled?";
	cin>>time;
	
	//process
	distance= speed*time;
	
	
	if (speed<0 || distance<1){
		cout<<"ERROR: please try again (y/n)\n";
		
	}

	if (speed>0 && distance>1){
		cout<<"Hour\t\tDistance Traveled\n"
		<<"--------------------------------------\n";
		for(int i=1; i<=time;i++){
		
		cout<<i<<"\t\t"<<speed*i <<"\n";
		}
	}
		cout<<"would you like to run this program again (y/n))?\n";
		cin>>y;
	}while(y=='Y'||y=='y');
	//Exit stage right
	return 0;
}
