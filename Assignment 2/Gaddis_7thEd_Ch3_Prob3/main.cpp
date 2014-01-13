/*
  David Ballantyne
  01/13/14
  purpose:Gaddis_7thEd_Ch3_Prob3
*/
//Libraries
#include <iomanip>
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    float t1, t2, t3, t4, t5, avg;
    
    //Prompt User
    cout<<" Please enter 5 test scores to recieve your average"<<endl
        <<"enter first test score: ";
    cin>>t1;
    cout<<"enter second test score: ";
    cin>>t2;
    cout<<"enter third test score: ";
    cin>>t3;
    cout<<"enter fourth test score: ";
    cin>>t4;
    cout<<"enter fifth test score: ";
    cin>>t5;
    
    //process
    avg=(t1+t2+t3+t4+t5)/5.0;
    
    //output
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Your total score average is "<< avg<<"%";
    system("PAUSE");
    return EXIT_SUCCESS;
}
