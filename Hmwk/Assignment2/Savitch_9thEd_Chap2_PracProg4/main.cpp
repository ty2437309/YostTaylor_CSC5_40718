/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 19, 2015, 7:33 PM
 * Purpose: Assignment 2 Homework
 */
//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string inName, fName, lName, food, adj, color, anim;
    int number=0;
    cout<<"This program will complete a Mad Lib!"<<endl;
    cout<<"Enter the last name of your instructor:"<<endl;
    cin>>inName;
    cout<<"Enter your full name:"<<endl;
    cin>>fName>>lName;
    cout<<"Enter the name of a food:"<<endl;
    cin>>food;
    while(number<100||number>120){
        cout<<"Enter an integer between 100 and 120:"<<endl;
        cin>>number;
    }
    cout<<"Enter an adjective:"<<endl;
    cin>>adj;
    cout<<"Enter a color:"<<endl;
    cin>>color;
    cout<<"Enter the name of an animal:"<<endl;
    cin>>anim;
    cout<<"---------------------------------------"<<endl;
    cout<<"Dear Instructor "<<inName<<","<<endl;
    cout<<"I am sorry that I am unable to turn in"<<endl;
    cout<<"my homework at this time. First, I"<<endl;
    cout<<"ate a rotten "<<food<<", which made me"<<endl;
    cout<<"turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<number<<"."<<endl;
    cout<<"Next, my "<<adj<<" pet "<<anim<<endl;
    cout<<"must have smelled the remains of the "<<food<<" on my"<<endl;
    cout<<"homework, because he ate it. I am"<<endl;
    cout<<"currently rewriting my homework"<<endl;
    cout<<"and hope you will accept it late."<<endl;
    cout<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<fName<<" "<<lName<<endl;
    //Exit Stage Right!
    return 0;
}