/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 13:22
 * Purpose: Savitch Chapter 4 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float inf_rate(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pr_1, pr_2, percent;
    char exit;
    
    do{
        //Prompt User
        cout<<"Enter the price of an item a year ago, then enter the price"<<endl;
        cout<<"of the same item today:"<<endl;
        cin>>pr_1>>pr_2;
        //Call Function
        percent = inf_rate(pr_1, pr_2);
        //Return Result
        cout<<"The rate of inflation between the two prices is: "<<percent<<"%"<<endl;
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit Stage Right!!
    return 0;
}

float inf_rate(float pr_1, float pr_2){
    //Declare Variables
    float ir;
    ir = (pr_2 - pr_1)/pr_1;
    return (ir*100);
}