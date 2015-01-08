/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 09:36
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
    char C;
    //Prompt User
    cout<<"Please input a character to be drawn: \n";
    cin>> C;
    //Display Image
    cout<<"           "<<C<<" "<<C<<" "<<C<<endl;
    cout<<"         "<<C<<"       "<<C<<endl;
    cout<<"        "<<C<<endl;
    cout<<"       "<<C<<endl;
    cout<<"       "<<C<<endl;
    cout<<"       "<<C<<endl;
    cout<<"        "<<C<<endl;
    cout<<"         "<<C<<"       "<<C<<endl;
    cout<<"           "<<C<<" "<<C<<" "<<C<<endl;
    cout<<"Complete!";
    //Exit stage right!
    return 0;
}