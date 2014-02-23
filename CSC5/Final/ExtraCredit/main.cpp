/*
 David Ballantyne
 02/15/14
 purpose:EXTRA CREDIT
*/

#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    int num1, num2, num, mod=0,temp=0, mod2=0, temp2=0, n1, n2;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number:"<<endl;
    cin>>num2;
    
    while(num1!=0) 
    { 
    mod=num1%10; 
    num1=num1/10; 
    temp=temp*10+mod;
    n1=temp;
    }
    
    while(num2!=0) 
    { 
    mod2=num2%10; 
    num2=num2/10; 
    temp2=temp2*10+mod2;
    n2=temp2;
    }
    
    cout<<endl;
 
    
    if(n1>n2){ 
        cout<<"The first number "<<n1<<" is greater than the second number "<<n2<<endl;
    }else if(n2>n1){
        cout<<"The second number "<<n2<<" is greater than the first number "<<n1<<endl;
    }else
        cout<<"The numbers are the same"<<endl;

    return 0;
}


