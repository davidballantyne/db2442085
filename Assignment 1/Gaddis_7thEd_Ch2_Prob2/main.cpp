/*
  David Ballantyne
  01/07/14
  Purpose: Gaddis_7thEd_Ch2_Prob2
*/
//Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Variables
    int ECsls, total; //ECsls = East Coast Sales
    
    //Process
    total= 4.6e6;
    ECsls= total * 6.2e-1f;
    
    //output
    cout<<"The East Coast sales division generated $"<< ECsls<< endl;
    cout<<"of the total $"<< total<<" yearly sales."<< endl;
    
    //Exit Stage Right
    system("PAUSE");
    return EXIT_SUCCESS;
}
