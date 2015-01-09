/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 8, 2015, 17:50
 * Purpose: Chapter 1 Practice Programs Homework (Savitch 9th)
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;
    //Prompt User
    cout<<"Hello \n";
    cout<<"Press return after entering a number. \n";
    cout<<"Enter the number of pods: \n";
    cin>> number_of_pods;
    cout<<"Enter the number of peas in a pod: \n";
    cin>> peas_per_pod;
    //Calculate
    total_peas = number_of_pods * peas_per_pod;
    //Return Result
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods \n";
    cout<<"and ";
    cout<< peas_per_pod;
    cout<<" peas in each pod, then \n";
    cout<<"you have ";
    cout<< total_peas;
    cout<<" peas in all the pods. \n";
    cout<<"Good-bye \n";
    //Exit stage right!
    return 0;
}

