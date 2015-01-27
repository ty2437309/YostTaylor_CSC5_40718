/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 26, 2015, 17:20
 * Purpose: Assignment 4 Homework Menu
 */
//System Libraries
#include <iostream>
#include <cstdlib>

using namespace std;
//User Libraries
//Global Constants
const float FTM=0.3048;
const float MTCM=100;
const float FTIN=12;            //End of First Program
const float MTF=1.0/0.3048;
const float CMTM=1.0/100;
const float INFT=12.0/1;        //End of Second Program
const float FTM_C=0.3048;
const float MTCM_C=100;
const float FTIN_C=12;
const float MTF_C=1.0/0.3048;
const float CMTM_C=1.0/100;
const float INFT_C=12.0/1;      //End of 1+2 Compilation
const float LBKG=1.0/2.2046;
const float GKG_4=1000; 
const float OZLB=1.0/16.0;      //End of Fourth Program
const float KGLB=2.2046;
const float GKG_5=1.0/1000;
const float LBOZ=16.0;          //End of Fifth Program
const float LBKG_C=1.0/2.2046;
const float GKG_1_C=1000;
const float OZLB_C=1.0/16.0;
const float KGLB_C=2.2046;
const float GKG_2_C=1.0/1000;
const float LBOZ_C=16.0;        //End of 4+5 Compilation
//Function Prototypes
float m_calc(float);
float cm_calc(float);
float calc_out_1(float, float);
float ft_calc(float);
float in_calc(float);
float calc_out_2(float, float);
float ft_in_m_cm_c();
float m_cm_ft_in_c();
float m_calc_c(float);
float cm_calc_c(float);
float calc_out_1_c(float, float);
float ft_calc_c(float);
float in_calc_c(float);
float calc_out_2_c(float, float);
float kg_calc(float);
float g_calc(float);
float calc_out_4(float, float);
float lbs_calc(float);
float oz_calc(float);
float calc_out_5(float, float);
float kg_calc_c(float);
float g_calc_c(float);
float calc_out_4_c(float, float);
float lbs_calc_c(float);
float oz_calc_c(float);
float calc_out_5_c(float, float);
float lbs_oz_kg_g_c();
float kg_g_lbs_oz_c();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int option;
    string exit;
    //Begin Menu/Do-While
    do{
        cout<<"Taylor Yost - CSC5"<<endl;
        cout<<"Assignment 5, Chapter 5 Homework."<<endl;
        cout<<"Choose a number from the list to test!"<<endl;
        cout<<"**************************************"<<endl;
        cout<<"  1 - Savitch_9thEd_Chap5_PracProg2"<<endl;
        cout<<"  2 - Savitch_9thEd_Chap5_PracProg3"<<endl;
        cout<<"  3 - Savitch_9thEd_Chap5_PracProg4"<<endl;
        cout<<"  4 - Savitch_9thEd_Chap5_PracProg5"<<endl;
        cout<<"  5 - Savitch_9thEd_Chap5_PracProg6"<<endl;
        cout<<"  6 - Savitch_9thEd_Chap5_PracProg7"<<endl;
        cout<<"**************************************"<<endl;
        cin>>option;
        switch (option)
        {
            case 1:
                cout<<"1 - Savitch_9thEd_Chap5_PracProg2:"<<endl;
                {
                //Declare Variables
                float ft, in, m, cm;
                char exit;
                do{
                    cout<<"Input a length in Feet:"<<endl;
                    cin>>ft;
                    cout<<"Input a length in Inches:"<<endl;
                    cin>>in;
                    m = m_calc(ft);
                    cm = cm_calc(in);
                    calc_out_1(m, cm);
                    cout<<"Would you like to run again? (Y/N)"<<endl;
                    cin>>exit;
                }while(exit=='Y'||exit=='y');
                //Exit Stage Right!!
                }
                break;
            case 2:
                cout<<"2 - Savitch_9thEd_Chap5_PracProg3:"<<endl;
                {
                    //Declare Variables
                    float ft, in, m, cm;
                    char exit;
                    do{
                        cout<<"Input a length in Meters:"<<endl;
                        cin>>m;
                        cout<<"Input a length in Centimeters:"<<endl;
                        cin>>cm;
                        ft = ft_calc(m);
                        in = in_calc(cm);
                        calc_out_2(ft, in);
                        cout<<"Would you like to run again? (Y/N)"<<endl;
                        cin>>exit;
                    }while(exit=='Y'||exit=='y');
                    //Exit Stage Right!!             
                }
                break;
            case 3:
                cout<<"3 - Savitch_9thEd_Chap5_PracProg4:"<<endl;
                {
                    //Declare Variables
                    char exit;
                    int choice;
                    //Begin Loop
                    do{
                        cout<<"Do you want to convert from..."<<endl;
                        cout<<"1 - Feet/Inches to Meters/Centimeters?"<<endl;
                        cout<<"2 - Meters/Centimeters to Feet/Inches?"<<endl;
                        cout<<"Respond with the number of your choice:"<<endl;
                        cin>>choice;
                        if (choice==1)
                        {
                            ft_in_m_cm_c();
                        }
                        else
                        {
                            m_cm_ft_in_c();
                        }    
                        cout<<"Would you like to run again? (Y/N)"<<endl;
                        cin>>exit;
                    }while(exit=='Y'||exit=='y');
                    //Exit Stage Right!!   
                }
                break;
            case 4:
                cout<<"4 - Savitch_9thEd_Chap5_PracProg5:"<<endl;
                {
                    //Declare Variables
                    float lbs, oz, kg, g;
                    char exit;
                    do{
                        cout<<"Input a weight in Pounds:"<<endl;
                        cin>>lbs;
                        cout<<"Input a weight in Ounces:"<<endl;
                        cin>>oz;
                        kg = kg_calc(lbs);
                        g = g_calc(oz);
                        calc_out_4(kg, g);
                        cout<<"Would you like to run again? (Y/N)"<<endl;
                        cin>>exit;
                    }while(exit=='Y'||exit=='y');
                    //Exit Stage Right!!      
                }
                break;
            case 5:
                cout<<"5 - Savitch_9thEd_Chap5_PracProg6:"<<endl;
                {
                    //Declare Variables
                    float lbs, oz, kg, g;
                    char exit;
                    do{
                        cout<<"Input a weight in Kilograms:"<<endl;
                        cin>>kg;
                        cout<<"Input a weight in Grams:"<<endl;
                        cin>>g;
                        lbs = lbs_calc(kg);
                        oz = oz_calc(g);
                        calc_out_5(lbs, oz);
                        cout<<"Would you like to run again? (Y/N)"<<endl;
                        cin>>exit;
                    }while(exit=='Y'||exit=='y');
                    //Exit Stage Right!!          
                }
                break;
            case 6:
                cout<<"6 - Savitch_9thEd_Chap5_PracProg7:"<<endl;
                {
                    //Declare Variables
                    char exit;
                    int choice;
                    //Begin Loop
                    do{
                        cout<<"Do you want to convert from..."<<endl;
                        cout<<"1 - Pounds/Ounces to Kilograms/Grams?"<<endl;
                        cout<<"2 - Kilograms/Grams to Pounds/Ounces?"<<endl;
                        cout<<"Respond with the number of your choice:"<<endl;
                        cin>>choice;
                        if (choice==1)
                        {
                            lbs_oz_kg_g_c();
                        }
                        else
                        {
                            kg_g_lbs_oz_c();
                        }    
                        cout<<"Would you like to run again? (Y/N)"<<endl;
                        cin>>exit;
                    }while(exit=='Y'||exit=='y');
                    //Exit Stage Right!!               
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

float m_calc(float ft){
    return(ft*FTM);
}

float cm_calc(float in){
    //Declare Variables
    float temp_ft, temp_m;
    //Calculation
    temp_ft = in / FTIN;
    temp_m = temp_ft * 0.3048;
    return(temp_m*100);
}

float calc_out_1(float m, float cm){
    cout<<"Feet to Meters: "<<m<<endl;
    cout<<"Inches to Centimeters: "<<cm<<endl;
}

float ft_calc(float m){
    return(m*MTF);
}

float in_calc(float cm){
    //Declare Variables
    float temp_m, temp_ft;
    //Calculation
    temp_m = cm * CMTM;
    temp_ft = temp_m * MTF;
    return(temp_ft*INFT);
}

float calc_out_2(float ft, float in){
    cout<<"Meters to Feet: "<<ft<<endl;
    cout<<"Centimeters to Inches: "<<in<<endl;
}

float ft_in_m_cm_c(){
    float ft, in, m, cm;
    cout<<"Input a length in Feet:"<<endl;
    cin>>ft;
    cout<<"Input a length in Inches:"<<endl;
    cin>>in;
    m = m_calc_c(ft);
    cm = cm_calc_c(in);
    calc_out_1_c(m, cm);
}


float m_cm_ft_in_c(){
    float ft, in, m, cm;
    cout<<"Input a length in Meters:"<<endl;
    cin>>m;
    cout<<"Input a length in Centimeters:"<<endl;
    cin>>cm;
    ft = ft_calc_c(m);
    in = in_calc_c(cm);
    calc_out_2_c(ft, in);
}

float m_calc_c(float ft){
    return(ft*FTM);
}

float cm_calc_c(float in){
    //Declare Variables
    float temp_ft, temp_m;
    //Calculation
    temp_ft = in / FTIN;
    temp_m = temp_ft * 0.3048;
    return(temp_m*100);
}

float calc_out_1_c(float m, float cm){
    cout<<"Feet to Meters: "<<m<<endl;
    cout<<"Inches to Centimeters: "<<cm<<endl;
}

float ft_calc_c(float m){
    return(m*MTF);
}

float in_calc_c(float cm){
    //Declare Variables
    float temp_m, temp_ft;
    //Calculation
    temp_m = cm * CMTM;
    temp_ft = temp_m * MTF;
    return(temp_ft*INFT);
}

float calc_out_2_c(float ft, float in){
    cout<<"Meters to Feet: "<<ft<<endl;
    cout<<"Centimeters to Inches: "<<in<<endl;
}

float kg_calc(float lbs){
    return(lbs*LBKG);
}

float g_calc(float oz){
    //Declare Variables
    float temp_lbs, temp_kg;
    //Calculation
    temp_lbs = oz * OZLB;
    temp_kg = temp_lbs * LBKG;
    return(temp_kg*GKG_4);
}

float calc_out_4(float kg, float g){
    cout<<"Pounds to Kilograms: "<<kg<<endl;
    cout<<"Ounces to Grams: "<<g<<endl;
}

float lbs_calc(float kg){
    return(kg*KGLB);
}

float oz_calc(float g){
    //Declare Variables
    float temp_lbs, temp_kg;
    //Calculation
    temp_kg = g * GKG_5;
    temp_lbs = temp_kg * KGLB;
    return(temp_lbs*LBOZ);
}

float calc_out_5(float lbs, float oz){
    cout<<"Kilograms to Pounds: "<<lbs<<endl;
    cout<<"Grams to Ounces: "<<oz<<endl;
}

float lbs_oz_kg_g_c(){
    float lbs, oz, kg, g;
    cout<<"Input a weight in Pounds:"<<endl;
    cin>>lbs;
    cout<<"Input a weight in Ounces:"<<endl;
    cin>>oz;
    kg = kg_calc_c(lbs);
    g = g_calc_c(oz);
    calc_out_4_c(kg, g);
}

float kg_g_lbs_oz_c(){
    float lbs, oz, kg, g;
    cout<<"Input a weight in Kilograms:"<<endl;
    cin>>kg;
    cout<<"Input a weight in Grams:"<<endl;
    cin>>g;
    lbs = lbs_calc_c(kg);
    oz = oz_calc_c(g);
    calc_out_5_c(lbs, oz);
}

float kg_calc_c(float lbs){
    return(lbs*LBKG_C);
}

float g_calc_c(float oz){
    //Declare Variables
    float temp_lbs, temp_kg;
    //Calculation
    temp_lbs = oz * OZLB_C;
    temp_kg = temp_lbs * LBKG_C;
    return(temp_kg*GKG_1_C);
}

float calc_out_4_c(float kg, float g){
    cout<<"Pounds to Kilograms: "<<kg<<endl;
    cout<<"Ounces to Grams: "<<g<<endl;
}

float lbs_calc_c(float kg){
    return(kg*KGLB_C);
}

float oz_calc_c(float g){
    //Declare Variables
    float temp_lbs, temp_kg;
    //Calculation
    temp_kg = g * GKG_2_C;
    temp_lbs = temp_kg * KGLB_C;
    return(temp_lbs*LBOZ_C);
}

float calc_out_5_c(float lbs, float oz){
    cout<<"Kilograms to Pounds: "<<lbs<<endl;
    cout<<"Grams to Ounces: "<<oz<<endl;
}