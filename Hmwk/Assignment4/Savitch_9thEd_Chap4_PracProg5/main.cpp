/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 14:38
 * Purpose: Savitch Chapter 4 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float inf_rate(float, float);
float thdYr(float, float);
float frthYr(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pr_1, pr_2, pr_3, pr_4;
    float percent;
    char exit;
    
    do{
        //Prompt User
        cout<<"Enter the price of an item a year ago, then enter the price"<<endl;
        cout<<"of the same item today:"<<endl;
        cin>>pr_1>>pr_2;
        //Call Function
        percent = inf_rate(pr_1, pr_2);
        pr_3 = thdYr(pr_1, percent);
        pr_4 = frthYr(pr_1, percent);
        //Return Result
        cout<<"The rate of inflation between the two prices is: "<<percent<<"%"<<endl;
        cout<<"The item will cost "<<pr_3<<" next year."<<endl;
        cout<<"The item will cost "<<pr_4<<" the year after next."<<endl;
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
    return(ir*100);
}

float thdYr(float pr_1, float percent){
    float ir, temp;
    ir = percent * .01;
    temp = ir * pr_1;
    return((temp * 2) + pr_1);
}

float frthYr(float pr_1, float percent){
    float ir, temp;
    ir = percent * .01;
    temp = ir * pr_1;
    return((temp * 3) + pr_1);
}