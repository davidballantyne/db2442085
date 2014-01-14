/*
	David Ballantyne
	01/12/14
	purpose: Gaddis_7thEd_Ch3_Prob2
*/
//Libraries
#include <iostream>
#include <iomanip>
using namespace std; 

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
	//Declare Variables
	float a, b, c, total;
	
	//promt
	cout<<"Class A seats cost $15.00, how many were purchased?"<<endl;
	cin>> a;
	cout<<"Class B seats cost $12.00, how many were purchased?"<<endl;
	cin>> b;
	cout<<"Class C seats cost $9.00, how many were purchased?"<<endl;
	cin>> c;
		
	//process
	a= a* 15;
	b= b* 12;
	c= c* 9;
	total= a + b + c; 
	//output
	cout<< setprecision(2)<< fixed<< showpoint<<endl;
	cout<<"The total amount from ticket sales are $"<< total; 
	
	//Exit Stage Right
	return 0;
}
