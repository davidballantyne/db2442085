/*
 David Ballantyne
 01/21/14
 purpose:Gaddis_7thEd_Ch5_Prob2
*/
//Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Functioning Prototype

//Execution Begins here
int main(int argc, char** argv) {
	//Declare Variables
	char a;
	
	for (int i=0, j=0; i<=127; i++,j++){
		a= i;		
		cout<<a;
		if(j==16){
			j=0;
			cout<<endl;
		}
	}
	return 0;
}
