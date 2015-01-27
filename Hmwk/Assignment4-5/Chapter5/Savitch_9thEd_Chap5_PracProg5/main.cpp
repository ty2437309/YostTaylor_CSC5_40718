/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 21:27
 * Purpose: Savitch Chapter 5 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float LBKG=1.0/2.2046;
const float GKG=1000;
const float OZLB=1.0/16.0;
//Function Prototypes
float kg_calc(float);
float g_calc(float);
float calc_out_1(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float lbs, oz, kg, g;
    char exit;
    do{
        cout<<"Input a weight in Pounds:"<<endl;
        cin>>lbs;
        cout<<"Input a weight in Ounces:"<<endl;
        cin>>oz;
        kg = kg_calc(lbs);
        g = g_calc(oz);
        calc_out_1(kg, g);
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float kg_calc(float lbs){
    return(lbs*LBKG);
}

float g_calc(float oz){
    //Declare Variables
    float temp_lbs, temp_kg;
    //Calculation
    temp_lbs = oz * OZLB;
    temp_kg = temp_lbs * LBKG;
    return(temp_kg*GKG);
}

float calc_out_1(float kg, float g){
    cout<<"Pounds to Kilograms: "<<kg<<endl;
    cout<<"Ounces to Grams: "<<g<<endl;
}