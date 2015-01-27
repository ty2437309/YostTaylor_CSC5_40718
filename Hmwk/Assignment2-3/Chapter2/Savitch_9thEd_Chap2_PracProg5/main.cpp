/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 19, 2015, 9:33 PM
 * Purpose: Assignment 2 Homework
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float PI=3.14159;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double radius, vm;//Book makes you use a double! Take pity on me XD
    //Prompt User
    cout<<"Enter radius of a sphere:"<<endl;
    cin>>radius;
    //Calculate
    vm=(4.0/3.0)*PI*radius*radius*radius;
    //Return Result
    cout<<"The volume is "<<vm<<endl;
    //Exit Stage Right!
    return 0;
}