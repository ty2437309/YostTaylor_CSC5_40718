/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 17:20
 * Purpose: Assignment 4 Homework Menu
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
//User Libraries
//Global Constants
const float LTG=0.264179; //Liter = 0.264179 Gallon
const float G=6.673e-8f; //Weak Force G
//Function Prototypes
float calculation(float, float);
float car_1(float, float);
float car_2(float, float);
float inf_rate(float, float);
float inf_rate_2(float, float);
float thdYr(float, float);
float frthYr(float, float);
float ForcCalc(float, float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int option;
    string exit;
    //Begin Menu/Do-While
    do{
        cout<<"Taylor Yost - CSC5"<<endl;
        cout<<"Assignment 4, Chapter 4 Homework."<<endl;
        cout<<"Choose a number from the list to test!"<<endl;
        cout<<"**************************************"<<endl;
        cout<<"  1 - Savitch_9thEd_Chap4_PracProg1"<<endl;
        cout<<"  2 - Savitch_9thEd_Chap4_PracProg2"<<endl;
        cout<<"  3 - Savitch_9thEd_Chap4_PracProg4"<<endl;
        cout<<"  4 - Savitch_9thEd_Chap4_PracProg5"<<endl;
        cout<<"  5 - Savitch_9thEd_Chap4_PracProg7"<<endl;
        cout<<"**************************************"<<endl;
        cin>>option;
        switch (option)
        {
            case 1:
                cout<<"1 - Savitch_9thEd_Chap4_PracProg1:"<<endl;
                {
                //Declare Variables
                float liters, miles, mpg;
                char exit;
                do{
                    //Prompt User
                    cout<<"Enter the amount of gasoline consumed by your car:"<<endl;
                    cout<<"Units are to be in Liters."<<endl;
                    cin>>liters;
                    cout<<"Enter the distance traveled by the car:"<<endl;
                    cout<<"Units are to be in Miles."<<endl;
                    cin>>miles;
                    //Function Call
                    mpg = calculation(liters, miles);
                    //Return Result
                    cout<<"In "<<miles<<" (Miles), your car consumed "<<liters<<" (Liters)."<<endl;
                    cout<<"Your car travels "<<mpg<<" mpg."<<endl;
                    cout<<"Would you like to run again? (Y/N)"<<endl;
                    cin>>exit;
                }while(exit=='Y'||exit=='y');
                //Exit Stage Right!!
                }
                break;
            case 2:
                cout<<"2 - Savitch_9thEd_Chap4_PracProg2:"<<endl;
                {
                    //Declare Variables
                    int effi;
                    float liters_1, miles_1, mpg_1; //Car 1
                    float liters_2, miles_2, mpg_2; //Car 2
                    char exit;
                    do{
                        //Prompt User
                        cout<<"Enter the amount of gasoline consumed by the first car:"<<endl;
                        cout<<"Units are to be in Liters."<<endl;
                        cin>>liters_1;
                        cout<<"Enter the distance traveled by the first car:"<<endl;
                        cout<<"Units are to be in Miles."<<endl;
                        cin>>miles_1;
                        cout<<"Enter the amount of gasoline consumed by the second car:"<<endl;
                        cout<<"Units are to be in Liters."<<endl;
                        cin>>liters_2;
                        cout<<"Enter the distance traveled by the second car:"<<endl;
                        cout<<"Units are to be in Miles."<<endl;
                        cin>>miles_2;
                        //Function Call
                        mpg_1 = car_1(liters_1, miles_1);
                        mpg_2 = car_2(liters_2, miles_2);
                        //Efficiency Calculation
                        if(mpg_1>mpg_2){effi=1;}
                        else{effi=2;}
                        //Return Result
                        cout<<"In "<<miles_1<<" (Miles), the first car consumed "<<liters_1<<" (Liters)."<<endl;
                        cout<<"And it travels "<<mpg_1<<" mpg."<<endl;
                        cout<<"In "<<miles_2<<" (Miles), the second car consumed "<<liters_2<<" (Liters)."<<endl;
                        cout<<"And it travels "<<mpg_2<<" mpg."<<endl;
                        cout<<"--------------------------------------------"<<endl;
                        cout<<"Car "<<effi<<" has the best fuel efficiency."<<endl;
                        cout<<"Would you like to run again? (Y/N)"<<endl;
                        cin>>exit;
                    }while(exit=='Y'||exit=='y');
                    //Exit Stage Right!!             
                }
                break;
            case 3:
                cout<<"3 - Savitch_9thEd_Chap4_PracProg4:"<<endl;
                {
                    //Declare Variables
                    float pr_1, pr_2, percent;
                    char exit;

                    do{
                        //Prompt User
                        cout<<"Enter the price of an item a year ago, then enter the price"<<endl;
                        cout<<"of the same item today:"<<endl;
                        cin>>pr_1>>pr_2;
                        //Call Function
                        percent = inf_rate(pr_1, pr_2);
                        //Return Result
                        cout<<"The rate of inflation between the two prices is: "<<percent<<"%"<<endl;
                        cout<<"Would you like to run again? (Y/N)"<<endl;
                        cin>>exit;
                    }while(exit=='Y'||exit=='y');
                    //Exit Stage Right!!        
                }
                break;
            case 4:
                cout<<"4 - Savitch_9thEd_Chap4_PracProg5:"<<endl;
                {
                    //Declare Variables
                    float pr_1, pr_2, pr_3, pr_4;
                    float percent;
                    char exit;

                    do{
                        //Prompt User
                        cout<<"Enter the price of an item a year ago, then enter the price"<<endl;
                        cout<<"of the same item today:"<<endl;
                        cin>>pr_1>>pr_2;
                        //Call Function
                        percent = inf_rate_2(pr_1, pr_2);
                        pr_3 = thdYr(pr_1, percent);
                        pr_4 = frthYr(pr_1, percent);
                        //Return Result
                        cout<<"The rate of inflation between the two prices is: "<<percent<<"%"<<endl;
                        cout<<"The item will cost "<<pr_3<<" next year."<<endl;
                        cout<<"The item will cost "<<pr_4<<" the year after next."<<endl;
                        cout<<"Would you like to run again? (Y/N)"<<endl;
                        cin>>exit;
                    }while(exit=='Y'||exit=='y');
                    //Exit Stage Right!!               
                }
                break;
            case 5:
                cout<<"5 - Savitch_9thEd_Chap4_PracProg7:"<<endl;
                {
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
                }
                break;
            default:
                cout<<"Invalid choice!"<<endl;
                break;                   
        }
        cout<<"Would you like to run the menu again (Y/N)?"<<endl;
        cin>>exit;
    }while(exit=="Y"||exit=="y");
    return 0;
}

float calculation(float liters, float miles){
    //Declare Variables
    float gal;
    //Calculation
    gal=liters*LTG;
    return (miles/gal);
}

float car_1(float liters_1, float miles_1){
    //Declare Variables
    float gal;
    //Calculation
    gal=liters_1*LTG;
    return (miles_1/gal);
}

float car_2(float liters_2, float miles_2){
    //Declare Variables
    float gal;
    //Calculation
    gal=liters_2*LTG;
    return (miles_2/gal);
}

float inf_rate(float pr_1, float pr_2){
    //Declare Variables
    float ir;
    ir = (pr_2 - pr_1)/pr_1;
    return (ir*100);
}

float inf_rate_2(float pr_1, float pr_2){
    //Declare Variables
    float ir;
    ir = (pr_2 - pr_1)/pr_1;
    return(ir*100);
}

float thdYr(float pr_1, float percent){
    float ir, temp;
    ir = percent * .01;
    temp = ir * pr_1;
    return((temp * 2) + pr_1);
}

float frthYr(float pr_1, float percent){
    float ir, temp;
    ir = percent * .01;
    temp = ir * pr_1;
    return((temp * 3) + pr_1);
}

float ForcCalc(float ob_1,float ob_2,float dist){
    return(G*ob_1*ob_2/dist/dist);
}