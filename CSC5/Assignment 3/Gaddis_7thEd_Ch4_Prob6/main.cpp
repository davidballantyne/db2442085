/*
David Ballantyne
01/18/14
purpose:Gaddis_7thEd_Ch4_Prob6
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
    float weight, mass;
    
    //prompt user
    cout<<"Calculate an objects weight in newtons by entering the objects mass (in kilograms)\n";
    cin>>mass;
    
    //process
    weight=mass*9.8;
    
    
    if (weight> 10 && weight<1000){
    	cout<<"The weight of your object is "<<weight<<" newtons\n";
    }
    else if (weight>1000){
    
		cout<<"Your object is too heavy!"<<endl;
    }
	else if (weight<10){
		cout<<"Your object is too light!  "<<endl;
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
