/*
* File: main.cpp
* Author: Dr. Mark E. Lehr
* Created on February 3, 2014, 8:13 AM
*/

//System Libraries
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void filVec(vector<int> &,int);
void filVec2(vector<int> &,int);
void prntVec(const vector<int> &,int);



//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    int size, col;
    vector<int> array;
    vector<int> brray;
    srand(static_cast<unsigned int>(time(0)));
    cout<<"Input vector size\n";
    cin>>size;
    cout<<"Input how many columns\n";
    cin>>col;
    //Fill the arrays
    filVec(array,size);
    //Print the array
    filVec2(brray,size);
    prntVec(array,col);
    prntVec(brray,col);
    //Test out the min pos routine

    //Exit Stage Right!!!
    return 0;
}
void filVec2(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a.push_back((2*( rand() % 5 + 1 ))+1);
    }
}
void prntVec(const vector<int> &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filVec(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a.push_back(rand()%90+10);
    }
}
