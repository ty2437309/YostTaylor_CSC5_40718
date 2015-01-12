/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 08:01
 * Purpose: Chapter 1 Programming Projects Homework (Savitch 9th)
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int a, b, c, d;
    //Prompt User
    cout<<"This program will display both the sum \n";
    cout<<"and the product of two numbers. \n";
    cout<<"After inputting an integer, press enter."<<endl;
    cout<<"Enter first integer: \n";
    cin>> a;
    cout<<"Enter second integer: \n";
    cin>> b;
    //Calculate
    c = a + b;
    d = a * b;
    //Return Result
    cout<<"Result of "<<a<<" + "<<b<<" = "<<c<<endl;
    cout<<"Result of "<<a<<" * "<<b<<" = "<<d;
    //Exit stage right!
    return 0;
}