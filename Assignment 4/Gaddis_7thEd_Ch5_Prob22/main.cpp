/*
 David Ballantyne
 01/25/14
 purpose:Gaddis_7thEd_Ch5_Prob22
*/
//Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Gloabl Constants

//Function Protoypes

//Execution Begins Here
int main(int argc, char** argv) {
	//Declare Variables
	int num;
	char x='X',a;
	
	do{
		cout<<"Enter a number\n";
		cin>>num;
		if(num<0 || num>15){
			cout<<"ERROR: please restart the program\n";
		}
		if(num>0 && num<=15){
		
  			 for (int j=1; j<=num;j++){
  			 for(int i=1; i<=num;i++){
			cout<<x;
			}
			cout<<endl;
		}
	}
	cout<<"try again (y/n)\n";
	cin>>a;
	}while(a=='Y' || a=='y');
	return 0;
}
