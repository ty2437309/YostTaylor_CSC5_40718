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
const float KGLB=2.2046;
const float GKG=1.0/1000;
const float LBOZ=16.0;
//Function Prototypes
float lbs_calc(float);
float oz_calc(float);
float calc_out_2(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float lbs, oz, kg, g;
    char exit;
    do{
        cout<<"Input a weight in Kilograms:"<<endl;
        cin>>kg;
        cout<<"Input a weight in Grams:"<<endl;
        cin>>g;
        lbs = lbs_calc(kg);
        oz = oz_calc(g);
        calc_out_2(lbs, oz);
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float lbs_calc(float kg){
    return(kg*KGLB);
}

float oz_calc(float g){
    //Declare Variables
    float temp_lbs, temp_kg;
    //Calculation
    temp_kg = g * GKG;
    temp_lbs = temp_kg * KGLB;
    return(temp_lbs*LBOZ);
}

float calc_out_2(float lbs, float oz){
    cout<<"Kilograms to Pounds: "<<lbs<<endl;
    cout<<"Grams to Ounces: "<<oz<<endl;
}