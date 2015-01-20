/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 13, 2015, 20:48
 * Purpose: Assignment 2 Homework
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int CNVHRMN = 60; //Hrs to Mins
const int CNVMNSC = 60; //Mins to Sec
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mph;
    float hpm; //Pace as Hrs per Mile
    float fmpm; //float Mile per Min
    int impm; //int Mile per Min
    float fmspm; //Fraction - Sec per Min
    //Prompt User
    cout<<"What is your speed in Miles per Hour?"<<endl;
    cin>> mph;
    //Calculate Pace
    hpm = 1 / mph;
    fmpm = hpm * CNVHRMN;
    impm = static_cast<int> (fmpm);
    fmspm = (fmpm - impm) * CNVMNSC;
    //Output Results
    cout<<mph<<" (mph) = ";
    cout<<impm<<" (mins) ";
    cout<<fmspm<<" (secs) per mile."<<endl;
    //Exit Stage Right!    
    return 0;
}