/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 22, 2015, 7:31 PM
 * Purpose: Lab Instruction
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float avg, min, max, input;
    cout<<"What is Judge #1's score?"<<endl;
    cin>>input;
    avg=max=min=input;
    for(int readin=2;readin<=5;readin++){
        cout<<"What is Judge #"<<readin<<"'s score?"<<endl;
        cin>>input;
        if(max<input)max=input;
        if(min>input)min=input;
        avg+=input;
    }
    avg=(avg-min-max)/3;
    cout<<"The average = "<<avg<<endl;
    return 0;
}