/* 
 David Ballantyne      
 01/21/14
 purpose: calling a function
 */
//libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Global Constants

//function prototypes
float fv1(float,float,int);
float fv2(float,float,int);
float fv3(float,float,int);
float fv4(float,float,int);
float fv5(float,float,int);

//execution begins here
int main(int argc, char** argv){
    //Declare Variables
    float prin, interest;
    int periods;
    //read in variables
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Principal= $'s\n";
    cin>>prin;
    cout<<"Interest in%years\n";
    cin>>interest;
    cout<<"Number of compunding periods (yrs)\n";
    cin>>periods;
    cout<<"Future value #1 = $"<<fv1(prin,interest,periods)<<endl;
    cout<<"Future value #2 = $"<<fv2(prin,interest,periods)<<endl;
    cout << "Future value #3 = $" << fv3(prin, interest, periods)<< endl;
    cout << "Future value #4 = $" << fv4(prin, interest, periods)<< endl;
    cout << "Future value #5 = $" << fv5(prin, interest, periods)<< endl;
    return 0;
}
//future value function
//pv=present value
//iRate=interest rate
//n=number of compunding periods (yrs)
//output
//      future value in $'s
float fv1(float pv,float iRate,int n){
    float save=pv;
    for(int years=1; years<=n; years++){
        save*=(1+iRate/100);    
    }
return save;
}
//future value function
//pv=present value
//iRate=interest rate
//n=number of compunding periods (yrs)
//output
//      future value in $'s
float fv2(float pv,float iRate,int n){
    return pv*pow(1+iRate/100.0,n);
}
//future value function
//pv=present value
//iRate=interest rate
//n=number of compunding periods (yrs)
//output
//      future value in $'s
float fv3(float pv,float iRate,int n){
    return pv*exp(n*log(1+iRate/100.0));
}
//future value function
//pv=present value
//iRate=interest rate
//n=number of compunding periods (yrs)
//output
//      future value in $'s
float fv4(float pv,float iRate,int n){
    if (n==0)return pv;
    else return fv4(pv,iRate,n-1)*(1+iRate/100.0);

}
//future value function
//pv=present value
//iRate=interest rate
//n=number of compunding periods (yrs)
//output
//      future value in $'s
float fv5(float pv,float iRate,int n){
    float save=pv;
    for(int years=n; years>=1; years--){
        save*=(1+iRate/100);    
    }
return save;
}