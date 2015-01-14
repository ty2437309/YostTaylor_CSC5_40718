/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 13, 2015, 7:22 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int a=2, b=3;
    //Output Values
    cout<<"After temp swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    //Swap
    a=a^b;
    b=a^b;
    a=a^b;
    //Output Values After Swap
    cout<<"After xor swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    //Exit Stage Right!    
    return 0;
}

