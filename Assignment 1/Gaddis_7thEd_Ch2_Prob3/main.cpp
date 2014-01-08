    /*
      David Ballantyne
      01/07/14
      Purpose: Gaddis_7thEd_Ch2_Prob3
    */
    //Libraries
    #include <cstdlib>
    #include <iostream>
     
    using namespace std;
     
    //Global Constants
     
    //Functioning Prototypes
     
    //Execution Begins Here
    int main(int argc, char **argv){
    //Variables
    float purchse, ttlTx, stateTx, cntyTx, total;
     
    //Process
    purchse= 52;
    stateTx= 0.04; //state tax
    cntyTx= 0.02; //county tax
    ttlTx= purchse*(stateTx + cntyTx); //total tax
    total = purchse+ttlTx;
     
    //output
    cout<<"the total tax on a $"<< purchse<<" is $"<<
    ttlTx<<endl;
    cout<<"which brings the total to $" << total<<endl;
     
    //Exit Stage Right
    system("PAUSE");
    return EXIT_SUCCESS;
    }
     
