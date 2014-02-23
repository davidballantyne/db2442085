/* 
 * David Ballantyne
 *Created on January 22, 2014, 10:19 AM
 * purpose:pass by refrence, random numbers, overloading
 */
//Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Constant

//Function Prototypes
void swap(int &,int &);
void swap(short &, short &);
short sDrvGen();
int   iDrvGen();
//Execution begins here
int main(int argc, char** argv){
    //initialize rand num seed
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    short sa, sb;
    int ia, ib;
    //initialize variables
    sa=sDrvGen(); sb=sDrvGen();
    ia=iDrvGen(); ib=iDrvGen();
    //output before swap
    cout<<"Short Before Swap {"<<sa<<","<<sb<<"}\n";
    cout<<"Int   Before Swap {"<<ia<<","<<ib<<"}\n";
    //Perform Swap
    swap(sa,sb); swap(ia,ib);
    //output result
    cout<<"Short After  Swap {"<<sa<<","<<sb<<"}\n";
    cout<<"Int   After  Swap {"<<ia<<","<<ib<<"}\n";
    //Exit Stage Right
    return 0;
}
//Generate a 4 digit integer
int iDrvGen(){
    int random=rand()%9000+1000;
    return random;
}
//Genereate a short between 1 & 1000
short sDrvGen(){
    short  random=rand()%1000+1;
    return random;
}
void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
    }

void swap(short &a, short &b){
    short temp=a;
    a=b;
    b=temp;
    }
