/*
  David Ballantyne
  01/08/14
  purpose: Gaddis_7thEd_Ch2_Prob10
*/
//Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Functioing prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Variables
    float gas, miles, mpg; 
    
    //process
    gas= 12; //gallons of gas
    miles= 350; //miles driven
    mpg= miles/gas; // miles per gallon
    
    //output
    cout<<" The MPG of a car holding "<< gas<<
          " gallons of gas"<<endl<<" and traveling "<<
          miles<<" miles is "<< mpg<<" miles per gallon"<<endl;
    
    //Exit Stage Right
    system("PAUSE");
    return EXIT_SUCCESS;
}
