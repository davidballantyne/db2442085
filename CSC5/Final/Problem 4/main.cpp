/*
 David Ballantyne
 02/15/14
 purpose:Final Problem 4
*/
//libraries
#include<iostream>
#include<cstdlib> // for rand and srand
#include<ctime> // time function
using namespace std;
//global constants

//function prototypes
void randS(short int [],int[] ,int );

//execution begins here
int main(){
	//declare variables
	const int n=5,ntimes=10000;
    int freq[n]={};
    short int rndS[]={9,51,79,182,251};
	randS(rndS,freq,ntimes);
	
	system("Pause");
	//exit stage right
	return 0;
}
void randS(short int a[],int f[],int ntimes){
	unsigned int seed = time(0);	
	// set random number seed
	srand(seed);	
	for(int i=0;i<ntimes;i++){
		// mod rand to return value 1, 2, 3, 4, or 5.
		int j=rand() %5;
		f[j]+=1;
	}
	for(int k=0;k<5;k++){		
        cout<<a[k]<<" occured "<<
            f[k]<<" times"<<endl;

	}
}
