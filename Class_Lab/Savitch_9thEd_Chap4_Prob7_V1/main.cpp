/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 22, 2015, 8:42 PM
 * Purpose: Lab Instruction
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int strHrs, strMins, strIsAm=false;
    int endHrs, endMins, endIsAm=false;
    char ap, dummy;
    //Prompt For Start Time
    cout<<"Input the Start Time:"<<endl;
    cout<<"The hour, the minutes, and AM or PM."<<endl;
    cin>>strHrs>>strMins>>ap>>dummy;
    cout<<"You input: "<<strHrs<<":"<<strMins<<" "<<ap<<"M"<<endl;
    if(ap=='A'||ap=='a')strIsAm=true;
    //Prompt For End Time
    cout<<"Input the End Time:"<<endl;
    cout<<"The hour, the minutes, and AM or PM."<<endl;
    cin>>endHrs>>endMins>>ap>>dummy;
    cout<<"You input: "<<endHrs<<":"<<endMins<<" "<<ap<<"M"<<endl;
    if(ap=='A'||ap=='a')endIsAm=true;
    //Calculation
    if(!strIsAm)strHrs+=12;
    int strTime=strHrs*60+strMins;
    if(!endIsAm)endHrs+=12;
    int endTime=endHrs*60+endMins;
    int diffMin=endTime-strTime;
    if(diffMin<0)diffMin+=24*60;
    int hrs=diffMin/60;
    int min=diffMin-hrs*60;
    //Output Results
    cout<<"The difference in Time = ";
    cout<<(hrs<10?'0':'\0')<<hrs<<":"<<(min<10?'0':'\0')<<min<<endl;
    
    
    return 0;
}