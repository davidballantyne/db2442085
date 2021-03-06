/*
* Author: David Ballantyne
* purpose: Luhns Algorithm
* Created on February 24, 2014, 12:59 PM
*/
//libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//Global Constants

//Function Prototypes
int *filAray(int);
void prntAry(const int *,int);
int *cpy(const int *,int);
int *dubOther(int *, int);
int *ModNum(int *, int);
int sumNum(const int *, int, int);
void lastChk(const int *,int, int);
//Execution Begins Here
int main(int argc, char** argv){
    //Declare Variables
    const int SIZE=11;
    //rand number seed
    srand(static_cast<unsigned int>(time(0)));
    int *array=filAray(SIZE);
    int *brray=cpy(array,SIZE);
    int sum=0;
    //print
    prntAry(brray, SIZE);
    //double every other
    brray=dubOther(brray,SIZE);
    prntAry(brray, SIZE);
    brray=ModNum(brray,SIZE);
    prntAry(brray,SIZE);
    sum=sumNum(brray,SIZE,sum);
    cout<<"The sum of the numbers excluding the check number is "<<sum<<endl;
    lastChk(brray,SIZE,sum);   
    
    delete [] array;
    delete [] brray;
 return 0;
}
int *filAray(int n){
    //allocate dynamic memory
    int * a=new int[n];
    for(int i=0;i<n;i++){
     *(a+i)=rand()%9+1;
    }
  return a;
}
void prntAry(const int *a,int n){
    //output array
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}
int *cpy(const int *a,int n){
    //copy arrray to brray
    int * b=new int [n];
    for(int i=0;i<n;i++){
       *(b+i)=*(a+i);
    }
  return b;
}
int *dubOther(int * a, int n){
    //double positon 1,3,5,7,9;
    for(int i=1;i<n;i++){	
        a[i]*=2;
        i++;
        }
  return a;
}
int *ModNum(int * a, int n){
    for(int i=0;i<n;i++){
        if(a[i]>=10){	
           a[i]=(a[i]%10)+1;
        }
    }
  return a;
}
int sumNum(const int * a, int n,int sum){
    for(int i=0;i<n-1;i++){
    sum+=a[i];
    }
  return sum;
}
void lastChk(const int *a,int n, int sum){
    sum=sum*9;
    cout<<"sum * 9 = "<<sum<<endl;
    cout<<sum<<" %10";
    sum=sum%10;
    cout<<" = "<<sum<<endl;
    if(sum==*(a+n-1))cout<<"Your credit card number is valid, check digit! "<<sum<<endl;
    else cout<<"Your credit card number is invalid, your digit "<<sum
             <<"\nRequired check digit "<<*(a+n-1)<<endl;    
}
