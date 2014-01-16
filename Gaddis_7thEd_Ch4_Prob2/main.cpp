/*
 David Ballantyne
 01/16/14
 purpose:Gaddis_7thEd_Ch4_Prob2
*/
//Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    unsigned short number;
    char ans;
    do{
    //prompt user to enter number
    cout<<"Enter any number between 1-100 to convert into "
        <<"a Roman numeral\n";
    cin>>number;
    
    //number to numeral conversion
    //I II III IV V VI VII VIII IX X
    //X XX XXX XL L LX LXX LXXX XC C
    //loop
    
    char numrl= number/10;//find out tens
    switch(numrl){
    case 10: cout<<"C";break;
    case 9: cout<<"XC";break;
    case 8: cout<<"LXXX";break;
    case 7: cout<<"LXX";break;
    case 6: cout<<"LX";break;
    case 5: cout<<"L";break;
    case 4: cout<<"XL";break;
    case 3: cout<<"XXX";break;
    case 2: cout<<"XX";break;
    case 1: cout<<"X";break;
         };
    char numrl2= number/10;//find out ones
         number-=numrl2*10;
    switch(number){
    case 9: cout<<"IX";break;
    case 8: cout<<"VIII";break;
    case 7: cout<<"VII";break;
    case 6: cout<<"VI";break;
    case 5: cout<<"V";break;
    case 4: cout<<"IV";break;
    case 3: cout<<"III";break;
    case 2: cout<<"II";break;
    case 1: cout<<"I";break;
         };
    cout<<endl;
    cout<<"Would you like to run this program again?(y/n)\n";
    cin>>ans;
    }while(ans=='Y'||ans=='y');
    system("PAUSE");
    return EXIT_SUCCESS;
}
