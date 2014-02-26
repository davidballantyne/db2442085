/* 
 * Author: David Ballantyne
 * purpose: search and sort examples
 * Created on February 24, 2014, 12:59 PM
 */
//libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//Global Constants

//Function Prototypes
void filAray(int *,int);
void prntAry(const int *,int,int);
void cpy(const int *,int *,int);
void mrkSort(int *,int n);
void swap(int &, int &);
bool findVal(int *,int,int);
//Execution Begins Here
int main(int argc, char** argv){
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int brray[SIZE];
    //set random seed
    srand(static_cast<unsigned int>(time(0)));
    //fill array
    filAray(array,SIZE);
    //copy
    cpy(array,brray,SIZE);
    //print array
    prntAry(brray,SIZE,10);
    //sort 
    mrkSort(brray,SIZE);
    //print
    prntAry(brray,SIZE,10);
    //pick a random number to find
    int val=rand()%90+10;
    cout<<"The value to find in the array equals = "<<val<<endl;
    if(findVal(array,SIZE,val))cout<<"Value found in array!\n";
    else cout<<"Value is not found in the array\n";
    //Exit Stage Right
    return 0;
}
bool findVal(int *a,int n,int val){
    for(int i=0;i<n;i++){
        if(*(a+i)==val) return true;     
        
    }
   
    return false;
}
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
void mrkSort(int *a,int n){
    //find minimum position
    for(int i=0;i<n-1;i++){
        //swaps the larger values
        for(int j=i+1;j<n;j++){
            //check for swap
            if(*(a+i)>*(a+j)) swap(*(a+i),*(a+j));            
        }
    }    
}
void cpy(const int *a,int *b,int n){
    //copy arrray to brray
    if(n<=1)n=2;
    for(int i=0;i<n;i++){
       *(b+i)=*(a+i);
    }
}
void prntAry(const int *a,int n,int perLine){
    //output array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
//2 digit random
void filAray(int *a,int n){
    //check size array
    if(n<=1)n=2;
    for(int i=0;i<n;i++){
     *(a+i)=rand()%90+10;
    }
}