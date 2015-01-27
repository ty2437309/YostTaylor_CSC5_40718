/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 15:22
 * Purpose: Savitch Chapter 4 Homework
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f; //Weak Force G
//Function Prototypes
float ForcCalc(float, float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char exit;
    float ob_1=5.972e24f; //Object One
    float ob_2=188.0f;//Object Two
    float dist=6.371e3;//Distance Between
    
    do{
        //Prompt User
        cout<<"Enter the mass of Object #1:"<<endl;
        cout<<"Units are in Grams."<<endl;
        cin>>ob_1;
        cout<<"Enter the mass of Object #2:"<<endl;
        cout<<"Units are in Grams."<<endl;
        cin>>ob_2;
        cout<<"Enter the distance between the two objects:"<<endl;
        cout<<"Units are in Centimeters."<<endl;
        cin>>dist;
        //Calculate the attractive force in dynes
        float dynes = ForcCalc(ob_1, ob_2, dist);
        //Output the results
        cout<<"The Gravitational attraction between the two objects is: "<<endl;
        cout<<dynes<<" (Dynes)"<<endl;
        cout<<"Would you like to run again? (Y/N)"<<endl;
        cin>>exit;
    }while(exit=='Y'||exit=='y');
    //Exit stage right
    return 0;
}

float ForcCalc(float ob_1,float ob_2,float dist){
    return(G*ob_1*ob_2/dist/dist);
}