/*
David Ballantyne
01/21/14
purpose:Gaddis_7thEd_Ch5_Prob7
*/
//Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

//Global Constants

//Functioning Prototype

//Execution Begins here
int main(int argc, char** argv) {
	//Declare Variables
	float pennys;
	int days;
	char a;
	cout<<fixed<<showpoint<<setprecision(2);
	do{
		cout<<"Your salary is a penny a day doubled\n"
			<<"Ener how many days worked: \n";
		cin>>days;
		if (days<1){
			cout<<"Error: please restart program (y/n)\n";
		}
		if(days>=1){
			cout<<"Hour\t\tDistance Traveled\n"
		<<"--------------------------------------\n";
		}
		
		for(int i=1;i<=days;i++){
		pennys=(1e-2*pow(2,i))-1e-2;
		
		cout<<i<<"\t\t$"<<pennys<<endl;		
		}
		cout<<"Restart program? (y/n)\n";
		cin>>a;
	}while( a=='y');
	return 0;
}
