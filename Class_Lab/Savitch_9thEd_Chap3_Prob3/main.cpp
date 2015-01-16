/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 15, 2015, 21:21
 * Purpose:
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    bool cusp = false;
    int month,day;
    string sign;
    //Prompt User
    cout<<"Input the numerical/integer month you were born in:"<<endl;
    cin>>month;
    cout<<"Input the integer day you were born on:"<<endl;
    cin>>day;
    //Determine the sign
    if(month==1&&day<20)sign="Capricorn";
    else if(month==1&&day>=20)sign"Aquarius";
    else if(month==2&&day<=18)sign="Aquarius";
    //Output the sign and the cusp
    if(month==1&&day>18&&day<22)cusp=true;
    if(month==2&&day>16&&day<20)cusp=true;
    cout<<"Your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp"<<endl;
    else cout<<endl;
    return 0;
}