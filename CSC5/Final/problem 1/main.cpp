/*
 David Ballantyne
 02/15/14
 purpose:FINAL problem 1
*/
//Libraries
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int reverse(int );
//Execution Begins Aqui
int main(int argc, char** argv) {
	//declare variables
	int num, sum;
    cout << "Enter a number less than 1000 to be reversed:" << endl;
    cin >> num;
    sum=reverse(num);
    if (sum>65535) cout<<"no conversion possible.";
    else{    
    cout<<"reversed number is:";
    cout<<sum;
	}
	return 0;
}
int reverse(int num){
   int sum=0;
   while(num>0)
   {
     sum=sum*10+ num %10; 
     num=num/10;
   }
   return sum;
}
