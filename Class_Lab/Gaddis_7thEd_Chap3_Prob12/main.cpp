/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 15, 2015, 20:55
 * Purpose:
 */

#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    string month,year;
    float totCash, sales, dolSTax, dolCTax;
    float sSlsTax = 4e-2f, cSlsTax = 2e-2f;
    //Prompt User
    cout<<"What month of sales to calculate?"<<endl;
    getline(cin,month);
    cout<<"What year of sales to calculate?"<<endl;
    getline(cin,year);
    cout<<"What was the total cash received?"<<endl;
    cin>> totCash;
    //Calculation
    sales = totCash / (1 + sSlsTax + cSlsTax);
    dolSTax = sales * sSlsTax;
    dolCTax = sales * cSlsTax;
    //Output Result
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Month: "<<month<<" Year: "<<year<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Total Collected:     $ "<<setw(8)<<totCash<<endl;
    cout<<"Sales:               $ "<<setw(8)<<sales<<endl;
    cout<<"County Sales Tax:    $ "<<setw(8)<<dolCTax<<endl;
    cout<<"State Sales Tax:     $ "<<setw(8)<<dolSTax<<endl;
    cout<<"Total Sales Tax:     $ "<<setw(8)<<dolCTax+dolSTax<<endl;
    
    return 0;
}