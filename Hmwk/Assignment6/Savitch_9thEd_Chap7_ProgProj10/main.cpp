/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on February 08, 2015, 20:18
 * Purpose: Chapter 7 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const int SIZE=9;
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char pos[SIZE]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int x=0, o=0;
    //Output Box
    do{
        cout<<" "<<pos[0]<<"  "<<pos[1]<<"  "<<pos[2]<<endl;
        cout<<" "<<pos[3]<<"  "<<pos[4]<<"  "<<pos[5]<<endl;
        cout<<" "<<pos[6]<<"  "<<pos[7]<<"  "<<pos[8]<<endl;
        //Prompt Turns
        cout<<"Player X's Turn:"<<endl;
        cin>>x;
        pos[x-1]='X';
        if(pos[0]=='1'||pos[1]=='2'||pos[2]=='3'||
           pos[3]=='4'||pos[4]=='5'||pos[5]=='6'||
           pos[6]=='7'||pos[7]=='8'||pos[8]=='9'){
            cout<<"Player O's Turn:"<<endl;
            cin>>o;
            pos[o-1]='O';
        }
        else
        {
            break;
        }
    }while(pos[0]=='1'||pos[1]=='2'||pos[2]=='3'||
           pos[3]=='4'||pos[4]=='5'||pos[5]=='6'||
           pos[6]=='7'||pos[7]=='8'||pos[8]=='9');
    cout<<"Game Over!"<<endl;
    return 0;
}