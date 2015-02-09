/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on February 08, 2015, 15:13
 * Purpose: Chapter 7 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
string lookupName(string[], string[], string);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string names[]={"Michael Myers",
                    "Ash Williams",
                    "Jack Torrance",
                    "Freddy Krueger"};
    string phoneNumbers[]={"333-8000","333-2323",
                           "333-6150","339-7970"};
    string targetName, targetPhone;
    char c;
    do{
        cout<<"Enter a name to find the corresponding"<<endl;
        cout<<"phone number."<<endl;
        getline(cin, targetName);
        targetPhone=lookupName(names, phoneNumbers, targetName);
        if(targetPhone.length()>0){
            cout<<"The number is: "<<targetPhone<<endl;
        }
        else
        {
            cout<<"Name not found!"<<endl;
        }
        cout<<"Look up another name? (y/n)"<<endl;
        cin>>c;
        cin.ignore();
    }while(c=='y');
    return 0;
}

string lookupName(string names[], string phoneNumbers[], string targetName){
    int i=0;
    for(i=0; i<=3; i++){
        if(targetName==names[i]){
            return(phoneNumbers[i]);
        }
    }
}