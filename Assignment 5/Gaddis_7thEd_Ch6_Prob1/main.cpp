/*
 David Ballantyne
 01/26/14
 purpose:Gaddis_7thEd_Ch6_Prob1
*/
//Libraries
 #include <iostream>
 #include <cstdlib>
 #include <iomanip>
 using namespace std;
 
 //Global Constants
int CNV_PERC=100;//percentage conversion
 //Function Prototypes
 float calculateRetail(float, float);
//Execution Begins Here
int main(int argc, char** argv){
	//Declare Variables
	float cost, markup, retail;
	
	//Prompt
	cout<<"Enter an itme's whole sale value and markup "
		<<"percentage to determin retail price\n"
		<<"$";
	cin>>cost;
	cout<<"%";
	cin>>markup;
	
	retail=calculateRetail(cost,markup);
	cout<<setprecision(2)<<fixed;
	cout<<"The whole sale price of the item is $"<<cost<<endl;
	cout<<setprecision(0)<<fixed;
	cout<<"The markup percent was "<<markup<<"%\n";
	cout<<setprecision(2)<<fixed;
	cout<<"The retail price for the item is $"<<retail<<endl;
	//Exit Stage Right
	return 0;
}
 float calculateRetail(float whSale,float markup){
 	markup/=CNV_PERC;
 	markup=(markup*whSale)+whSale;
 	return markup; 	
 }
