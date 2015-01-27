/* 
 * File:   main.cpp
 * Author: Taylor Yost
 * Created on January 19, 2015, 9:43 PM
 * Purpose: Assignment 2 Homework
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int option;
    string exit;
    //Begin Menu/Do-While
    do{
        cout<<"Taylor Yost - CSC5"<<endl;
        cout<<"Assignment 2, Chapter 2 Homework."<<endl;
        cout<<"Choose a number from the list to test!"<<endl;
        cout<<"**************************************"<<endl;
        cout<<"  1 - Savitch_9thEd_Chap2_PracProg2"<<endl;
        cout<<"  2 - Savitch_9thEd_Chap2_PracProg3"<<endl;
        cout<<"  3 - Savitch_9thEd_Chap2_PracProg4"<<endl;
        cout<<"  4 - Savitch_9thEd_Chap2_PracProg5"<<endl;
        cout<<"  5 - Savitch_9thEd_Chap2_PracProj9"<<endl;
        cout<<"  6 - Gaddis_7thEd_Chap2_Prob11"<<endl;
        cout<<"  7 - Gaddis_7thEd_Chap2_Prob12"<<endl;
        cout<<"  8 - Gaddis_7thEd_Chap2_Prob17"<<endl;
        cout<<"  9 - Gaddis_7thEd_Chap3_Prob12"<<endl;
        cout<<"**************************************"<<endl;
        cin>>option;
        switch (option)
        {
            case 1:
                cout<<"1 - Savitch_9thEd_Chap2_PracProg2:"<<endl;
                {
                //Declare Variables
                float number, guess, r = 0;
                int count = 0;
                //Prompt User
                cout<<"Input a number to estimate it's square root \n";
                cin>> number;
                //Make Calculation
                guess = number / 2;
                while((abs((r-guess)/r)>0.01)){
                        r = number / guess;
                        guess = (guess + r) / 2;
                        count ++;
                        cout<<"Loop "<<count<<" Calculation: "<<guess<<endl;
                    }                   
                }
                break;
            case 2:
                cout<<"2 - Savitch_9thEd_Chap2_PracProg3:"<<endl;
                {
                    //Global Constants
                    const int CNVHRMN = 60; //Hrs to Mins
                    const int CNVMNSC = 60; //Mins to Sec
                    //Declare Variables
                    float mph;
                    float hpm; //Pace as Hrs per Mile
                    float fmpm; //float Mile per Min
                    int impm; //int Mile per Min
                    float fmspm; //Fraction - Sec per Min
                    //Prompt User
                    cout<<"What is your speed in Miles per Hour?"<<endl;
                    cin>> mph;
                    //Calculate Pace
                    hpm = 1 / mph;
                    fmpm = hpm * CNVHRMN;
                    impm = static_cast<int> (fmpm);
                    fmspm = (fmpm - impm) * CNVMNSC;
                    //Output Results
                    cout<<mph<<" (mph) = ";
                    cout<<impm<<" (mins) ";
                    cout<<fmspm<<" (secs) per mile."<<endl;
                    //Exit Stage Right!                 
                }
                break;
            case 3:
                cout<<"3 - Savitch_9thEd_Chap2_PracProg4:"<<endl;
                {
                    //Declare Variables
                    string inName, fName, lName, food, adj, color, anim;
                    int number=0;
                    //Prompt User
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
                }
                break;
            case 4:
                cout<<"4 - Savitch_9thEd_Chap2_PracProg5:"<<endl;
                {
                    //Global Constants
                    const float PI=3.14159;
                    //Declare Variables
                    double radius, vm;//Book makes you use a double! Take pity on me XD
                    //Prompt User
                    cout<<"Enter radius of a sphere:"<<endl;
                    cin>>radius;
                    //Calculate
                    vm=(4.0/3.0)*PI*radius*radius*radius;
                    //Return Result
                    cout<<"The volume is "<<vm<<endl;
                    //Exit Stage Right!                
                }
                break;
            case 5:
                cout<<"5 - Savitch_9thEd_Chap2_PracProj9:"<<endl;
                {
                    //Declare Variables
                    int input;
                    int sum = 0, sumPos = 0, sumNeg = 0, sumEven = 0, sumOdd = 0;
                    //Prompt User
                    for(int count = 1;count <= 10;count ++){
                        cout<<"Enter an integer!"<<endl;
                        cin>> input;
                        sum += input;
                        if(input>0)sumPos += input;
                        else sumNeg += input;
                        if (input%2)sumOdd += input;
                        else sumEven += input;
                    }
                    //Output Result
                    cout<<"The sum =          "<<setw(4)<<sum<<endl;
                    cout<<"The positive sum = "<<setw(4)<<sumPos<<endl;
                    cout<<"The negative sum = "<<setw(4)<<sumNeg<<endl;
                    cout<<"The even sum =     "<<setw(4)<<sumEven<<endl;
                    cout<<"The odd sum =      "<<setw(4)<<sumOdd<<endl;
                    //Exit Stage Right!                
                }
                break;
            case 6:
                cout<<"6 - Gaddis_7thEd_Chap2_Prob11:"<<endl;
                {
                    //Declare Variables
                    float gasTank = 20;
                    float inTown = 21.5;
                    float onHway = 26.8;
                    //Calculation
                    float disTown = gasTank * inTown;
                    float disHway = gasTank * onHway;
                    //Output Results
                    cout<<"Distance in Town on a tank of gas = ";
                    cout<<disTown<<" (miles)"<<endl;
                    cout<<"Distance on Highway with a tank of gas = ";
                    cout<<disHway<<" (miles)"<<endl;
                    //Exit stage right!                
                }
                break;
            case 7:
                cout<<"7 - Gaddis_7thEd_Chap2_Prob12:"<<endl;
                {
                    //Global Constants
                    const unsigned short CVFTACS=43560;
                    //Declare Variables
                    float inSqFt, outAcrs;
                    //Prompt User
                    cout<<"Input the number of square feet \n";
                    cout<<"to convert to Acres:"<<endl;
                    cin>> inSqFt;
                    //Calculation
                    outAcrs = inSqFt/CVFTACS;
                    //Output Results
                    cout<<inSqFt<<"(sq feet) = ";
                    cout<<outAcrs<<"(acres)"<<endl;
                    //Exit stage right!                
                }
                break;
            case 8:
                cout<<"8 - Gaddis_7thEd_Chap2_Prob17:"<<endl;
                {
                    //Global Constants
                    const char CONVPCT=100;
                    //Declare Variables
                    float skPrice=2.177e1f;
                    unsigned short nShares=600;
                    char comish=2;
                    //Calculate Values
                    float slPrice=nShares*skPrice;
                    float cmPrice=slPrice*comish/CONVPCT;
                    float totPaid=slPrice+cmPrice;
                    //Output Result
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Sales Price = $"<<setw(8)<<slPrice<<endl;
                    cout<<"Commission  = $"<<setw(8)<<cmPrice<<endl;
                    cout<<"Total Paid  = $"<<setw(8)<<totPaid<<endl;
                }
                break;
            case 9:
                cout<<"9 - Gaddis_7thEd_Chap3_Prob12"<<endl;
                {
                    //Declare Variables
                    string month, year;
                    float totCash, sales, dolSTax, dolCTax;
                    float sSlsTax = 4e-2f, cSlsTax = 2e-2f;
                    //Prompt User
                    cout<<"What month of sales to calculate?"<<endl;
                    cin>>month;
                    cout<<"What year of sales to calculate?"<<endl;
                    cin>>year;
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
                    //Exit Stage Right!
                }
                break;
            default:
                cout<<"Invalid choice!"<<endl;
                break;                   
        }
        cout<<"Would you like to run again (Y/N)?"<<endl;
        cin>>exit;
    }while(exit=="Y"||exit=="y");
    return 0;
}