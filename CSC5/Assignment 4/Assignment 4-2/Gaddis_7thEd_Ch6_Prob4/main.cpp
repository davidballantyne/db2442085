/*
 David Ballantyne
 01/27/14
 purpose:Gaddis_7thEd_Ch6_Prob4
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//Function Protoypes
int getNumAccidents(int);
void findLowest(int, int, int, int);
//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Varaibles
    int n, s, e, w;
    cout<<"This program will determine which region has the "
		<<"lowest car accidents annually.\n";
    cout<<"North region\n";
    n=getNumAccidents(n);
    cout<<"South region\n";
    s=getNumAccidents(s);
    cout<<"East region\n";
    e=getNumAccidents(e);
    cout<<"West region\n";
    w=getNumAccidents(w);
    
    findLowest(n,s,e,w);
    system("PAUSE");
    return EXIT_SUCCESS;
}
int getNumAccidents(int crashes){
      cout<<"Enter car accidents sales\n";
      cin>>crashes;
      do{      
      if (crashes<=0){
         cout<<"ERROR: please enter a number higher than 0 \n";
         cin>>crashes;
         }
      }while(crashes<=0);
     return crashes;
      }
void findLowest(int n1, int n2, int n3, int n4){
	int min=n1;
    if(n2<min)min=n2;
    if(n3<min)min=n3;
    if(n4<min)min=n4;
    if(n1==min)cout<<"North region has the lowest car accidents totaling "
	<<min<<" accidents"<<endl;
    if(n2==min)cout<<"South region has the lowest car accidents totaling "
	<<min<<" accidents"<<endl;
    if(n3==min)cout<<"East region has the lowest car accidents totaling "
	<<min<<" accidents"<<endl;
    if(n4==min)cout<<"West region has the lowest car accidents totaling "
	<<min<<" accidents"<<endl;
    
   }
    
