/*
 David Ballantyne
 02/15/14
 purpose: FINAL problem 5
*/
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
void sort(string array[], int len);
void print(string array[], int len);
int main() {
    int rows=0;
    char filename[30];
    string words[100];
    ifstream in;
	   
    in.open("input.dat");

    while (getline(in,words[rows])) {
    rows++;
    }
    //print original array
    print(words,rows);
    sort(words,rows);
    //print sorted array
    cout<<endl<<endl;
    print(words,rows);
    in.close();
    return 0;
    }
void sort(string array[], int len) {
    int i, j;
    string check;
    for(i=1; i<len; i++) {
    check = array[i];
	    for(j=i; j>=1 && (check < array[j-1]); j--) {
	    array[j] = array[j-1];
	    array[j-1] = check;
    	}
    }
}
void print(string array[], int len) {
	    for(int i=0; i<len; i++) {
	    cout << array[i] << endl;
    	}
    }
