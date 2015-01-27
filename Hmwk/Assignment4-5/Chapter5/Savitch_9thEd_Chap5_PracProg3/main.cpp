/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 19:09
 * Purpose: Savitch Chapter 5 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float MTF=1.0/0.3048;
const float CMTM=1.0/100;
const float INFT=12.0/1;
//Function Prototypes
float ft_calc(float);
float in_calc(float);
float calc_out_2(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ft, in, m, cm;
    char exit;
    do{
        cout<<"Input a length in Meters:"<<endl;
        cin>>m;
        cout<<"Input a length in Centimeters:"<<endl;
        cin>>cm;
        ft = ft_calc(m);
        in = in_calc(cm);
        calc_out_2(ft, in);
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float ft_calc(float m){
    return(m*MTF);
}

float in_calc(float cm){
    //Declare Variables
    float temp_m, temp_ft;
    //Calculation
    temp_m = cm * CMTM;
    temp_ft = temp_m * MTF;
    return(temp_ft*INFT);
}

float calc_out_2(float ft, float in){
    cout<<"Meters to Feet: "<<ft<<endl;
    cout<<"Centimeters to Inches: "<<in<<endl;
}