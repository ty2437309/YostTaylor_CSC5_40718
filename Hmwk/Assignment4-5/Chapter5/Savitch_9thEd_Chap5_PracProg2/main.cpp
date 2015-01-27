/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 18:19
 * Purpose: Savitch Chapter 5 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float FTM=0.3048;
const float MTCM=100;
const float FTIN=12;
//Function Prototypes
float m_calc(float);
float cm_calc(float);
float calc_out(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ft, in, m, cm;
    char exit;
    do{
        cout<<"Input a length in Feet:"<<endl;
        cin>>ft;
        cout<<"Input a length in Inches:"<<endl;
        cin>>in;
        m = m_calc(ft);
        cm = cm_calc(in);
        calc_out(m, cm);
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float m_calc(float ft){
    return(ft*FTM);
}

float cm_calc(float in){
    //Declare Variables
    float temp_ft, temp_m;
    //Calculation
    temp_ft = in / FTIN;
    temp_m = temp_ft * 0.3048;
    return(temp_m*100);
}

float calc_out(float m, float cm){
    cout<<"Feet to Meters: "<<m<<endl;
    cout<<"Inches to Centimeters: "<<cm<<endl;
}