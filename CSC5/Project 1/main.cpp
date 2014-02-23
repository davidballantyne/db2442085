/*
 David Ballantyne
 02/08/12
 purpose:project 1
*/
//libraries
#include<iostream>
#include<cstdlib> // for rand and srand
#include<ctime> // time function
using namespace std;
//global constants

// function prototypes
void prompt(); // prompt does not return a value
int p2choice(); // randomizer function
void menu(); // menu function does not return a value
void eval(int choice, int p2choices); // evaluation function

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
		
	}while (choice != 4);	
	//exit stage right
	return 0;
}
// prompt Function
void prompt(){
	cout << "\t********************************************************\n";
	cout << "\t*** Let's Play a game of ***\n";
	cout << "\t*** Rock, Paper, Scissors! ***\n";
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
	cout << "\t** 4. Quit while you still can! **\n";
	cout << "\t********************************************************\n\n";
}

// evaluation function
void eval(int choice, int p2choice){
	//switch and determine output
	switch(choice){
		case 1:
			if(p2choice == 2){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Paper covers Rock. Computer Wins! \n\n\n";
			}
			else if(p2choice == 3){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Rock breaks Scissors! You Win! \n\n\n";
			}
			else{
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** It's a Draw, no fun for anyone. \n\n\n";
			
			}
			break;
	
	case 2:
			if(p2choice == 1){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Paper covers Rock, it was soggy. You Win! \n\n\n";
			}
			else if(p2choice == 3){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** Scissors cut Paper. Computer Wins!\n\n\n";
			}
			else{
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t** It's a Draw, no fun for anyone. \n\n\n";
			}
			break;

	case 3:
			if(p2choice == 1){
			cout << "\t** Your Choice is: " << choice<< endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t Rock breaks Scissors! Computer Wins! \n\n\n";
			}
			else if(p2choice == 2){
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t Scissors cut Paper! You Win! \n\n\n";
			}
			else{
			cout << "\t** Your Choice is: " << choice << endl;
			cout << "\t** Computers Choice is: " << p2choice << endl;
			cout << "\t It's a Draw, no fun for anyone. \n\n\n";
			
			}
			break;
 	}
}
