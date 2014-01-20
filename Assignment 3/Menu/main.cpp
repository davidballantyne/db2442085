/* 
 David Ballantyne
 01/19/14
 purpose:Menu_Gaddis_7thEd_Ch4
*/
//Libraries
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants
const int CNV_FT_INCH= 12; //feet to inches conversion
const int DLR_VAL=100; //100 cents
const int H_VAL=50;//50 cents
const int Q_VAL=25;//25 cents
const int D_VAL=10;//10 cents
const int N_VAL=5; // 5 cents
const int P_VAL=1; // 1 cent
//Functioning Prototypes

//Execution
int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Gaddis 7th Edition Chapter 4\n";
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 4"<<endl;
        cout<<"Type 5 to solve problem 5"<<endl;
        cout<<"Type 6 to solve problem 6"<<endl;
        cout<<"Type 7 to solve problem 7"<<endl;
        cout<<"Type 8 to solve problem 8"<<endl;
        cout<<"Type 9 to solve problem 11"<<endl;
        cout<<"Type 10 to solve problem 23"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        int choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '1':{
                    int a, b, c, d;
                    //prompt user
					cout<<"Enter two numbers two find to find the larger and smaller number\n"
					<<"Make sure to seperate the numbers by a space\n";
					cin>>a>>b;
					//process
					c = (a>b) ? a : b;
					d=  (b>a) ? a: d;
	
					//output
  				  cout << c <<" is the larger number\n"
    			       << d <<" is the smaller number\n";
  				
                    break;
                }
                case '2':{
                    unsigned short number;
   					;
                    //prompt user to enter number
			    	cout<<"Enter any number between 1-100 to convert into "
			        <<"a Roman numeral\n";
			    	cin>>number;
			    
				    //number to numeral conversion
				    //I II III IV V VI VII VIII IX X 
				    //X XX XXX XL L LX LXX LXXX XC C
				    
			    
				    char numrl= number/10;//find out tens
				    switch(numrl){
				    case 10: cout<<"C";break;
				    case 9: cout<<"XC";break;
				    case 8: cout<<"LXXX";break;
				    case 7: cout<<"LXX";break;
				    case 6: cout<<"LX";break;
				    case 5: cout<<"L";break;
				    case 4: cout<<"XL";break;
				    case 3: cout<<"XXX";break;
				    case 2: cout<<"XX";break;
				    case 1: cout<<"X";break;
				         };
				    char numrl2= number/10;//find out ones
				         number-=numrl2*10;
				    switch(number){
				    case 9: cout<<"IX";break;
				    case 8: cout<<"VIII";break;
				    case 7: cout<<"VII";break;
				    case 6: cout<<"VI";break;
				    case 5: cout<<"V";break;
				    case 4: cout<<"IV";break;
				    case 3: cout<<"III";break;
				    case 2: cout<<"II";break;
				    case 1: cout<<"I";break;
			         };
                    break;
                }
                case '3':{
                    short int month, day, year;
    				
                    cout<<"Enter a date to find out if it's special (ex: 06/10/60)\n"
			        <<"Enter month date and year in a two digit format\n"
			        <<"Please seperate entries with spaces\n";
				    cin>>month>>day>>year;
				    
				    //Finding out if the date is special or not
				    year==month*day ?
				    cout<<month<<"/"<<day<<"/"<<year<<" is a magic date!\n" :
				    cout<<month<<"/"<<day<<"/"<<year<<" is not magic date..\n";
                    break;
                }
                case '4':{
                    float l1, l2, w1,w2,a1,a2;
				    cout<<"Enter the length and with for your first rectangle\n";
				    cin>>l1>>w1;
				    cout<<"Enter the length and with for your second rectangle\n";
				    cin>>l2>>w2;
				    //process
				    a1=l1*w1;
				    a2=l2*w2;
				    if (a1>a2){
		            cout<<"The first rectangle is larger with an area of "<<a1<<endl;
		            cout<<"The second rectangle is smaller with an area of "<<a2<<endl;
      			    }
				    else if (a2>a2){
    
            	    cout<<"The second rectangle is larger with an area of "<<a2<<endl;
        		    cout<<"The first rectangle is smaller with an area of "<<a1<<endl;
        			}
        			else if (a1==a2){
                	cout<<"Both rectangles have the same area of "<<a1<<endl;
       				}
                    break;
                }
                case '5':{
                    float weight, height, bmi;
				    cout<<"Calculate your Body Mass Index to determine if you are over or under weight\n";
				    cout<<"Enter the your weight (in pounds) and height (in feet) seperate with a space\n";
				    cin>>weight>>height;
				    
				    //process
				    height*=CNV_FT_INCH;
				    bmi= weight* (703/(height*height));
				    
				    
				    if (bmi>18.5 && bmi<25){
				            cout<<"You are in optimal weight!"<<endl;
				    }
				    else if (bmi>25){
				    
				                cout<<"You are overweight! "<<endl;
				    }
				        else if (bmi<18.5){
				                cout<<"You are underweight! "<<endl;
				    }
                    break;
                }
                case '6':{
                    float weight, mass;
				    cout<<"Calculate an objects weight in newtons by entering the objects mass (in kilograms)\n";
				    cin>>mass;
				    
				    //process
				    weight=mass*9.8;
				    
				    
				    if (weight> 10 && weight<1000){
				            cout<<"The weight of your object is "<<weight<<" newtons\n";
				    }
				    else if (weight>1000){
				    
				                cout<<"Your object is too heavy!"<<endl;
				    }
				    else if (weight<10){
				            cout<<"Your object is too light! "<<endl;
				    }
                    break;
                }
                case '7':{
                    int seconds, min, hours, days, temp, temp2, temp3;
				    cout<<"Enter any number of seconds to calculate days hours min or sec";
				    cin>>seconds;
				    
				    temp=seconds;
				    min=seconds;
				    min/=60;
				    hours=seconds;
				    hours/=3600;
				    days=seconds;
				    days/=86400;
				    
				    if (seconds>= 60 && min<=60){
				               temp= seconds/60;
				        seconds-=temp*60;
				        cout<<"There are "<<min<<" minutes & "<<seconds<<" seconds\n";
				    }
				    
				    else if (seconds>3600 && hours<=24){
				            temp= seconds/60;
				        seconds-=temp*60;
				        temp2=min/60;
				        min-=temp2*60;
				        cout<<"There are "<<hours<<" hours "<<min<<" minutes & "<<seconds<<" seconds\n";
				    }
				        else if (seconds>86400){
				                temp= seconds/60;
				        seconds-=temp*60;
				        temp2=min/60;
				        min-=temp2*60;
				        temp3=hours/24;
				        hours-=temp3*24;
				        cout<<"There are "<<days<<" days "<<hours<<" hours "<<min<<" minutes & "<<seconds<<" seconds\n";
				        }
				        else (seconds<60);{
				                cout<<"There are "<<seconds<<" seconds\n";
				        }
                    break;
                }
                case '8':{
                    float price,amtTend;
			        //What is the price of the item
			        cout<<"What is the price of the item ($'s)?"<<endl;
			        cin>>price;
			        //How much was received
			        do{
			             cout<<"What was received/tendered ($'s)?"<<endl;
			             cout<<"Has to be greater than the price"<<endl;
			             cin>>amtTend;
			        }while(amtTend<price);
			        //Convert to pennies
			        int nPrice=price*DLR_VAL;
			        int mtTend=amtTend*DLR_VAL;
			        int change=mtTend-nPrice;
			        //Calculate how many Half Dollars
			        int nHalf=change/H_VAL;
			        cout<<"Half Dollars -> "<<nHalf<<endl;
			        change-=nHalf*H_VAL;
			        //Calculate how many Quarters
			        int nQuart=change/Q_VAL;
			        cout<<"Quarters -> "<<nQuart<<endl;
			        change-=nQuart*Q_VAL;
			        //Calculate how many Dimes
			        int nDimes=change/D_VAL;
			        cout<<"Dime -> "<<nDimes<<endl;
			        change-=nDimes*D_VAL;
                    break;
                }
                case '9':{
                    short int books, points;
				    cout<<"Enter how many number of books you've bought this month to calculate\n"
				            <<"your total reward points\n";
				    cin>>books;
				    
				     
				    if (books>=4){
				               points=60;
				        cout<<"You have a total of "<<points<<" reward points\n";
				    }
				    
				    else if (books==1){
				            points=5;
				        cout<<"You have a total of "<<points<<" reward points\n";
				    }
				        else if (books==2){
				                points=15;
				        cout<<"You have a total of "<<points<<" reward points\n";
				        }
				        else if (books==3){
				                points=30;
				        cout<<"You have a total of "<<points<<" reward points\n";
				        }
				        else if (books<1){
				                points=0;
				                cout<<"You have a total of "<<points<<" reward points\n";
				        }
                    break;
                }
                case 10 :{
                    char pack;
					int hours;
					float due;
					cout<<"Please choose one monthly internet subscription package: a, b, or c\n";
					cin>>pack;
					cout<<"Enter how many hours were that month used\n";
					cin>>hours;
					
					//process 
					cout<<setprecision(2)<<fixed<<showpoint;
					switch (pack){
						
						case 'a':
							if (hours>=10 && hours<=744){
								hours=(hours-10)*2;
								due=hours;
								due+=9.95;
								cout<<"The amount due is $"<<due<<endl;
							}
							else if (hours>=744){
								    cout<<"ERROR: a month cannot exceed 744 hours\n";
							}
							else if ( hours<=10){
							    due=9.95;
								cout<<"The amount due is $"<<due<<endl;
							}
							break;
						case 'b':
							if (hours>20 && hours<744){
								hours=(hours-20);
								due=hours;
								due+=14.95;
								cout<<"The amount due is $"<<due<<endl;
							}
							else if (hours>=744){
								cout<<"ERROR: a month cannot exceed 744 hours\n";
							}
							else if (hours<=20){
								due=14.95;
								cout<<"The amount due is $"<<due<<endl;
							}
							break;
						case 'c':
							
							if (hours>=744){
								cout<<"ERROR: a month cannot exceed 744 hours\n";
							}
							else if (hours<744){
								due=19.95;
								cout<<"The amount due is $"<<due<<endl;
							
							}
							break;
						}
                        break;
                }
        };
    }while(loop);//Upper do-while
    return 0;
}


