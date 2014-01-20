/*
David Ballantyne
01/18/14
purpose:Gaddis_7thEd_Ch4_Prob5
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
//Global Constants
const int CNV_FT_INCH= 12; //feet to inches conversion
//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    float weight, height, bmi;
    
    //prompt user
    cout<<"Calculate your Body Mass Index to determine if you are over or under weight\n";
    cout<<"Enter the your weight (in pounds) and height (in feet) seperate with a space\n";
    cin>>weight>>height;
    
    //process
    height*=CNV_FT_INCH;
    bmi= weight* (703/(height*height));
    
    
    if (bmi>18.5 && bmi<25){
    	cout<<"You are in optimal weight!"<<endl;
    }
    else if (bmi>25){
    
		cout<<"You are overweight! "<<endl;
    }
	else if (bmi<18.5){
		cout<<"You are underweight! "<<endl;
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
