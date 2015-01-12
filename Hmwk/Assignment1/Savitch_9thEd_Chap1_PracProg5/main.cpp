/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 18:23
 * Purpose: Chapter 1 Practice Programs Homework (Savitch 9th)
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
    float w, h, total_length;
    //Prompt User
    cout<<"This program will calculate the total length \n";
    cout<<"of fence needed to enclose a rectangular area. \n";
    cout<<"Press Enter after inputting a value. Values \n";
    cout<<"need to be in feet."<<endl;
    cout<<"What is the width of the area to be enclosed? \n";
    cin>> w;
    cout<<"What is the height of the area to be enclosed? \n";
    cin>> h;
    //Calculate
    total_length = (w * 2) + (h * 2);
    //Return Result
    cout<<"A total of "<<total_length<<" (ft.) is needed to \n";
    cout<<"enclose a rectangular area of "<<w<<" by "<<h<<" (ft.)."<<endl;
    //Exit stage right!
    return 0;
}