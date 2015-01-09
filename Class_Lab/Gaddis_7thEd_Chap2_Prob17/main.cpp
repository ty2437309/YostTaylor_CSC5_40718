/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 19:23 PM
 * Purpose: Lab Instruction
 */

#include <iostream>
#include <iomanip>
using namespace std;
const char CONVPCT=100;
/*
 * 
 */
int main(int argc, char** argv) {
    float skPrice=2.177e1f;
    unsigned short nShares=600;
    char comish=2;
    float slPrice=nShares*skPrice;
    float cmPrice=slPrice*comish/CONVPCT;
    float totPaid=slPrice+cmPrice;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Sales Price = $"<<setw(8)<<slPrice<<endl;
    cout<<"Commission  = $"<<setw(8)<<cmPrice<<endl;
    cout<<"Total Paid  = $"<<setw(8)<<totPaid<<endl;
    return 0;
}

