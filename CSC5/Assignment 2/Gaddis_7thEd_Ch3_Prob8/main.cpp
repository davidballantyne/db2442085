/*
 David Ballantyne
 01/15/14
 purpose:Gaddis_7thEd_Ch3_Prob8
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare variables
    float prperty, insure=0.8e0, cost;
    
    //prompt user 
    cout<<"Calculate how the minimum costs to insure your property by\n"
        <<"input your propertys value\n"
        <<"$";
    cin>>prperty;
    
    //Process
    cost=prperty;
    cost*=insure;
        
    //output
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The minimum costs to insure your property is\n"
        <<"$"<<cost<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
