/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 09:52
 * Purpose: Chapter 1 Programming Projects Homework (Savitch 9th)
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G = 32; //(ft/s)
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float s, d;
    //Prompt User
    cout<<"This program calculates the distance an object \n";
    cout<<"would fall in a vacuum given a specific time. \n";
    cout<<"Please enter a time in seconds: "<<endl;
    cin>> s;
    //Calculate
    d = (G * s * s)/2;
    //Return Result
    cout<<"In a vacuum, an object would travel "<<d<<" ft. \n";
    cout<<"if it fell for "<<s<<" seconds."<<endl;
    //Exit stage right!
    return 0;
}