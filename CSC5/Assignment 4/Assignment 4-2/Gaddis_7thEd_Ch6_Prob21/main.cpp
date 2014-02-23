/*
David Ballantyne
01/23/14
purpose:Gaddis_7thEd_Ch6_Prob21
*/
//Libraries
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants


//Function Prototypes
bool isPrime (unsigned int);
void outPrime(unsigned int);
int random(unsigned int, unsigned int);
//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    unsigned int seed=time(0);
    //set seed
    srand(seed);
    //random num range
    int strt=100, stp=1000;
    int rnd=random(strt,stp);
    
    //output
    cout<<setw(5)<<fixed;
    cout<<"The random numbers up to "<<rnd<<" are \n";
    outPrime(rnd);
    //exit stage right
    system("PAUSE");
    return EXIT_SUCCESS;
}
int random(unsigned int strt, unsigned int stp){
     return rand()%(stp-strt+1)+strt;
}
void outPrime(unsigned int n){
     cout<<endl;
     for(int i=2,cnt;i<=n;i++){
        if(isPrime(i))cout<<i<<" ";
        }
}
bool isPrime(unsigned int n){
    int loop=sqrt(n);
    for(int i=2;i<=loop;i++){
         if(n%i==0) return false;
         }
     return true;
}
