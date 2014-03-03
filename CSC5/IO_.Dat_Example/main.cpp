/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 9, 2012, 11:45 AM
 * Example FileIO
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {    
    //Declare a file stream object 
    ifstream in;
    //Open the file
    in.open("Example_Output.dat");
    //Input some information 
    int a;
    float b;
    double c; 
    in>>a;
    in>>b;
    in>>c;
    //Output the values contained in the file;
    cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;
    //Close the file
    in.close();    
    
    
    //Declare a file stream object
    ofstream out;
    //Open the file
    out.open("Example_Output.dat");
    //Output some information  
    cin>>a>>b>>c;  
    out<<a<<endl;
    out<<b<<endl;
    out<<c<<endl;
    out<<a<<" "<<b<<" "<<c<<endl;
    cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;
    //Close the file
    out.close();
   

    system("PAUSE");
    return 0;
}
