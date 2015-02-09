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
int countNum2s(int[], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int indx=0, i=0;
    int array[indx];
    //Prompt User
    cout<<"What is the size of array you wish to enter?"<<endl;
    cin>>indx;
    cout<<"Enter "<<indx<<" integers, one at a time:"<<endl;
    do{
        cin>>array[i];
        i++;
    }while(i<indx);
    cout<<"Return # of 2s: "<<countNum2s(array, indx);
    return 0;
}

int countNum2s(int array[], int indx){
    int found=0, i=0;
    do{
        if(array[i]==2){
            found++;
        }
    i++;
    }while(i<indx);
    return(found);
}