/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 6, 2014, 10:11 AM
 */
//Libraries
#include<ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//Global constants

//function prototypes
int** filAray(int,int);
void prntAray(int**, int,int,int);
void destroy(int **,int);
int** add(int **,int **,int,int);
int** sub(int **,int **,int,int);
int** mult(int **,int **,int,int);
//execution begins here
int main(int argc, char** argv){
    //Declare Variables
    int rows, cols;
    srand(static_cast<unsigned int>(time(0)));
    //prompt input
    cout<<"How large of an integer 2 D Array?\n"
        <<"input rows and columns\n";
    cin>>rows>>cols;
    //fill array
    int **array=filAray(rows,cols);
    int **brray=filAray(rows,cols);
    //output
    cout<<"A\n";
    prntAray(array,rows,cols,4);
    cout<<"B\n";
    prntAray(brray,rows,cols,4);
    //add
    int** crray=add(array,brray,rows,cols);
    //cout<<"ADD\n";
    //prntAray(crray,rows,cols,4);
    //sub
    int** drray=sub(array,brray,rows,cols);
    //cout<<"SUB\n";
   // prntAray(drray,rows,cols,4);
    //mult
    int** erray=mult(array,brray,rows,cols);
    cout<<"MULT\n";
    prntAray(erray,rows,cols,6);
    //Deallocate Memory
    destroy(array,rows);
    destroy(brray,rows);
    destroy(crray,rows);
    return 0;
}
int** mult(int**a,int **b,int rows,int cols){
        //create array for the add
    int**e=filAray(rows,cols);
    int**f=filAray(rows,cols);
    int**g=filAray(rows,cols);
    //Add 2 arrays 
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            for(int i=0;i<rows;i++){
             e[row][col]=a[row][col]*b[col][row];     
             f[row][col]=a[col][row]*b[row][col];
             g[row][col]=e[col][row]+f[col][row];
             
        }
      }
        
    }
    cout<<"E\n";
    prntAray(e,rows,cols,6);
    cout<<"f\n";
    prntAray(f,rows,cols,6);
    return g;
    
}
int** sub(int**a,int **b,int rows,int cols){
    //create array for the add
    int**d=filAray(rows,cols);
    //Add 2 arrays 
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            d[row][col]=a[row][col]- b[row][col];            
        }
        
    }
    return d;
}
int** add(int**a,int **b,int rows,int cols){
    //create array for the add
    int**c=filAray(rows,cols);
    //Add 2 arrays 
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            c[row][col]=a[row][col]+ b[row][col];            
        }
        
    }
    return c;
}
void destroy(int** a, int rows){
        for(int row=0;row<rows;row++){
        delete [] a[row];
        }        
        delete [] a;
}
void prntAray(int** a, int rows, int cols, int wide){
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            cout<<setw(wide)<<a[row][col];
        }
            cout<<endl;
    }
    cout<<endl;
}
int** filAray(int rows,int cols){
      //Declare and create array
    int **a=new int*[rows];
    for(int row=0;row<rows;row++){
        a[row]=new int[cols];        
    }
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
        a[row][col]=rand()%5+1;
        }
    }
return a;
}