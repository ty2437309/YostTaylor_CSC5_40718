/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 28, 2015, 18:06
 * Purpose: Project 1
 * Changes: Addition of feedback logic functions
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool end_cond=false;
    int t_1=1, t_2=2, t_3=3, t_4=4, t_5=5;
    int t_6=6, t_7=7, t_8=8, t_9=9, t_10=10;
    char sol_1='R', sol_2='Y', sol_3='Y', sol_4='O';
    char a_1, a_2, a_3, a_4, a_5, a_6, a_7, a_8, a_9, a_10;
    char b_1, b_2, b_3, b_4, b_5, b_6, b_7, b_8, b_9, b_10;
    char c_1, c_2, c_3, c_4, c_5, c_6, c_7, c_8, c_9, c_10;
    char d_1, d_2, d_3, d_4, d_5, d_6, d_7, d_8, d_9, d_10;
    char e_1, e_2, e_3, e_4, e_5, e_6, e_7, e_8, e_9, e_10;
    char f_1, f_2, f_3, f_4, f_5, f_6, f_7, f_8, f_9, f_10;
    char e_11, e_12, e_13, e_14, e_15, e_16, e_17, e_18, e_19, e_20;
    char f_11, f_12, f_13, f_14, f_15, f_16, f_17, f_18, f_19, f_20;   
    for (int turn_count=1; end_cond=true; turn_count++){
        cout<<"        // Mastermind // "<<endl;
        cout<<"Turns ~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"  "<<t_1<<"   | "<<a_1<<"| "<<b_1<<"| "<<c_1<<"| "<<d_1<<"|"<<e_1<<" | "<<f_1<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_2<<" | "<<f_2<<"|"<<endl;
        cout<<"  "<<t_2<<"   | "<<a_2<<"| "<<b_2<<"| "<<c_2<<"| "<<d_2<<"|"<<e_3<<" | "<<f_3<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_4<<" | "<<f_4<<"|"<<endl;
        cout<<"  "<<t_3<<"   | "<<a_3<<"| "<<b_3<<"| "<<c_3<<"| "<<d_3<<"|"<<e_5<<" | "<<f_5<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_6<<" | "<<f_6<<"|"<<endl;
        cout<<"  "<<t_4<<"   | "<<a_4<<"| "<<b_4<<"| "<<c_4<<"| "<<d_4<<"|"<<e_7<<" | "<<f_7<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_8<<" | "<<f_8<<"|"<<endl;
        cout<<"  "<<t_5<<"   | "<<a_5<<"| "<<b_5<<"| "<<c_5<<"| "<<d_5<<"|"<<e_9<<" | "<<f_9<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_10<<" | "<<f_10<<"|"<<endl;
        cout<<"  "<<t_6<<"   | "<<a_6<<"| "<<b_6<<"| "<<c_6<<"| "<<d_6<<"|"<<e_11<<" | "<<f_11<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_12<<" | "<<f_12<<"|"<<endl;
        cout<<"  "<<t_7<<"   | "<<a_7<<"| "<<b_7<<"| "<<c_7<<"| "<<d_7<<"|"<<e_13<<" | "<<f_13<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_14<<" | "<<f_14<<"|"<<endl;
        cout<<"  "<<t_8<<"   | "<<a_8<<"| "<<b_8<<"| "<<c_8<<"| "<<d_8<<"|"<<e_15<<" | "<<f_15<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_16<<" | "<<f_16<<"|"<<endl;
        cout<<"  "<<t_9<<"   | "<<a_9<<"| "<<b_9<<"| "<<c_9<<"| "<<d_9<<"|"<<e_17<<" | "<<f_17<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_18<<" | "<<f_18<<"|"<<endl;
        cout<<"  "<<t_10<<"   | "<<a_10<<"| "<<b_10<<"| "<<c_10<<"| "<<d_10<<"|"<<e_19<<" | "<<f_19<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_20<<" | "<<f_20<<"|"<<endl;
        cout<<"      |    Solution:    |"<<endl;
        cout<<"      | "<<sol_1<<"  "<<sol_2<<"  "<<sol_3<<"  "<<sol_4<<"      |"<<endl;
        cout<<"      ~~~~~~~~~~~~~~~~~~~"<<endl;
        //Attempt Turn Change
        if(turn_count==1){
            //Turn 1 Stuff
            cout<<"Turn 1 - Enter 4 Colors:"<<endl;
            cin>>a_1>>b_1>>c_1>>d_1;
            //Turn 1, Position 1 Determination (Black)
            if (a_1==sol_1){
            e_1='B';
            }
            else
            {
                e_1=' ';
            }
            //Turn 1, Position 2 Determination (Black)
            if (b_1==sol_2){
                f_1='B';
            }
            else
            {
                f_1=' ';
            }
            //Turn 1, Position 3 Determination (Black)
            if (c_1==sol_3){
                e_2='B';
            }
            else
            {
                e_2=' ';
            }
            //Turn 1, Position 4 Determination (Black)
            if (d_1==sol_4){
                f_2='B';
            }
            else
            {
                f_2=' ';
            }
        }else if(turn_count==2){
            //Turn 2 Stuff
            cout<<"Turn 2 - Enter 4 Colors:"<<endl;
            cin>>a_2>>b_2>>c_2>>d_2;
            //Turn 1, Position 1 Determination (Black)
            if (a_2==sol_1){
            e_3='B';
            }
            else
            {
                e_3=' ';
            }
            //Turn 1, Position 2 Determination (Black)
            if (b_2==sol_2){
                f_3='B';
            }
            else
            {
                f_3=' ';
            }
            //Turn 1, Position 3 Determination (Black)
            if (c_2==sol_3){
                e_4='B';
            }
            else
            {
                e_4=' ';
            }
            //Turn 1, Position 4 Determination (Black)
            if (d_2==sol_4){
                f_4='B';
            }
            else
            {
                f_4=' ';
            }
        }else if(turn_count==3){
            //Turn 3 Stuff
            cout<<"Turn 3 - Enter 4 Colors:"<<endl;
            cin>>a_3>>b_3>>c_3>>d_3;
            //Turn 1, Position 1 Determination (Black)
            if (a_3==sol_1){
            e_5='B';
            }
            else
            {
                e_5=' ';
            }
            //Turn 1, Position 2 Determination (Black)
            if (b_3==sol_2){
                f_5='B';
            }
            else
            {
                f_5=' ';
            }
            //Turn 1, Position 3 Determination (Black)
            if (c_3==sol_3){
                e_6='B';
            }
            else
            {
                e_6=' ';
            }
            //Turn 1, Position 4 Determination (Black)
            if (d_3==sol_4){
                f_6='B';
            }
            else
            {
                f_6=' ';
            }
        }else if(turn_count==4){
            //Turn 4 Stuff
        }else if(turn_count==5){
            //Turn 5 Stuff
        }else if(turn_count==6){
            //Turn 6 Stuff
        }else if(turn_count==7){
            //Turn 7 Stuff
        }else if(turn_count==8){
            //Turn 8 Stuff
        }else if(turn_count==9){
            //Turn 9 Stuff
        }else{
            //Turn 10 Stuff
            end_cond=true;
        }
    }
    
    //Exit Stage Right!!
    return 0;
}
