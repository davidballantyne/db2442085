/*
David Ballantyne
01/23/14
purpose:Gaddis_7thEd_Ch6_Prob8
*/
//Libraries
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int rnd(int);//random number function

//Execution Begins Here
int main(int argc, char *argv[]){
	unsigned int seed=time(0);
    int count1;
    //set the random number seed
    srand(seed);
	//prompt user
	cout<<"How many number of times would you like to flip a coin?\n";
	cin>>count1;
	//output
	count1=rnd(count1);
	cout<<"You flipped the coin "<<count1<<" times\n";
	return 0;
}
int rnd(int count){
	int random,i=1;
    do{
	random=rand()%2+1;
	i++;
	if(random==1)cout<<"Heads\n";
	if(random==2)cout<<"Tails\n";
	}while(i<=count);
	return count;
}
