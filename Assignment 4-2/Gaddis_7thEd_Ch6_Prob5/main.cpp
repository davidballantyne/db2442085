/*
 David Ballantyne
 01/27/14
 purpose:Gaddis_7thEd_Ch6_Prob6
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//Function Prototypes
float fallDist(float);
//Execution Begins Here
int main(int argc, char** argv) {
	//Declare Variables
	float dist1;
	
	//Prompt
	cout<<"Enter an objects falling time in seconds\n";
	//input
	cout<<"seconds: ";
	cin>>dist1;

	dist1=fallDist(dist1);
	//Output
	cout<<"The total distance dropped is "<<dist1<<" meters\n";
	
	//table
	cout<<"Seconds\t\tMeters Dropped\n"
	    <<"--------------------------------------\n";
	    	for(int i=1; i<=10;i++){
	    	dist1=fallDist(i);
	    	    
	        cout<<i<<"\t\t"<<dist1<<endl;
	        }
	return 0;
}
float fallDist(float t){
	float dist, g=9.8e0;
	t*=t;
	dist=.5*g*t;
	
	return dist;
}

