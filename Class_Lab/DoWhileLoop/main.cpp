/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 15, 2015, 16:51
 * Purpose:
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    float number, guess, r;
    int count = 0;
    cout<<"Input a number to estimate it's square root \n";
    cin>> number;
    guess = number / 2;
    do{
        r = number / guess;
        guess = (guess + r) / 2;
        count ++;
        cout<<"Loop "<<count<<" Calculation: "<<guess<<endl;
    //(abs((r-guess)/r)>0.01)
    }while((r - guess)!=0);
    
    return 0;
}

