/*
 David Ballantyne
 01/15/14
 Purpose: Gaddis_7thEd_Ch4_Prob1
*/
//Libraries
 #include <iostream>
 using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
	//Declare vairables
    int a, b, c, d;
	
	//prompt user
	cout<<"Enter two numbers two find to find the larger and smaller number\n"
		<<"Make sure to seperate the numbers by a space\n";
	cin>>a>>b;
	//process
	c = (a>b) ? a : b;
	d=  (b>a) ? a: d;
	
	//output
    cout << c <<" is the larger number\n"
    	 << d <<" is the smaller number\n";
    //exit
	return 0;
}
