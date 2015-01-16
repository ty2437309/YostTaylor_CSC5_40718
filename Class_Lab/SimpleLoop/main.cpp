/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 15, 2015, 16:37
 * Purpose: Simple Loop
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int count_down;
    //Prompt User
    cout<<"Enter number of times to test..."<<endl;
    cin>> count_down;
    //Execute Loop
    while (count_down > 0){
        cout<<"Test";
        count_down --;
    }
    return 0;
}

