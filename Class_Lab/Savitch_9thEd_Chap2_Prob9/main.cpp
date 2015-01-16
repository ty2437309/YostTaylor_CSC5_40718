/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 15, 2015, 19:22
 * Purpose:
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int input;
    int sum = 0, sumPos = 0, sumNeg = 0, sumEven = 0, sumOdd = 0;
    //Prompt User
    for(int count = 1;count <= 10;count ++){
        cout<<"Enter an integer!"<<endl;
        cin>> input;
        sum += input;
        if(input>0)sumPos += input;
        else sumNeg += input;
        if (input%2)sumOdd += input;
        else sumEven += input;
    }
    //Output Result
    cout<<"The sum =          "<<setw(4)<<sum<<endl;
    cout<<"The positive sum = "<<setw(4)<<sumPos<<endl;
    cout<<"The negative sum = "<<setw(4)<<sumNeg<<endl;
    cout<<"The even sum =     "<<setw(4)<<sumEven<<endl;
    cout<<"The odd sum =      "<<setw(4)<<sumOdd<<endl;
    
    return 0;
}