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
const float FTM=0.3048;
const float MTCM=100;
const float FTIN=12;
const float MTF=1.0/0.3048;
const float CMTM=1.0/100;
const float INFT=12.0/1;
//Function Prototypes
float ft_in_m_cm();
float m_cm_ft_in();
float m_calc(float);
float cm_calc(float);
float calc_out_1(float, float);
float ft_calc(float);
float in_calc(float);
float calc_out_2(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char exit;
    int choice;
    //Begin Loop
    do{
        cout<<"Do you want to convert from..."<<endl;
        cout<<"1 - Feet/Inches to Meters/Centimeters?"<<endl;
        cout<<"2 - Meters/Centimeters to Feet/Inches?"<<endl;
        cout<<"Respond with the number of your choice:"<<endl;
        cin>>choice;
        if (choice==1)
        {
            ft_in_m_cm();
        }
        else
        {
            m_cm_ft_in();
        }    
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float ft_in_m_cm(){
    float ft, in, m, cm;
    cout<<"Input a length in Feet:"<<endl;
    cin>>ft;
    cout<<"Input a length in Inches:"<<endl;
    cin>>in;
    m = m_calc(ft);
    cm = cm_calc(in);
    calc_out_1(m, cm);
}


float m_cm_ft_in(){
    float ft, in, m, cm;
    cout<<"Input a length in Meters:"<<endl;
    cin>>m;
    cout<<"Input a length in Centimeters:"<<endl;
    cin>>cm;
    ft = ft_calc(m);
    in = in_calc(cm);
    calc_out_2(ft, in);
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

float calc_out_1(float m, float cm){
    cout<<"Feet to Meters: "<<m<<endl;
    cout<<"Inches to Centimeters: "<<cm<<endl;
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