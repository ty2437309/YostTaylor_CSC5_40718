/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 15, 2015, 18:15
 * Purpose: Assignment 2 Homework
 */
//System Libraries
#include <cmath>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
float number, guess, r = 0;
int count = 0;
//Prompt User
cout<<"Input a number to estimate it's square root \n";
cin>> number;
//Make Calculation
guess = number / 2;
while((abs((r-guess)/r)>0.01)){
        r = number / guess;
        guess = (guess + r) / 2;
        count ++;
        cout<<"Loop "<<count<<" Calculation: "<<guess<<endl;
    }    
    return 0;
}