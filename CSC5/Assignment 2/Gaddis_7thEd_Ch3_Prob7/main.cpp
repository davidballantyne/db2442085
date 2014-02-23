/*
 David Ballantyne
 01/14/14
 purpose: Gaddis_7thEd_Ch3_Prob7
*/
//Libraries
#include <iostream>
using namespace std;
//Global Constants

//Functioning Prototypes

//Executio Begins Here
int main(int argc, char** argv) {
	//Declare Variables
	short cookies, calories;
	
	//prompt user
	cout<<"Enter the number of cookies consumed to calculate\n"
		<<"the total amount of calories consumed. \n";
	cin>>cookies;
	if (cookies>40){
		cout<<"ERROR: there are only 40 cookies in this bag, please restart program.";
		return 0;
		}
	//process
	//10 cookies = 300 calories :: 1 cookie = 30 calorie
	cookies*=30;
	calories= cookies;
	
	//output
	cout<<"You have consumed "<<calories<<" calories.";	
	
	//exit stage right
	return 0;
}
