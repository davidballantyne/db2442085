/*
  David Ballantyne
  01/07/14
  purpose: calculate free fall
*/
//Libraries
#include <iostream>
using namespace std;

//Gloabl Constants
float GRAVITY= 32.174e0; //units in feet

//Functioning Prototypes

//Execution Begines here
int main(int argc, char *argv[]){
    //Declare Variables
    float time, dist; //time in seconds, distance in feet
    
    //promt user
    cout<<"Calculate free fall, input time in seconds "<<endl;
    cin>>time;
    
    //Process
    dist=0.5*GRAVITY*time*time;
    
    //Output
    cout<<"The free fall of the object is "<<dist<<
          "ft"<<endl;
    
    //Exit Stage Right
    system("PAUSE");
    return EXIT_SUCCESS;
}
