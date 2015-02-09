/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on February 08, 2015, 14:49
 * Purpose: Chapter 7 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
void swapFrontBack(int[], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int indx=0, i=0;
    int array[indx];
    //Prompt User
    cout<<"What is the size of array you wish to enter?"<<endl;
    cin>>indx;
    cout<<"Enter "<<indx<<" integers, one at a time:"<<endl;
    for(i=0; i<indx; i++){
        cin>>array[i];
    }
    swapFrontBack(array, indx);
    for(i=0; i<indx; i++){
        cout<<array[i];
    }    
    return 0;
}

void swapFrontBack(int array[], int indx){
    int temp1, temp2;
    temp1=array[0];
    temp2=array[indx-1];
    array[0]=temp2;
    array[indx-1]=temp1;    
}