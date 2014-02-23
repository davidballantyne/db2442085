/*
David Ballantyne
01/18/14
purpose:Gaddis_7thEd_Ch4_Prob11
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
	short int books, points;
    
    //prompt user
    cout<<"Enter how many number of books you've bought this month to calculate\n"
    	<<"your total reward points\n";
    cin>>books;
    
     
    if (books>=4){
       	points=60;
        cout<<"You have a total of "<<points<<" reward points\n";
    }
    
    else if (books==1){
    	points=5;
        cout<<"You have a total of "<<points<<" reward points\n";
    }
	else if (books==2){
		points=15;
        cout<<"You have a total of "<<points<<" reward points\n";
	}
	else if (books==3){
		points=30;
        cout<<"You have a total of "<<points<<" reward points\n";
	}
	else if (books<1){
		points=0;
		cout<<"You have a total of "<<points<<" reward points\n";
	}
	//exit stage right
    system("PAUSE");
    return EXIT_SUCCESS;
}
