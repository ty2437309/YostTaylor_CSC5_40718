/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 12:28
 * Purpose: Savitch Chapter 4 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float LTG=0.264179; //Liter = 0.264179 Gallon
//Function Prototypes
float calculation(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float liters, miles, mpg;
    char exit;
    do{
        //Prompt User
        cout<<"Enter the amount of gasoline consumed by your car:"<<endl;
        cout<<"Units are to be in Liters."<<endl;
        cin>>liters;
        cout<<"Enter the distance traveled by the car:"<<endl;
        cout<<"Units are to be in Miles."<<endl;
        cin>>miles;
        //Function Call
        mpg = calculation(liters, miles);
        //Return Result
        cout<<"In "<<miles<<" (Miles), your car consumed "<<liters<<" (Liters)."<<endl;
        cout<<"Your car travels "<<mpg<<" mpg."<<endl;
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float calculation(float liters, float miles){
    //Declare Variables
    float gal;
    //Calculation
    gal=liters*LTG;
    return (miles/gal);
}