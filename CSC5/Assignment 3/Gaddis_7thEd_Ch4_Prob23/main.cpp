/*
 David Ballantyne
 01/19/14
 purpose:Gaddis_7thEd_Ch4_Prob23
*/
//Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins here
int main(int argc, char *argv[]){
	//Declare Variables
	char pack;
	int hours;
	float due;
	
	//prompt user
	cout<<"Please choose one monthly internet subscription package: a, b, or c\n";
	cin>>pack;
	cout<<"Enter how many hours were that month used\n";
	cin>>hours;
	
	//process 
	cout<<setprecision(2)<<fixed<<showpoint;
	switch (pack){
		
		case 'a':
			if (hours>=10 && hours<=744){
				hours=(hours-10)*2;
				due=hours;
				due+=9.95;
				cout<<"The amount due is $"<<due<<endl;
			}
			else if (hours>=744){
				    cout<<"ERROR: a month cannot exceed 744 hours\n";
			}
			else if ( hours<=10){
			    due=9.95;
				cout<<"The amount due is $"<<due<<endl;
			}
			break;
		case 'b':
			if (hours>20 && hours<744){
				hours=(hours-20);
				due=hours;
				due+=14.95;
				cout<<"The amount due is $"<<due<<endl;
			}
			else if (hours>=744){
				cout<<"ERROR: a month cannot exceed 744 hours\n";
			}
			else if (hours<=20){
				due=14.95;
				cout<<"The amount due is $"<<due<<endl;
			}
			break;
		case 'c':
			
			if (hours>=744){
				cout<<"ERROR: a month cannot exceed 744 hours\n";
			}
			else if (hours<744){
				due=19.95;
				cout<<"The amount due is $"<<due<<endl;
			
			}
			break;
		}
	system("PAUSE");
    return 0;
}
