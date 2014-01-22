/*
 David Ballantyne
 01/21/14
 purpose:Gaddis_7thEd_Ch5_Prob5
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const int PERC_CNV=100;//percent conversion
//Function protoypes

//Begin Execution Here
int main(int argc, char *argv[]){
    //Declare Varialbes
    int years;
    float fee=4, charge=2403.846;
    //yr 1 charge = 2500
    //2403.846* 1.04= 2500
    
    for(int i=1; i<=6; i++){
        years=i;
        charge*=(1+(fee/PERC_CNV));
        cout<<setprecision(2)<<fixed;
        cout<<"Year of membership "<<years;
        cout<<", Charges for the year $"<<charge<<endl;
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}
