/*
 David Ballantyne
 01/23/14
 purpose:Gaddis_7thEd_Ch5_Prob20
*/
//Libraries
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants


//Function Prototypes
int rnd();//random number function
//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    unsigned int seed=time(0);
    int n;
    char a;
    do{
    //set the random number seed
    srand(seed);
    
        do{
           //Prompt user;
           cout<<"*** Random Number Guessing Game *** \n"
               <<"    Guess a number between 1-10,   \n"
               <<"     Enter your number below!     \n";
           cin>>n;
           //process
             if(n<rnd()){
             cout<<" Too low, try again.\n";
         
             }else if(n>rnd()){
             cout<<" Too high, try again.\n";
         
             }else if(n==rnd()){
             cout<<rnd()<<" Congradulations you win!.\n";
             }
        }while(n!=rnd());
        cout<<"try again? (y/n)\n";
        cin>>a;
    }while(a=='y' || a=='Y');
    system("PAUSE");
    return EXIT_SUCCESS;
}
int rnd(){
    static int random=rand()%10+1;
    return random;
}
    
