/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on February 08, 2015, 13:19
 * Purpose: Chapter 7 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
bool firstLast2(int[], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int indx=1, i=0;
    int array[indx];
    //Prompt User
    cout<<"What is the size of array you wish to enter?"<<endl;
    cin>>indx;
    cout<<"Enter "<<indx<<" integers, one at a time:"<<endl;
    do{
        cin>>array[i];
        i++;
    }while(i<indx);
    cout<<"Return: "<<firstLast2(array, indx);
    return 0;
}

bool firstLast2(int array[], int indx){
    bool test=false;
    if(array[indx-1]==2||array[0]==2){
        test=true;
    }
    else
    {
        test=false;
    }
    return(test);
}