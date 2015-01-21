/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 20, 2015, 8:33 PM
 * Purpose: PI Approximation
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;
const float PI=4*atan(1);

int main(int argc, char** argv) {
    float approxPi=1.0f;
    unsigned int terms, nTerms;
    do{
        cout<<"How many terms in series to use:"<<endl;
        cout<<"Choose an odd number integer < 2^32!"<<endl;
        cin>>nTerms;
    }while(!(nTerms%2));
    for(int terms=1;terms<=nTerms;terms+=4){
        approxPi+=(-1.0f/(terms+2)+1.0f/(terms+4));
    }
    approxPi*=4;
    cout<<"Exact value of PI = "<<PI<<endl;
    cout<<"Approximate value = "<<approxPi<<endl;
    return 0;
}