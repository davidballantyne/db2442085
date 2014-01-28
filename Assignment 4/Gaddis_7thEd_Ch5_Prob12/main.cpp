/* 
 * David Ballantyne
 * Created on January 14, 2014, 10:43 AM
 * purpose: Gaddis_7thEd_Ch5_Prob12
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
    short f,c=20;
    
	//output
    cout<<"Celsius\t\tFahrenheit\n"
		<<"--------------------------------------\n";
        
    for(int i=0; i<=c;i++){    
    f= (9/5.0*i)32;
    
	cout<<i<<"\t\t"<<f<<endl;
	}
    //exit stage right	
    return 0;
}


