/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 08:56
 * Purpose: Chapter 1 Programming Projects Homework (Savitch 9th)
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int QTC = 25;
const int DTC = 10;
const int NTC = 5;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int q, d, n, c;
    //Prompt User
    cout<<"This program will calculate the amount \n";
    cout<<"of Cents when given a value of Quarters, \n";
    cout<<"Dimes, and Nickels. \n";
    cout<<"Please type a value, then press Enter."<<endl;
    cout<<"Enter amount of Quarter(s): \n";
    cin>> q;
    cout<<"Enter amount of Dime(s): \n";
    cin>> d;
    cout<<"Enter amount of Nickel(s): \n";
    cin>> n;
    //Calculate
    c = (q*QTC)+(d*DTC)+(n*NTC);
    //Return Result
    cout<<"If you have "<<q<<" Quarter(s) "<<d<<" Dime(s) \n";
    cout<<"and "<<n<<" Nickel(s), they equal: "<<c<<" Cent(s)"<<endl;
    //Exit stage right!
    return 0;
}