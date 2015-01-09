/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 19:40
 * Purpose: Lab Instruction
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const unsigned short CVFTACS=43560;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float inSqFt, outAcrs;
    //Prompt User
    cout<<"Input the number of square feet \n";
    cout<<"to convert to Acres:"<<endl;
    cin>> inSqFt;
    //Calculation
    outAcrs = inSqFt/CVFTACS;
    //Output Results
    cout<<inSqFt<<"(sq feet) = ";
    cout<<outAcrs<<"(acres)"<<endl;
    //Exit stage right!
    return 0;
}

