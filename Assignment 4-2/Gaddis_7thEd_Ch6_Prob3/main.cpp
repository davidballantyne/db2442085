/*
 David Ballantyne
 01/27/14
 purpose:Gaddis_7thEd_Ch6_Prob3
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//Function Protoypes
float getSales(float);
void findHighest(float, float, float, float);
//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Varaibles
    float ne, se, nw, sw;
    cout<<"This program will determine which division has the "
		<<"highest quarterly sales.\n";
    cout<<"North West Division\n";
    ne=getSales(ne);
    cout<<"South East Division\n";
    se=getSales(se);
    cout<<"North West Division\n";
    nw=getSales(nw);
    cout<<"South West Division\n";
    sw=getSales(sw);
    
    findHighest(ne,se,nw,sw);
    system("PAUSE");
    return EXIT_SUCCESS;
}
float getSales(float sales){
      cout<<"Enter quarterly sales\n";
      cout<<"$";
      cin>>sales;
      if (sales<=0){
         cout<<"ERROR: please enter a value above $0.00 \n";
         cin>>sales;
         }
     return sales;
      }
void findHighest(float n1, float n2, float n3, float n4){
	float max=n1;
    if(n2>max)max=n2;
    if(n3>max)max=n3;
    if(n4>max)max=n4;
    cout<<setprecision(2)<<fixed<<showpoint;
    if(n1==max)cout<<"North East Division has the highest quarterly sales $"
	<<max<<endl;
    if(n2==max)cout<<"South East Division has the highest quarterly sales $"
	<<max<<endl;
    if(n3==max)cout<<"North West Division has the highest quarterly sales $"
	<<max<<endl;
    if(n4==max)cout<<"South West Division has the highest quarterly sales $"
	<<max<<endl;
    
   }
    
      
