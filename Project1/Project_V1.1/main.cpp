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
        //Turn 1 Feedback Logic Functions
char turn_1_pos_1(char, char, char, char, char, char, char);
char turn_1_pos_2(char, char, char, char, char, char, char);
char turn_1_pos_3(char, char, char, char, char, char, char);
char turn_1_pos_4(char, char, char, char, char, char, char);
        //Turn 2 Feedback Logic Functions
char turn_2_pos_1(char, char, char, char, char, char, char);
char turn_2_pos_2(char, char, char, char, char, char, char);
char turn_2_pos_3(char, char, char, char, char, char, char);
char turn_2_pos_4(char, char, char, char, char, char, char);
        //Turn 3 Feedback Logic Functions
char turn_3_pos_1(char, char, char, char, char, char, char);
char turn_3_pos_2(char, char, char, char, char, char, char);
char turn_3_pos_3(char, char, char, char, char, char, char);
char turn_3_pos_4(char, char, char, char, char, char, char);
        //Turn 4 Feedback Logic Functions
char turn_4_pos_1(char, char, char, char, char, char, char);
char turn_4_pos_2(char, char, char, char, char, char, char);
char turn_4_pos_3(char, char, char, char, char, char, char);
char turn_4_pos_4(char, char, char, char, char, char, char);
        //Turn 5 Feedback Logic Functions
char turn_5_pos_1(char, char, char, char, char, char, char);
char turn_5_pos_2(char, char, char, char, char, char, char);
char turn_5_pos_3(char, char, char, char, char, char, char);
char turn_5_pos_4(char, char, char, char, char, char, char);
        //Turn 6 Feedback Logic Functions
char turn_6_pos_1(char, char, char, char, char, char, char);
char turn_6_pos_2(char, char, char, char, char, char, char);
char turn_6_pos_3(char, char, char, char, char, char, char);
char turn_6_pos_4(char, char, char, char, char, char, char);
        //Turn 7 Feedback Logic Functions
char turn_7_pos_1(char, char, char, char, char, char, char);
char turn_7_pos_2(char, char, char, char, char, char, char);
char turn_7_pos_3(char, char, char, char, char, char, char);
char turn_7_pos_4(char, char, char, char, char, char, char);
        //Turn 8 Feedback Logic Functions
char turn_8_pos_1(char, char, char, char, char, char, char);
char turn_8_pos_2(char, char, char, char, char, char, char);
char turn_8_pos_3(char, char, char, char, char, char, char);
char turn_8_pos_4(char, char, char, char, char, char, char);
        //Turn 9 Feedback Logic Functions
char turn_9_pos_1(char, char, char, char, char, char, char);
char turn_9_pos_2(char, char, char, char, char, char, char);
char turn_9_pos_3(char, char, char, char, char, char, char);
char turn_9_pos_4(char, char, char, char, char, char, char);
        //Turn 10 Feedback Logic Functions
char turn_10_pos_1(char, char, char, char, char, char, char);
char turn_10_pos_2(char, char, char, char, char, char, char);
char turn_10_pos_3(char, char, char, char, char, char, char);
char turn_10_pos_4(char, char, char, char, char, char, char);
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
    char g_1, g_2, g_3, g_4, g_5, g_6, g_7, g_8, g_9, g_10;
    char h_1, h_2, h_3, h_4, h_5, h_6, h_7, h_8, h_9, h_10;
    char e_11, e_12, e_13, e_14, e_15, e_16, e_17, e_18, e_19, e_20;
    char f_11, f_12, f_13, f_14, f_15, f_16, f_17, f_18, f_19, f_20;
    char g_11, g_12, g_13, g_14, g_15, g_16, g_17, g_18, g_19, g_20;
    char h_11, h_12, h_13, h_14, h_15, h_16, h_17, h_18, h_19, h_20;
    for (int turn_count=1; end_cond=true; turn_count++){
        cout<<"        // Mastermind // "<<endl;
        cout<<"Turns ~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"  "<<t_1<<"   | "<<a_1<<"| "<<b_1<<"| "<<c_1<<"| "<<d_1<<"|"<<e_1<<" | "<<f_1<<"|"<<g_1<<" | "<<h_1<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_2<<" | "<<f_2<<"|"<<g_2<<" | "<<h_2<<"|"<<endl;
        cout<<"  "<<t_2<<"   | "<<a_2<<"| "<<b_2<<"| "<<c_2<<"| "<<d_2<<"|"<<e_3<<" | "<<f_3<<"|"<<g_3<<" | "<<h_3<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_4<<" | "<<f_4<<"|"<<g_4<<" | "<<h_4<<"|"<<endl;
        cout<<"  "<<t_3<<"   | "<<a_3<<"| "<<b_3<<"| "<<c_3<<"| "<<d_3<<"|"<<e_5<<" | "<<f_5<<"|"<<g_5<<" | "<<h_5<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_6<<" | "<<f_6<<"|"<<g_6<<" | "<<h_6<<"|"<<endl;
        cout<<"  "<<t_4<<"   | "<<a_4<<"| "<<b_4<<"| "<<c_4<<"| "<<d_4<<"|"<<e_7<<" | "<<f_7<<"|"<<g_7<<" | "<<h_7<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_8<<" | "<<f_8<<"|"<<g_8<<" | "<<h_8<<"|"<<endl;
        cout<<"  "<<t_5<<"   | "<<a_5<<"| "<<b_5<<"| "<<c_5<<"| "<<d_5<<"|"<<e_9<<" | "<<f_9<<"|"<<g_9<<" | "<<h_9<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_10<<" | "<<f_10<<"|"<<g_10<<" | "<<h_10<<"|"<<endl;
        cout<<"  "<<t_6<<"   | "<<a_6<<"| "<<b_6<<"| "<<c_6<<"| "<<d_6<<"|"<<e_11<<" | "<<f_11<<"|"<<g_11<<" | "<<h_11<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_12<<" | "<<f_12<<"|"<<g_12<<" | "<<h_12<<"|"<<endl;
        cout<<"  "<<t_7<<"   | "<<a_7<<"| "<<b_7<<"| "<<c_7<<"| "<<d_7<<"|"<<e_13<<" | "<<f_13<<"|"<<g_13<<" | "<<h_13<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_14<<" | "<<f_14<<"|"<<g_14<<" | "<<h_14<<"|"<<endl;
        cout<<"  "<<t_8<<"   | "<<a_8<<"| "<<b_8<<"| "<<c_8<<"| "<<d_8<<"|"<<e_15<<" | "<<f_15<<"|"<<g_15<<" | "<<h_15<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_16<<" | "<<f_16<<"|"<<g_16<<" | "<<h_16<<"|"<<endl;
        cout<<"  "<<t_9<<"   | "<<a_9<<"| "<<b_9<<"| "<<c_9<<"| "<<d_9<<"|"<<e_17<<" | "<<f_17<<"|"<<g_17<<" | "<<h_17<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_18<<" | "<<f_18<<"|"<<g_18<<" | "<<h_18<<"|"<<endl;
        cout<<"  "<<t_10<<"   | "<<a_10<<"| "<<b_10<<"| "<<c_10<<"| "<<d_10<<"|"<<e_19<<" | "<<f_19<<"|"<<g_19<<" | "<<h_19<<"|"<<endl;
        cout<<"      |__|__|__|__|"<<e_20<<" | "<<f_20<<"|"<<g_20<<" | "<<h_20<<"|"<<endl;
        cout<<"      |    Solution:    |"<<endl;
        cout<<"      | "<<sol_1<<"  "<<sol_2<<"  "<<sol_3<<"  "<<sol_4<<"      |"<<endl;
        cout<<"      ~~~~~~~~~~~~~~~~~~~"<<endl;
        //Attempt Turn Change
        if(turn_count==1){
            //Turn 1 Stuff
            cout<<"Turn 1 - Enter 4 Colors:"<<endl;
            cin>>a_1>>b_1>>c_1>>d_1;
            turn_1_pos_1(a_1, e_1, g_1, sol_1, sol_2, sol_3, sol_4);
            turn_1_pos_2(b_1, f_1, h_1, sol_1, sol_2, sol_3, sol_4);
            turn_1_pos_3(c_1, e_2, g_2, sol_1, sol_2, sol_3, sol_4);
            turn_1_pos_4(d_1, f_2, h_2, sol_1, sol_2, sol_3, sol_4);
        }else if(turn_count==2){
            //Turn 2 Stuff
            cout<<"Turn 2 - Enter 4 Colors:"<<endl;
            cin>>a_2>>b_2>>c_2>>d_2;
            turn_2_pos_1(a_2, e_3, g_3, sol_1, sol_2, sol_3, sol_4);
            turn_2_pos_2(b_2, f_3, h_3, sol_1, sol_2, sol_3, sol_4);
            turn_2_pos_3(c_2, e_4, g_4, sol_1, sol_2, sol_3, sol_4);
            turn_2_pos_4(d_2, f_4, h_4, sol_1, sol_2, sol_3, sol_4);
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
            turn_3_pos_1(a_3, e_5, g_5, sol_1, sol_2, sol_3, sol_4);
            turn_3_pos_2(b_3, f_5, h_5, sol_1, sol_2, sol_3, sol_4);
            turn_3_pos_3(c_3, e_6, g_6, sol_1, sol_2, sol_3, sol_4);
            turn_3_pos_4(d_3, f_6, h_6, sol_1, sol_2, sol_3, sol_4);
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
            cout<<"Turn 4 - Enter 4 Colors:"<<endl;
            cin>>a_4>>b_4>>c_4>>d_4;
            turn_4_pos_1(a_4, e_7, g_7, sol_1, sol_2, sol_3, sol_4);
            turn_4_pos_2(b_4, f_7, h_7, sol_1, sol_2, sol_3, sol_4);
            turn_4_pos_3(c_4, e_8, g_8, sol_1, sol_2, sol_3, sol_4);
            turn_4_pos_4(d_4, f_8, h_8, sol_1, sol_2, sol_3, sol_4);
        }else if(turn_count==5){
            //Turn 5 Stuff
            cout<<"Turn 5 - Enter 4 Colors:"<<endl;
            cin>>a_5>>b_5>>c_5>>d_5;
            turn_5_pos_1(a_5, e_9, g_9, sol_1, sol_2, sol_3, sol_4);
            turn_5_pos_2(b_5, f_9, h_9, sol_1, sol_2, sol_3, sol_4);
            turn_5_pos_3(c_5, e_10, g_10, sol_1, sol_2, sol_3, sol_4);
            turn_5_pos_4(d_5, f_10, h_10, sol_1, sol_2, sol_3, sol_4);
        }else if(turn_count==6){
            //Turn 6 Stuff
            cout<<"Turn 6 - Enter 4 Colors:"<<endl;
            cin>>a_6>>b_6>>c_6>>d_6;
            turn_6_pos_1(a_6, e_11, g_11, sol_1, sol_2, sol_3, sol_4);
            turn_6_pos_2(b_6, f_11, h_11, sol_1, sol_2, sol_3, sol_4);
            turn_6_pos_3(c_6, e_12, g_12, sol_1, sol_2, sol_3, sol_4);
            turn_6_pos_4(d_6, f_12, h_12, sol_1, sol_2, sol_3, sol_4);
        }else if(turn_count==7){
            //Turn 7 Stuff
            cout<<"Turn 7 - Enter 4 Colors:"<<endl;
            cin>>a_7>>b_7>>c_7>>d_7;
            turn_7_pos_1(a_7, e_13, g_13, sol_1, sol_2, sol_3, sol_4);
            turn_7_pos_2(b_7, f_13, h_13, sol_1, sol_2, sol_3, sol_4);
            turn_7_pos_3(c_7, e_14, g_14, sol_1, sol_2, sol_3, sol_4);
            turn_7_pos_4(d_7, f_14, h_14, sol_1, sol_2, sol_3, sol_4);
        }else if(turn_count==8){
            //Turn 8 Stuff
            cout<<"Turn 8 - Enter 4 Colors:"<<endl;
            cin>>a_4>>b_4>>c_4>>d_4;
            turn_8_pos_1(a_8, e_15, g_15, sol_1, sol_2, sol_3, sol_4);
            turn_8_pos_2(b_8, f_15, h_15, sol_1, sol_2, sol_3, sol_4);
            turn_8_pos_3(c_8, e_16, g_16, sol_1, sol_2, sol_3, sol_4);
            turn_8_pos_4(d_8, f_16, h_16, sol_1, sol_2, sol_3, sol_4);
        }else if(turn_count==9){
            //Turn 9 Stuff
            cout<<"Turn 9 - Enter 4 Colors:"<<endl;
            cin>>a_9>>b_9>>c_9>>d_9;
            turn_9_pos_1(a_9, e_17, g_17, sol_1, sol_2, sol_3, sol_4);
            turn_9_pos_2(b_9, f_17, h_17, sol_1, sol_2, sol_3, sol_4);
            turn_9_pos_3(c_9, e_18, g_18, sol_1, sol_2, sol_3, sol_4);
            turn_9_pos_4(d_9, f_18, h_18, sol_1, sol_2, sol_3, sol_4);
        }else{
            //Turn 10 Stuff
            cout<<"Turn 10 - Enter 4 Colors:"<<endl;
            cin>>a_10>>b_10>>c_10>>d_10;
            turn_10_pos_1(a_10, e_19, g_19, sol_1, sol_2, sol_3, sol_4);
            turn_10_pos_2(b_10, f_19, h_19, sol_1, sol_2, sol_3, sol_4);
            turn_10_pos_3(c_10, e_20, g_20, sol_1, sol_2, sol_3, sol_4);
            turn_10_pos_4(d_10, f_20, h_20, sol_1, sol_2, sol_3, sol_4);
            end_cond=true;
        }
    }
    
    //Exit Stage Right!!
    return 0;
}

char turn_1_pos_1(char a_1, char e_1, char g_1,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_1==sol_1){
        e_1='B';
    }
    else
    {
        e_1=' ';
    }
    if (a_1==sol_2||a_1==sol_3||a_1==sol_4){
        g_1='W';
    }
    else
    {
        g_1=' ';
    }
    return(e_1, g_1);
}

char turn_1_pos_2(char b_1, char f_1, char h_1,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_1==sol_2){
        f_1='B';
    }
    else
    {
        f_1=' ';
    }
    if (b_1==sol_2||b_1==sol_3||b_1==sol_4){
        h_1='W';
    }
    else
    {
        h_1=' ';
    }
    return(f_1, h_1);
}

char turn_1_pos_3(char c_1, char e_2, char g_2,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_1==sol_2){
        e_2='B';
    }
    else
    {
        e_2=' ';
    }
    if (c_1==sol_2||c_1==sol_3||c_1==sol_4){
        g_2='W';
    }
    else
    {
        g_2=' ';
    }
    return(e_2, g_2);
}

char turn_1_pos_4(char d_1, char f_2, char h_2,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_1==sol_2){
        f_2='B';
    }
    else
    {
        f_2=' ';
    }
    if (d_1==sol_2||d_1==sol_3||d_1==sol_4){
        h_2='W';
    }
    else
    {
        h_2=' ';
    }
    return(f_2, h_2);
}