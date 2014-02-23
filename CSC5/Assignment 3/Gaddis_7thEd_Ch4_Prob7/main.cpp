/*
David Ballantyne
01/18/14
purpose:Gaddis_7thEd_Ch4_Prob7
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    int seconds, min, hours, days, temp, temp2, temp3;
    
    //prompt user
    cout<<"Enter any number of seconds to calculate days hours min or sec";
    cin>>seconds;
    
    temp=seconds;
    min=seconds;
    min/=60;
    hours=seconds;
    hours/=3600;
    days=seconds;
    days/=86400;
    
    if (seconds>= 60 && min<=60){
       	temp= seconds/60;
        seconds-=temp*60;
        cout<<"There are "<<min<<" minutes & "<<seconds<<" seconds\n";
    }
    
    else if (seconds>3600 && hours<=24){
    	temp= seconds/60;
        seconds-=temp*60;
        temp2=min/60;
        min-=temp2*60;
        cout<<"There are "<<hours<<" hours "<<min<<" minutes & "<<seconds<<" seconds\n";
    }
	else if (seconds>86400){
		temp= seconds/60;
        seconds-=temp*60;
        temp2=min/60;
        min-=temp2*60;
        temp3=hours/24;
        hours-=temp3*24;
        cout<<"There are "<<days<<" days "<<hours<<" hours "<<min<<" minutes & "<<seconds<<" seconds\n";
	}
	else (seconds<60);{
		cout<<"There are "<<seconds<<" seconds\n";
	}
	//exit stage right
    system("PAUSE");
    return EXIT_SUCCESS;
}
