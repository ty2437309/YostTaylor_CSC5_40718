/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 12:37
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
float car_1(float, float);
float car_2(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int effi;
    float liters_1, miles_1, mpg_1; //Car 1
    float liters_2, miles_2, mpg_2; //Car 2
    char exit;
    do{
        //Prompt User
        cout<<"Enter the amount of gasoline consumed by the first car:"<<endl;
        cout<<"Units are to be in Liters."<<endl;
        cin>>liters_1;
        cout<<"Enter the distance traveled by the first car:"<<endl;
        cout<<"Units are to be in Miles."<<endl;
        cin>>miles_1;
        cout<<"Enter the amount of gasoline consumed by the second car:"<<endl;
        cout<<"Units are to be in Liters."<<endl;
        cin>>liters_2;
        cout<<"Enter the distance traveled by the second car:"<<endl;
        cout<<"Units are to be in Miles."<<endl;
        cin>>miles_2;
        //Function Call
        mpg_1 = car_1(liters_1, miles_1);
        mpg_2 = car_2(liters_2, miles_2);
        //Efficiency Calculation
        if(mpg_1>mpg_2){effi=1;}
        else{effi=2;}
        //Return Result
        cout<<"In "<<miles_1<<" (Miles), the first car consumed "<<liters_1<<" (Liters)."<<endl;
        cout<<"And it travels "<<mpg_1<<" mpg."<<endl;
        cout<<"In "<<miles_2<<" (Miles), the second car consumed "<<liters_2<<" (Liters)."<<endl;
        cout<<"And it travels "<<mpg_2<<" mpg."<<endl;
        cout<<"--------------------------------------------"<<endl;
        cout<<"Car "<<effi<<" has the best fuel efficiency."<<endl;
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float car_1(float liters_1, float miles_1){
    //Declare Variables
    float gal;
    //Calculation
    gal=liters_1*LTG;
    return (miles_1/gal);
}

float car_2(float liters_2, float miles_2){
    //Declare Variables
    float gal;
    //Calculation
    gal=liters_2*LTG;
    return (miles_2/gal);
}