/*
 David Ballantyne
 02/15/14
 purpose:FINAL problem 
*/
//Libraries
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int rnd();//random number function
void game(int);//game play
void prompt();//prompt user
//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    unsigned int seed=time(0);
    int random;
	char a;
     //set the random number seed
    do{    
    srand(seed);
    random=rnd();
	prompt();
	game(random);
	cout<<"Would you like to play again(y or n)?\n";
	cin>>a;      
    }while(a=='y'|| a=='Y');
    system("PAUSE");
    return EXIT_SUCCESS;
}
void prompt(){
        
     cout<<"*** Random Number Guessing Game *** \n"
         <<"    Guess a number between 1-950,   \n"
         <<"      Enter your number below!     \n";
}
int rnd(){
   int random=rand()%950+1;
   return random; 
}
void game(int random){
	int n;
	 for(int i=0;i<10;i++){   
           cin>>n;
           
           //process
             if(n<random){
             cout<<" Too low, try again.\n";
         
             }else if(n>random){
             cout<<" Too high, try again.\n";
         
             }else if(n==random){
             cout<<random<<" Congradulations you win!.\n";
			 }        
 	 }
}
