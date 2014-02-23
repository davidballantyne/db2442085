/*
* David Ballantyne
* Created on January 14, 2014, 10:43 AM
* purpose: Gaddis_7thEd_Ch6_Prob7
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <limits>
using namespace std;

//Global Constants

//Functioning prototypes
int celsius(int);
//Execution Begins Here
int main(int argc, char** argv){
	//Declare variables
	int c1,f1;
	char a;
	//prompt
	cout<<"Enter a degree in Fahrenheit to convert to Celsius: ";
	cin>>f1;
	c1=celsius(f1);
	cout<<"Your degree in Fahrenheit is "<<f1<<endl
		<<"Your degree in Celsius is "<<c1<<endl;
	cout<<endl;
  	cout<<endl;
	//output
	
    cout<<"Fahrenheit\t\tCelsius\n"
    <<"--------------------------------------\n";
    	for(int i=0; i<=20;i++){
    	c1=celsius(i);
    	    
        cout<<i<<"\t\t"<<c1<<endl;
        }
	return 0;
}
int celsius(int f){
	int c;
	c=5/9.0*(f-32);
	return c;
}
