/* 
 * David Ballantyne 
 * Created on January 9, 2014, 7:48 AM
 * purpose: Gaddis_7thEd_Ch2_Prob13
 */
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants 

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Variables
    float profit, cBoard, total;
    
    //process
    profit= 1.4e0; // .40% profit
    cBoard= 12.67e0; //circuit board price
    total= (cBoard * profit)+ 0.005; // sales price
    
    //Output
    cout<<setprecision(2)<<fixed<<showpoint; 
    cout<<" An electronic company sells"<<
          " circuit boards at 40% profit"<<endl<<
          " the selling price of a circuit"<<
          " board costing $"<< cBoard<< " is $"<< 
            total<< " retail"<< endl;
    
    //Exit Stage Right
    return 0;
}

