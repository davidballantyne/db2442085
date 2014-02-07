/*
David Ballantyne
01/27/14
purpose:Gaddis_7thEd_Ch6_Prob9
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//Global Constants
const int CNV_PERC=100;//convert to percent
//Function Prototypes
float presentVal(float, float, int);
//Execution Begins Here
int main(int argc, char** argv) {
	//declare variables
	float pVal, fVal, irate;
	int n;
	cout<<"Savings account interest calculator\n";
	cout<<"Calcuate how much you need to deposit now to get your future value\n";
	cout<<"Enter Future Value: $";
	cin>>fVal;
	cout<<"Enter Annual Interest Rate: ";
	cin>>irate;
	cout<<"Enter Compunding Years: ";
	cin>>n;
	pVal=presentVal(fVal,irate,n);
	cout<<"Your desired amount is $"<<fVal<<" your interest rate is "<<irate
		<<"%\n"<<"and your total years are "<<n<<endl;
	cout<<"The present value you should deposit for your future value is $"
		<<pVal<<endl;
	
	return 0;
}
float presentVal(float f, float r, int n){
        float temp, p;
        r/=CNV_PERC;
        temp=pow(1+r,n);        
        p=f/temp;
        return p;
}
