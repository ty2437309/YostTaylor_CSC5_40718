/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 15, 2015, 18:15
 * Purpose: While Loop
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
float number, guess, r = 0;
    int count = 0;
    cout<<"Input a number to estimate it's square root \n";
    cin>> number;
    guess = number / 2;
    while((r - guess)!=0){
        r = number / guess;
        guess = (guess + r) / 2;
        count ++;
        cout<<"Loop "<<count<<" Calculation: "<<guess<<endl;
    //(abs((r-guess)/r)>0.01)
    }
    
    return 0;
}