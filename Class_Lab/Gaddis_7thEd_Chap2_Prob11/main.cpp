/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 20:11
 * Purpose: Lab Instruction
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
    float gasTank = 20;
    float inTown = 21.5;
    float onHway = 26.8;
    //Calculation
    float disTown = gasTank * inTown;
    float disHway = gasTank * onHway;
    //Output Results
    cout<<"Distance in Town on a tank of gas = ";
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance on Highway with a tank of gas = ";
    cout<<disHway<<"(miles)"<<endl;
    //Exit stage right!
    return 0;
}