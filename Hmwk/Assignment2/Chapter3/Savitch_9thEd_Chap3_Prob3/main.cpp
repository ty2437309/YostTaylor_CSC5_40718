/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 15, 2015, 21:21
 * Purpose: Assignment 2 Homework
 */
//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool cusp = false;
    int month,day;
    string sign, reading, exit;
    //Prompt User
    do{
        cout<<"Input the integer of the month you were born in:"<<endl;
        cin>>month;
        cout<<"Input the integer day on which you were born:"<<endl;
        cin>>day;
        //Determine the sign
        if(month==1&&day<=19)sign="Capricorn";
        else if(month==1&&day>=20)sign="Aquarius";
        else if(month==2&&day<=18)sign="Aquarius";
        else if(month==2&&day>=18)sign="Pisces";
        else if(month==3&&day<=20)sign="Pisces";
        else if(month==3&&day>=21)sign="Aries";
        else if(month==4&&day<=19)sign="Aries";
        else if(month==4&&day>=20)sign="Taurus";
        else if(month==5&&day<=20)sign="Taurus";
        else if(month==5&&day>=21)sign="Gemini";
        else if(month==6&&day<=21)sign="Gemini";
        else if(month==6&&day>=22)sign="Cancer";
        else if(month==7&&day<=22)sign="Cancer";
        else if(month==7&&day>=23)sign="Leo";
        else if(month==8&&day<=22)sign="Leo";
        else if(month==8&&day>=23)sign="Virgo";
        else if(month==9&&day<=22)sign="Virgo";
        else if(month==9&&day>=23)sign="Libra";
        else if(month==10&&day<=22)sign="Libra";
        else if(month==10&&day>=23)sign="Scorpio";
        else if(month==11&&day<=21)sign="Scorpio";
        else if(month==11&&day>=22)sign="Sagittarius";
        else if(month==12&&day<=21)sign="Sagittarius";
        else if(month==12&&day>=22)sign="Capricorn";
        //Determine Reading
        if(sign=="Capricorn")reading="Crazy";
        else if(sign=="Aquarius")reading="Fun";
        else if(sign=="Pisces")reading="Boring";
        else if(sign=="Aries")reading="Wild";
        else if(sign=="Taurus")reading="Interesting";
        else if(sign=="Gemini")reading="Scatter-brained";
        else if(sign=="Cancer")reading="Smart";
        else if(sign=="Leo")reading="Analytical";
        else if(sign=="Virgo")reading="Strong-willed";
        else if(sign=="Libra")reading="Opinionated";
        else if(sign=="Scorpio")reading="Artistic";
        else if(sign=="Sagittarius")reading="Open-minded";
        //Output Sign, Determine Cusp
        if(month==1&&day>18&&day<22)cusp=true;
        if(month==2&&day>16&&day<21)cusp=true;
        if(month==3&&day>18&&day<23)cusp=true;
        if(month==4&&day>17&&day<22)cusp=true;
        if(month==5&&day>18&&day<23)cusp=true;
        if(month==6&&day>19&&day<24)cusp=true;
        if(month==7&&day>20&&day<25)cusp=true;
        if(month==8&&day>20&&day<25)cusp=true;
        if(month==9&&day>20&&day<25)cusp=true;
        if(month==10&&day>20&&day<25)cusp=true;
        if(month==11&&day>19&&day<24)cusp=true;
        if(month==12&&day>19&&day<24)cusp=true;
        cout<<"Your sign is "<<sign<<endl;
        cout<<"You are most likely: "<<reading<<endl;
        if(cusp)cout<<"You are on the cusp."<<endl;
        else cout<<endl;
        cout<<"Would you like to run again (Y/N)"<<endl;
        cin>>exit;
    }while(exit=="Y"||exit=="y");
    //Exit Stage Right!
    return 0;
}