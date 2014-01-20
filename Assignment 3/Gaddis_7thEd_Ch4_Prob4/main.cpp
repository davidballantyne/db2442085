/*
David Ballantyne
01/16/14
purpose:Gaddis_7thEd_Ch4_Prob4
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
    float l1, l2, w1,w2,a1,a2;
    
    //prompt user
    cout<<"Enter the length and with for your first rectangle\n";
    cin>>l1>>w1;
    cout<<"Enter the length and with for your second rectangle\n";
    cin>>l2>>w2;
    //process
    a1=l1*w1;
    a2=l2*w2;
    if (a1>a2){
    	cout<<"The first rectangle is larger with an area of "<<a1<<endl;
    	cout<<"The second rectangle is smaller with an area of "<<a2<<endl;
	}
    else if (a2>a2){
    
		cout<<"The second rectangle is larger with an area of "<<a2<<endl;
    	cout<<"The first rectangle is smaller with an area of "<<a1<<endl;
	}
	else if (a1==a2){
		cout<<"Both rectangles have the same area of "<<a1<<endl;
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
