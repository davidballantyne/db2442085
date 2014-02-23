/*
 David Ballantyne
 02/08/12
 purpose:project 1
*/
//libraries
#include<fstream>
#include<iomanip>
#include<iostream>
#include<cstdlib> // for rand and srand
#include<ctime> // time function
#include<string>
using namespace std;
//global constants
const int SIZE=10000;

//Structures
struct AryStat{
    int data[SIZE];
    int sizeUtl;
};
// function prototypes
void prompt(); // prompt does not return a value
int p2choice(); // randomizer function
void menu(); // menu function does not return a value
void eval(int choice, int p2choices); // evaluation function
void winsLoss(AryStat &,int,int,int);//wins loss draws array
//execution begins here
int main(){
	// Variables
	int choice = 0;//player choice default
	int p2ch= 0;//player 2 choice default
	
	// Display prompt
	prompt();	
	do{
		// Run p2choice randomize function.
		p2ch=p2choice();	
		// Run menu function
		menu();		
		// Input user choice
		cout << "\t** Choose your weapon! \n\n";
		cout << "\t********************************************************\n\n";
		cout << "\t"; 
		cin >>choice;
		cout << endl;		
		// Run evalution function and compare with comp
		eval(choice,p2ch);
		
	}while (choice != 6);	
	//exit stage right
	return 0;
}
void winsLoss(AryStat &a,int wins,int loss, int draws){
   
    //Fill the Array
        a.data[0]+=wins;
        a.data[1]+=loss;
        a.data[2]+=draws;
         //Declare a file stream object 
    ifstream in;
    //Open the file
    in.open("scores.dat");
    //Input some information   
    in>>a.data[0];
    in>>a.data[1];
    in>>a.data[2];
    //Output the values contained in the file;/ 
	cout<<endl;  
    
    //Close the file
    in.close(); 
 	
 	ofstream out;
    //Open the file
    out.open("scores.dat");
    //Output some information  
    out<<a.data[0];
    out<<a.data[1];
    out<<a.data[2];
    cout<<setw(13)<<"wins"<<setw(10)<<"loss"<<setw(11)<<"draws"<<endl;
    cout<<setw(10)<<wins<<setw(10)<<loss<<setw(10)<<draws<<endl;
    //Close the file
    out.close();
}
// prompt Function
void prompt(){
	cout << "\t********************************************************\n";
	cout << "\t*** Let's Play a game of ***\n";
	cout << "\t*** Rock, Paper, Scissors,Lizard Spock! ***\n";
	cout << "\t********************************************************\n";
	cout << "\t********************************************************\n\n\n";
}
// p2choice function. Random Number Generator.
int p2choice(){
	unsigned int seed = time(0);	
	// set random number seed
	srand(seed);	
	// mod rand to return value 1, 2, or 3
	int p2ch=rand() %5+1;	
	// returns the value 
	return p2ch;
}
// menu function
void menu(){
	cout << "\t********************************************************\n";
	cout << "\t** !Armoury! **\n";
	cout << "\t********************************************************\n";
	cout << "\t** 1. Rock (Very solid, of granite or obsidian nature.) **\n";
	cout << "\t** 2. Paper (College ruled, possibly Lehr notes, do not wet.) **\n";
	cout << "\t** 3. Scissors (Fiskars, very sharp, keep away from children.) **\n";
	cout << "\t** 4. Lizard (Poisonous little critter real ugly too.) **\n";
	cout << "\t** 5. Spock (When in doubt, Vulcan death grip.) **\n";
	cout << "\t** 6. Quit while you still can! **\n";
	cout << "\t********************************************************\n\n";
}

// evaluation function
void eval(int choice, int p2choice){
	AryStat aStat;
	static int wins=0, loss=0, draws=0;
	//switch and determine output
	switch(choice){
		case 1:
			if(p2choice == 2){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Paper covers Rock. Computer Wins! \n\n\n";
			loss++;
			}
			else if(p2choice == 3){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Rock breaks Scissors! You Win! \n\n\n";
			wins++;
			}
			else if(p2choice == 4){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Rock smashes Lizard You Win! \n\n\n";
			wins++;
			}
			else if(p2choice == 5){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Spock vaporizes Rock! Computer Wins! \n\n\n";
			loss++;
			}
			
			else{
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** It's a Draw, no fun for anyone. \n\n\n";
			draws++;
			}
			break;
	
	case 2:
			if(p2choice == 1){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Paper covers Rock, it was soggy. You Win! \n\n\n";
			wins++;
			}
			else if(p2choice == 3){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Scissors cut Paper. Computer Wins!\n\n\n";
			loss++;
			}
			else if(p2choice == 4){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Lizard eats your Homework Computer Wins! \n\n\n";
			loss++;
			}
			else if(p2choice == 5){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Paper disproves Spock! You Win! \n\n\n";
			wins++;
			}
			else{
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** It's a Draw, no fun for anyone. \n\n\n";
			draws++;
			}
			break;

	case 3:
			if(p2choice == 1){
			cout << "\t** Your Choice is: " << choice<< endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t Rock breaks Scissors! Computer Wins! \n\n\n";
			loss++;
			}
			else if(p2choice == 2){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t Scissors cut Paper! You Win! \n\n\n";
			wins++;
			}
			else if(p2choice == 4){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Scissors decapitates Lizard! You Wins! \n\n\n";
			wins++;
			}
			else if(p2choice == 5){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Spock smashes Scissors! Computer Wins! \n\n\n";
			loss++;
			}
			else{
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t It's a Draw, no fun for anyone. \n\n\n";
			draws++;
			}
			break;
	case 4:
			if(p2choice == 1){
			cout << "\t** Your Choice is: " << choice<< endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t Rock smashes Lizard! Computer Wins! \n\n\n";
			loss++;
			}
			else if(p2choice == 2){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t Scissors decapitates Lizard! Computer Wins! \n\n\n";
			loss++;
			}
			else if(p2choice == 3){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Lizard eats Homework! You Win! \n\n\n";
			wins++;
			}
			else if(p2choice == 5){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Lizard poisons Spock! You Win! \n\n\n";
			wins++;
			}
			else{
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t It's a Draw, no fun for anyone. \n\n\n";
			draws++;
			
			}
			break;
	case 5:
			if(p2choice == 1){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Spock vaporizes Rock! You Win! \n\n\n";
			wins++;
			}
			else if(p2choice == 2){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t Spock smashes Fiskars! You Win! \n\n\n";
			wins++;
			}
			else if(p2choice == 3){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Paper disproves Spock! Computer Wins! \n\n\n";
			loss++;
			}
			else if(p2choice == 4){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Lizard poisons Spock! Computer Win! \n\n\n";
			loss++;
			}
			else{
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t It's a Draw, no fun for anyone. \n\n\n";
			draws++;
			
			}
			break;
 	}
 	winsLoss(aStat,wins,loss,draws);		
}
