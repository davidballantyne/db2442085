/*
 David Ballantyne
 01/21/14
 purpose:Gaddis_7thEd_Ch5_Prob1
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
	//Declare Variables
	int value, total=0;
	
	//prompt user 
	cout<<"Input a positive interger\n"
		<<"The program will sum all positive integers (1 - your value)\n";
	cin>>value;
	
	//process
	do{
		for(int i=1; i<=value; i++){
		total+=i;		
		cout<<"+ "<<i<<endl;
		}	
	}while(!value<0);
	cout<<"_____\n"
		<<total<<endl;
	return 0;
}
