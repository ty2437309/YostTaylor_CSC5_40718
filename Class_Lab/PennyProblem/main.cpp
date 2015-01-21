/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 20, 2015, 5:51 PM
 * Purpose: Show Exponential Increases
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int salary=1;
    unsigned int totPay=salary;
    unsigned short numDays;
    //Prompt User
    cout<<"How many days to double your salary?"<<endl;
    cout<<"Your salary starts with $0.01."<<endl;
    cout<<"Maximum days allowed = 30 days."<<endl;
    cin>>numDays;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"On the first day,"<<endl;
    cout<<"your salary = $"<<salary/100.0f<<endl;
    //Calculate Result
    for(int day=2;day<=numDays;day++){
        salary*=2;
        totPay+=salary;
        cout<<"After "<<day<<" days,"<<endl;
        cout<<"your salary = $"<<salary/100.0f<<endl;
    }
    //Output Result
    
    cout<<"After "<<numDays<<" days,"<<endl;
    cout<<"your total pay = $"<<totPay/100.0f<<endl;
    return 0;
}