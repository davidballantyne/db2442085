/*
 David Ballantyne
 01/16/14
 purpose:Gaddis_7thEd_Ch4_Prob3
*/
//libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    short int month, day, year;
    char ans;
    do{
    //prompt the user for the date
    cout<<"Enter a date to find out if it's special (ex: 06/10/60)\n"
        <<"Enter month date and year in a two digit format\n"
        <<"Please seperate entries with spaces\n";
    cin>>month>>day>>year;
    
    //Finding out if the date is special or not
    year==month*day ? 
    cout<<month<<"/"<<day<<"/"<<year<<" is a magic date!\n" :
    cout<<month<<"/"<<day<<"/"<<year<<" is not magic date..\n";
    cout<<"Would you like to run this program again?(y/n)\n";
    cin>>ans;
    }while(ans=='Y'||ans=='y');
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
