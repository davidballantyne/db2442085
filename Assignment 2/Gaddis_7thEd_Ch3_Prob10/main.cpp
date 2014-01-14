/* 
 * David Ballantyne
 * Created on January 14, 2014, 10:43 AM
 * purpose: Gaddis_7thEd_Ch3_Prob10
 */
//Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Functioning prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Declare Variabes
    short f, c;
    
    //Prompt user
    cout<<"Enter your Celsius temperature to convert to Fahrenheit ";
    cin>>c;
    
    //process
    f= 9/5.0*c+32;
    
    //output
    cout<<"The temperature conversuion to Fahrenheit is "<<f<<"F";

    return 0;
}

