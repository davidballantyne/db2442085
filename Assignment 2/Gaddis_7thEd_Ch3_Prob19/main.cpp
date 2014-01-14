/*
David Ballantyne
01/13/14
purpose:Gaddis_7thEd_Ch3_Prob18
*/
//Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants

//Functioning Prototypes

//Global Constants
int main(int argc, char** argv) {
        //Declare Variables
        double pi= 3.141592653589793;// Because getting the closest exact area of pizza is important
        float r, area, slices, temp;// diameter = 2 * radius
        int guests, pizzas;
        //promt
        cout<<"To calcuclate how many pizzas you need to buy for party\n"
        	<<"please enter your total number of party guests.\n";
        // 1 guest = 4 slices
        cin>> guests;
        cout<<"Calculate the number of pizza slices available respective to the diameter\n"
              <<"of your pizzas.\n";
        cout<<"Enter the diameter of your pizzas in inches\n";
        //8.48162 inch (diameter) = 56.5inch^2 (area) / 14.125 (1 slice)  = 4 slices = 1 guest 
        cin>> r;
        //process
        r= r/2;
        area = pi*(r*r);
        slices= area/14.125;
        pizzas=1;
        temp= pizzas;
		temp= (1/(slices/(guests*4.00)))+0.5;
		pizzas= pizzas*temp;

   	    //output
   	    cout<<"The number of pizzas that should be bought are "<<pizzas<<" pizzas\n";
        cout<<setprecision(4)<<fixed<<showpoint;
        cout<<"The number of slices that may be taken from each pizza\n"
                <<"with and area of "<< area<<" sqr inches.\n"
                <<"is "<<slices<<" slices.\n";
        
        //exit stage right        
        system("PAUSE");
        return EXIT_SUCCESS;
}

