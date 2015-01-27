/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 22:41
 * Purpose: Savitch Chapter 5 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float LBKG=1.0/2.2046;
const float GKG_1=1000;
const float OZLB=1.0/16.0;
const float KGLB=2.2046;
const float GKG_2=1.0/1000;
const float LBOZ=16.0;
//Function Prototypes
float kg_calc(float);
float g_calc(float);
float calc_out_1(float, float);
float lbs_calc(float);
float oz_calc(float);
float calc_out_2(float, float);
float lbs_oz_kg_g();
float kg_g_lbs_oz();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char exit;
    int choice;
    //Begin Loop
    do{
        cout<<"Do you want to convert from..."<<endl;
        cout<<"1 - Pounds/Ounces to Kilograms/Grams?"<<endl;
        cout<<"2 - Kilograms/Grams to Pounds/Ounces?"<<endl;
        cout<<"Respond with the number of your choice:"<<endl;
        cin>>choice;
        if (choice==1)
        {
            lbs_oz_kg_g();
        }
        else
        {
            kg_g_lbs_oz();
        }    
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float lbs_oz_kg_g(){
    float lbs, oz, kg, g;
    cout<<"Input a weight in Pounds:"<<endl;
    cin>>lbs;
    cout<<"Input a weight in Ounces:"<<endl;
    cin>>oz;
    kg = kg_calc(lbs);
    g = g_calc(oz);
    calc_out_1(kg, g);
}

float kg_g_lbs_oz(){
    float lbs, oz, kg, g;
    cout<<"Input a weight in Kilograms:"<<endl;
    cin>>kg;
    cout<<"Input a weight in Grams:"<<endl;
    cin>>g;
    lbs = lbs_calc(kg);
    oz = oz_calc(g);
    calc_out_2(lbs, oz);
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
    return(temp_kg*GKG_1);
}

float calc_out_1(float kg, float g){
    cout<<"Pounds to Kilograms: "<<kg<<endl;
    cout<<"Ounces to Grams: "<<g<<endl;
}

float lbs_calc(float kg){
    return(kg*KGLB);
}

float oz_calc(float g){
    //Declare Variables
    float temp_lbs, temp_kg;
    //Calculation
    temp_kg = g * GKG_2;
    temp_lbs = temp_kg * KGLB;
    return(temp_lbs*LBOZ);
}

float calc_out_2(float lbs, float oz){
    cout<<"Kilograms to Pounds: "<<lbs<<endl;
    cout<<"Grams to Ounces: "<<oz<<endl;
}