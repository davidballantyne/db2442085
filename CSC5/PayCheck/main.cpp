/* 
 * David Ballantyne
 *Created on January 22, 2014, 10:19 AM
 * purpose:parameters
 */
//Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Constant
const unsigned short FULL_TIME=40;
//Function Prototypes
int   payCheck(float, short=FULL_TIME);
short drvHrs();
//Execution Begins here
int main(int argc, char** argv){
    //initialize rand number seed 
    srand(static_cast<unsigned int>(time(0)));
    //Initialize our loop
    int loop=100;
    float payRate=10.0f;
    for (int emp=1; emp<=loop;emp++){
        short hrsWrkd=drvHrs();
        int pay;
        if(hrsWrkd==FULL_TIME)pay=payCheck(payRate);
        else pay=payCheck(payRate,hrsWrkd);
        cout<<"EMP #"<<emp<<" hrs= "<<hrsWrkd
            <<" Paycheck= $"<<pay<<endl;
    }
    //exit tage right
    return 0;
}
short drvHrs(){
//90% of time 40 hours worked
    int Ptim=rand()%100+1;
    if(Ptim<=90) return 40;
    if(Ptim<=96) return rand()%40;
    return rand()%20+40;
}

int payCheck(float pyRate, short hrsWrkd){
    if (hrsWrkd<= FULL_TIME){
        return hrsWrkd*pyRate;
    }else{
         return FULL_TIME*pyRate+(1.5*pyRate)*(hrsWrkd-FULL_TIME);
    }
}