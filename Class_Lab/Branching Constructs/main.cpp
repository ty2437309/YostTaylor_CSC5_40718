/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 13, 2015, 21:16
 */
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    //Randomly initialize a variable
    srand(static_cast<unsigned int>(time(0)));
    bool torf = rand()%2;
    cout<<"We randomly chose "<<torf<<endl;
    //Illustrate the ternary operator
    cout<<"Using the ternary operator"<<endl;
    cout<<"The random boolean is ";
    cout<<(torf?"Odd":"Even")<<endl;
    //Illustrate the separate if statement
    cout<<"Using the if statement"<<endl;
    cout<<"The random boolean is ";
    if(torf == 1)cout<<"Odd"<<endl;
    if(torf == 0)cout<<"Even"<<endl;
    //Illustrate the if-else statement
    cout<<"Using the if-else statement"<<endl;
    cout<<"The random boolean is ";
    if(torf == 1)cout<<"Odd"<<endl;
    else cout<<"Even"<<endl;
    //Illustrate the switch statement
    cout<<"Using the switch statement"<<endl;
    cout<<"The random boolean is ";
    switch (torf){
        case 1: cout<<"Odd"<<endl;break;
        default: cout<<"Even"<<endl;
    }
    //Exit Stage Right!
    return 0;
}

