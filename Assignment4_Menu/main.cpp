//Dr. Mark E. Lehr
//January 14th, 2014
//Menu to be used for the midterm
//homework and final, etc....

//Library includes Here!!!
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

//Global Constants Here!!!
const int CNV_PERC=100;//percent conversion
const float CNV_LTR = 2.64179e-1; // 1 liter = 0.264179 gallon.
//Function Prototypes Here!!!
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void problem11();
void problem12();
void problem13();
void problem14();
void problem15();
void problem16();
void problem17();
void problem18();
void problem19();
void problem20();
//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;
        case 8:    problem8();break;
        case 9:    problem9();break;
        case 10:   problem10();break;
        case 11:   problem11();break;
        case 12:   problem12();break;
        case 13:   problem13();break;
        case 14:   problem14();break;
        case 15:   problem15();break;
        case 16:   problem16();break;
        case 17:   problem17();break;
        case 18:   problem18();break;
        case 19:   problem19();break;
        case 20:   problem20();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Midterm"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
    cout<<"Type 11 for problem 11"<<endl;
    cout<<"Type 12 for problem 12"<<endl;
    cout<<"Type 13 for problem 13"<<endl;
    cout<<"Type 14 for problem 14"<<endl;
    cout<<"Type 15 for problem 15"<<endl;
    cout<<"Type 16 for problem 16"<<endl;
    cout<<"Type 17 for problem 17"<<endl;
    cout<<"Type 18 for problem 18"<<endl;
    cout<<"Type 19 for problem 19"<<endl;
    cout<<"Type 20 for problem 20"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
        cout<<"Gaddis_7thEd_Ch5_Prob1"<<endl<<endl;
        //Declare Variables
        int value, total=0;
        
        //prompt user
        cout<<"Input a positive interger\n"
            <<"The program will sum all positive integers (1 - your value)\n";
        cin>>value;
        
        //process
        do{
                for(int i=1; i<=value; i++){
                total+=i;                
                cout<<"+ "<<i<<endl;
                }        
        }while(!value<0);
        cout<<"_____\n"
                <<total<<endl;

}

void problem2(){
        cout<<"Gaddis_7thEd_Ch5_Prob2"<<endl<<endl;
         char a;
        
        for (int i=0, j=0; i<=127; i++,j++){
                a= i;                
                cout<<a;
                if(j==16){
                        j=0;
                        cout<<endl;
                }
        }

}

void problem3(){
        cout<<"Gaddis_7thEd_Ch5_Prob3"<<endl<<endl;
        //Declare Variables
        float level=1.5;// ocean levels in millimeters
        
        //prompt
        cout<<"Ocean level Increase for the next 25 years\n";
        cout<<"Years Increase in mm's\n";
        cout<<"------------------------------------------\n";
        for (int i=1; i<=25; i++){
                cout<<i<<"\t\t\t"<<i*level<<endl;
        }

}

void problem4(){
        cout<<"Gaddis_7thEd_Ch5_Prob4"<<endl<<endl;
                //Declare Variables
        int min=0;//minutes
        float cal=3.9;//calories burned per minute
        
        for(int i=0; i<=30;i++){
                min=i;
                cout<<setprecision(1)<<fixed;                
                if(min==10){
                        cout<<"Calories burned after 10 min: "<<min*cal<<endl;
                        
                }
                if (min==15){
                        cout<<"Calories burned after 15 min: "<<min*cal<<endl;
                }
                if (min==20){
                        cout<<"Calories burned after 20 min: "<<min*cal<<endl;
                }
                if (min==25){
                        cout<<"Calories burned after 25 min: "<<min*cal<<endl;
                }
                if (min==30){
                        cout<<"Calories burned after 30 min: "<<min*cal<<endl;
                }
        }

}

void problem5(){
        cout<<"Gaddis_7thEd_Ch5_Prob5"<<endl<<endl;
        //Declare Varialbes
	    int years;
	    float fee=4, charge=2403.846;
	    //yr 1 charge = 2500
	    //2403.846* 1.04= 2500
	    
	    for(int i=1; i<=6; i++){
	        years=i;
	        charge*=(1+(fee/CNV_PERC));
	        cout<<setprecision(2)<<fixed;
	        cout<<"Year of membership "<<years;
	        cout<<", Charges for the year $"<<charge<<endl;
	        }

}

void problem6(){
        cout<<"Gaddis_7thEd_Ch5_Prob6"<<endl<<endl;
        //Declare Variables
        float distance, speed, time;
        char y;
        
        do{        
        //prompt
        cout<<"What is the speed of the vehicle in mph?";
        cin>>speed;
        cout<<"How many hours has it traveled?";
        cin>>time;
        
        //process
        distance= speed*time;
        
        
        if (speed<0 || distance<1){
                cout<<"ERROR: please try again (y/n)\n";
                
        }

        if (speed>0 && distance>1){
                cout<<"Hour\t\tDistance Traveled\n"
                <<"--------------------------------------\n";
                for(int i=1; i<=time;i++){
                
                cout<<i<<"\t\t"<<speed*i <<"\n";
                }
        }
                cout<<"would you like to run this program again (y/n))?\n";
                cin>>y;
        }while(y=='Y'||y=='y');

}

void problem7(){
        cout<<"Gaddis_7thEd_Ch5_Prob7"<<endl<<endl;
        //Declare Variables
        float pennys;
        int days;
        char a;
        cout<<fixed<<showpoint<<setprecision(2);
        do{
                cout<<"Your salary is a penny a day doubled\n"
                        <<"Ener how many days worked: \n";
                cin>>days;
                if (days<1){
                        cout<<"Error: please restart program (y/n)\n";
                }
                if(days>=1){
                        cout<<"Hour\t\tDistance Traveled\n"
                <<"--------------------------------------\n";
                }
                
                for(int i=1;i<=days;i++){
                pennys=(1e-2*pow(2,i))-1e-2;
                
                cout<<i<<"\t\t$"<<pennys<<endl;                
                }
                cout<<"Restart program? (y/n)\n";
                cin>>a;
        }while( a=='y');

}

void problem8(){
        cout<<"Gaddis_7thEd_Ch5_Prob12"<<endl<<endl;
         //Declare Variabes
	    short f,c=20;
	    
	        //output
	    cout<<"Celsius\t\tFahrenheit\n"
	        <<"--------------------------------------\n";
	    for(int i=0; i<=c;i++){
	    f= (9/5.0*i)+32;    
        cout<<i<<"\t\t"<<f<<endl;
        }
    //exit stage right        

}

void problem9(){
        cout<<"Gaddis_7thEd_Ch5_Prob20"<<endl<<endl;
        int rnd();//random number function

	    //Declare Variables
	    unsigned int seed=time(0);
	    int n, random;
	    char a;
	     //set the random number seed
	    srand(seed);
	    do{
	    random=rnd();
	        do{
	           //Prompt user;
	           
	           cout<<"*** Random Number Guessing Game *** \n"
	               <<" Guess a number between 1-10, \n"
	               <<" Enter your number below! \n";
	           cin>>n;
	           
	           //process
	             if(n<random){
	             cout<<" Too low, try again.\n";
	         
	             }else if(n>random){
	             cout<<" Too high, try again.\n";
	         
	             }else if(n==random){
	             cout<<random<<" Congradulations you win!.\n";
	             }
	        }while(n!=random);
	        cout<<"try again? (y/n)\n";
	        cin>>a;
	    }while(a=='y' || a=='Y');

}
int rnd(){
   int random=rand()%10+1;

}

void problem10(){
        cout<<"Gaddis_7thEd_Ch5_Prob22"<<endl<<endl;
                int num;
        char x='X',a;
        
        do{
                cout<<"Enter a number\n";
                cin>>num;
                if(num<0 || num>15){
                        cout<<"ERROR: please restart the program\n";
                }
                if(num>0 && num<=15){
                
                           for (int j=1; j<=num;j++){
                           for(int i=1; i<=num;i++){
                        cout<<x;
                        }
                        cout<<endl;
                }
        }
        cout<<"try again (y/n)\n";
        cin>>a;
        }while(a=='Y' || a=='y');


}

void problem11(){
        cout<<"Gaddis_7thEd_Ch6_Prob1"<<endl<<endl;
        float calculateRetail(float, float);
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

}
 float calculateRetail(float whSale,float markup){
         markup/=CNV_PERC;
         markup=(markup*whSale)+whSale;
         return markup;     
}

void problem12(){
        cout<<"Gaddis_7thEd_Ch6_Prob3"<<endl<<endl;
        float getSales(float);
		void findHighest(float, float, float, float);
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
void problem13(){
        cout<<"Gaddis_7thEd_Ch6_Prob4"<<endl<<endl;
        int getNumAccidents(int);
		void findLowest(int, int, int, int);
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

void problem14(){
        cout<<"Gaddis_7thEd_Ch6_Prob5"<<endl<<endl;
        float fallDist(float);
        //Declare Variables
        float dist1;
        
        //Prompt
        cout<<"Enter an objects falling time in seconds\n";
        //input
        cout<<"seconds: ";
        cin>>dist1;

        dist1=fallDist(dist1);
        //Output
        cout<<"The total distance dropped is "<<dist1<<" meters\n";
        
        //table
        cout<<"Seconds\t\tMeters Dropped\n"
         <<"--------------------------------------\n";
                 for(int i=1; i<=10;i++){
                 dist1=fallDist(i);
                 
         cout<<i<<"\t\t"<<dist1<<endl;
         }

}
float fallDist(float t){
        float dist, g=9.8e0;
        t*=t;
        dist=.5*g*t;
        
        return dist;
}
void problem15(){
        cout<<"Gaddis_7thEd_Ch6_Prob6"<<endl<<endl;
        float KinEn(float, float);//Kinetic Energy Function
        float m1, v1, ke;//mass * veloc
        
        //Prompt
        cout<<"Enter an objects mass in kilograms and velocity in meters per second\n"
                <<"to determine it's total kinetic energy\n";
        //input
        cout<<"mass: ";
        cin>>m1;
        cout<<"velocity: ";
        cin>>v1;
        ke=KinEn(m1,v1);
        //Output

        cout<<"The total kinetic energy of the object is "<<ke<<" Joules\n";
        
}
float KinEn(float m, float v){
        float k;
        v*=v;
        m*=0.5;
        k=v*m;
        return k;
}

void problem16(){
        cout<<"Gaddis_7thEd_Ch6_Prob7"<<endl<<endl;
        int celsius(int);
        //Declare variables
        int c1,f1;
        char a;
        //prompt
        cout<<"Enter a degree in Fahrenheit to convert to Celsius: ";
        cin>>f1;
        c1=celsius(f1);
        cout<<"Your degree in Fahrenheit is "<<f1<<endl
                <<"Your degree in Celsius is "<<c1<<endl;
        cout<<endl;
          cout<<endl;
        //output
        
    cout<<"Fahrenheit\t\tCelsius\n"
    <<"--------------------------------------\n";
            for(int i=0; i<=20;i++){
            c1=celsius(i);
            
        cout<<i<<"\t\t"<<c1<<endl;
        }
        
		}
		int celsius(int f){
		        int c;
		        c=5/9.0*(f-32);
		        return c;

}
void problem17(){
        cout<<":Gaddis_7thEd_Ch6_Prob8"<<endl<<endl;
        int rnd(int);//random number function
        unsigned int seed=time(0);
    int count1;
    //set the random number seed
    srand(seed);
        //prompt user
        cout<<"How many number of times would you like to flip a coin?\n";
        cin>>count1;
        //output
        count1=rnd(count1);
        cout<<"You flipped the coin "<<count1<<" times\n";

}
int rnd(int count){
        int random,i=1;
    do{
        random=rand()%2+1;
        i++;
        if(random==1)cout<<"Heads\n";
        if(random==2)cout<<"Tails\n";
        }while(i<=count);
        return count;
}

void problem18(){
        cout<<"Gaddis_7thEd_Ch6_Prob9"<<endl<<endl;
        float presentVal(float, float, int);
        //declare variables
        float pVal, fVal, irate;
        int n;
        cout<<"Savings account interest calculator\n";
        cout<<"Calcuate how much you need to deposit now to get your future value\n";
        cout<<"Enter Future Value: $";
        cin>>fVal;
        cout<<"Enter Annual Interest Rate: ";
        cin>>irate;
        cout<<"Enter Compunding Years: ";
        cin>>n;
        pVal=presentVal(fVal,irate,n);
        cout<<"Your desired amount is $"<<fVal<<" your interest rate is "<<irate
                <<"%\n"<<"and your total years are "<<n<<endl;
        cout<<"The present value you should deposit for your future value is $"
                <<pVal<<endl;
        

}
float presentVal(float f, float r, int n){
        float temp, p;
        r/=CNV_PERC;
        temp=pow(1+r,n);
        p=f/temp;
        return p;
}
void problem19(){
        cout<<"Gaddis_7thEd_Ch6_Prob21"<<endl<<endl;
        bool isPrime (unsigned int);
		void outPrime(unsigned int);
		int random(unsigned int, unsigned int);
		//Declare Variables
    unsigned int seed=time(0);
    //set seed
    srand(seed);
    //random num range
    int strt=100, stp=1000;
    int rnd=random(strt,stp);
    
    //output
    cout<<setw(5)<<fixed;
    cout<<"The random numbers up to "<<rnd<<" are \n";
    outPrime(rnd);

	}
	int random(unsigned int strt, unsigned int stp){
	     return rand()%(stp-strt+1)+strt;
	}
	void outPrime(unsigned int n){
		 bool isPrime (unsigned int);
	     cout<<endl;
	     for(int i=2,cnt;i<=n;i++){
	        if(isPrime(i))cout<<i<<" ";
	        }
	}
	bool isPrime(unsigned int n){
	    int loop=sqrt(n);
	    for(int i=2;i<=loop;i++){
	         if(n%i==0) return false;
	         }
	     return true;
	}

void problem20(){
        cout<<"Savitch_8thEd_Ch4_Prob1"<<endl<<endl;
		float compMpg(float,float);
		    //declare variables
		    float miles, liters;
		    char a;
		    //loop
		            do{
		            
		        //input
		        cout<<"Calculate the miles per gallon\n";
		        cout << "Enter miles driven: ";
		        cin >> miles;
		        cout << "Enter liters of fuel consumed: ";
		        cin >> liters;
		        //compute MPG, display output
		        cout << "Miles per gallon: " << compMpg(miles, liters) << endl;
		        //Check with user - are we done?
		        cout << "Restart program? (y/n)? ";
		        cin>>a;
		    }while(a=='y' || a=='Y');
		    
		}
		float compMpg(float dist, float liters) {
		    //Define local variable
		    float gal;
		    //Calculate MPG, return result
		    gal = liters*CNV_LTR;
		    return dist/ gal;
}
void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
