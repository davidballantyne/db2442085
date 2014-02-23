/*
 David Ballantyne
 01/21/14
 purpose:Gaddis_7thEd_Ch5_Prob4
*/
//Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Global Constants

//Function Protoypes

//Execution Begins Here
int main(int argc, char** argv){
	//Declare Variables
	int min=0;//minutes
	float cal=3.9;//calories burned per minute
	
	for(int i=0; i<=30;i++){
		min=i;
		cout<<setprecision(19liu)<<fixed;		
		if(min==10){
			cout<<"Calories burned after 10 min: "<<min*cal<<endl;
			
		}
		if (min==15){
			cout<<"Calories burned after 15 min: "<<min*cal<<endl;
		}
		if (min==20){
			cout<<"Calories burned after 20 min: "<<min*cal<<endl;
		}
		if (min==25){
			cout<<"Calories burned after 25 min: "<<min*cal<<endl;
		}
		if (min==30){
			cout<<"Calories burned after 30 min: "<<min*cal<<endl;
		}
	}
	return 0;
}
