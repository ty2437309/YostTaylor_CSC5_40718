/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 13, 2015, 20:48
 */

#include <iostream>

using namespace std;
//Global Constants
const int CNVHRMN = 60; //Hrs to Mns
const int CNVMNSC = 60; //Mns to Sec

int main(int argc, char** argv) {
    //Declare Variables
    float mph;
    float hpm; //Pace as Hrs per Mi
    float fmpm; //float Mi per Min
    int impm; //int Mi per Min
    float fmspm; //Fraction left over in Sec per Min
    //Prompt User
    cout<<"How many miles are you running"<<endl;
    cout<<"in an hour?"<<endl;
    cout<<"Format answer as a float."<<endl;
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