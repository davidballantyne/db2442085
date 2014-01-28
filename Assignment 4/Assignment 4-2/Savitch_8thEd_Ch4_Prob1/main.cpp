/*
David Ballantyne
01/27/14
purpose:Savitch_8thEd_Ch4_Prob1
*/
//Libraries
#include <iostream>
using namespace std;

//Global Constants
const float CNV_LTR = 2.64179e-1; // 1 liter = 0.264179 gallon.

//Function prototypes
float compMpg(float,float);

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float miles, liters;
    char a;
    //loop
    	do{
    	
        //input
        cout<<"Calculate the miles per gallon\n";
        cout << "Enter miles driven: ";
        cin >> miles;
        cout << "Enter liters of fuel consumed: ";
        cin >> liters;
        //compute MPG, display output
        cout << "Miles per gallon: " << compMpg(miles, liters) << endl;
        //Check with user - are we done?
        cout << "Restart program? (y/n)? ";
        cin>>a;
    }while(a=='y' || a=='Y');
    //Exit, stage right
    return 0;
}
float compMpg(float dist, float liters) {
    //Define local variable
    float gal;
    //Calculate MPG, return result
    gal = liters*CNV_LTR;
    return dist/ gal;
}
