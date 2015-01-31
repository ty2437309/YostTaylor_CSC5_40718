/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 28, 2015, 18:06
 * Purpose: Project 1
 * Changes: Fixed logic typos, output box errors.  Added logic for win/loss
 *          determinations.  Added replay loop.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
        //Turn 1 Feedback Logic Functions
void turn_1_pos_1(char, char&, char&, char, char, char, char);
void turn_1_pos_2(char, char&, char&, char, char, char, char);
void turn_1_pos_3(char, char&, char&, char, char, char, char);
void turn_1_pos_4(char, char&, char&, char, char, char, char);
        //Turn 2 Feedback Logic Functions
void turn_2_pos_1(char, char&, char&, char, char, char, char);
void turn_2_pos_2(char, char&, char&, char, char, char, char);
void turn_2_pos_3(char, char&, char&, char, char, char, char);
void turn_2_pos_4(char, char&, char&, char, char, char, char);
        //Turn 3 Feedback Logic Functions
void turn_3_pos_1(char, char&, char&, char, char, char, char);
void turn_3_pos_2(char, char&, char&, char, char, char, char);
void turn_3_pos_3(char, char&, char&, char, char, char, char);
void turn_3_pos_4(char, char&, char&, char, char, char, char);
        //Turn 4 Feedback Logic Functions
void turn_4_pos_1(char, char&, char&, char, char, char, char);
void turn_4_pos_2(char, char&, char&, char, char, char, char);
void turn_4_pos_3(char, char&, char&, char, char, char, char);
void turn_4_pos_4(char, char&, char&, char, char, char, char);
        //Turn 5 Feedback Logic Functions
void turn_5_pos_1(char, char&, char&, char, char, char, char);
void turn_5_pos_2(char, char&, char&, char, char, char, char);
void turn_5_pos_3(char, char&, char&, char, char, char, char);
void turn_5_pos_4(char, char&, char&, char, char, char, char);
        //Turn 6 Feedback Logic Functions
void turn_6_pos_1(char, char&, char&, char, char, char, char);
void turn_6_pos_2(char, char&, char&, char, char, char, char);
void turn_6_pos_3(char, char&, char&, char, char, char, char);
void turn_6_pos_4(char, char&, char&, char, char, char, char);
        //Turn 7 Feedback Logic Functions
void turn_7_pos_1(char, char&, char&, char, char, char, char);
void turn_7_pos_2(char, char&, char&, char, char, char, char);
void turn_7_pos_3(char, char&, char&, char, char, char, char);
void turn_7_pos_4(char, char&, char&, char, char, char, char);
        //Turn 8 Feedback Logic Functions
void turn_8_pos_1(char, char&, char&, char, char, char, char);
void turn_8_pos_2(char, char&, char&, char, char, char, char);
void turn_8_pos_3(char, char&, char&, char, char, char, char);
void turn_8_pos_4(char, char&, char&, char, char, char, char);
        //Turn 9 Feedback Logic Functions
void turn_9_pos_1(char, char&, char&, char, char, char, char);
void turn_9_pos_2(char, char&, char&, char, char, char, char);
void turn_9_pos_3(char, char&, char&, char, char, char, char);
void turn_9_pos_4(char, char&, char&, char, char, char, char);
        //Turn 10 Feedback Logic Functions
void turn_10_pos_1(char, char&, char&, char, char, char, char);
void turn_10_pos_2(char, char&, char&, char, char, char, char);
void turn_10_pos_3(char, char&, char&, char, char, char, char);
void turn_10_pos_4(char, char&, char&, char, char, char, char);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables & Initialize
    bool win=false;
    string exit;
    int t_1=1, t_2=2, t_3=3, t_4=4, t_5=5;
    int t_6=6, t_7=7, t_8=8, t_9=9, t_10=10;
    char sol_1='R', sol_2='Y', sol_3='P', sol_4='O';
    char a_1=' ', a_2=' ', a_3=' ', a_4=' ', a_5=' ';
    char a_6=' ', a_7=' ', a_8=' ', a_9=' ', a_10=' ';
    char b_1=' ', b_2=' ', b_3=' ', b_4=' ', b_5=' ';
    char b_6=' ', b_7=' ', b_8=' ', b_9=' ', b_10=' ';
    char c_1=' ', c_2=' ', c_3=' ', c_4=' ', c_5=' ';
    char c_6=' ', c_7=' ', c_8=' ', c_9=' ', c_10=' ';
    char d_1=' ', d_2=' ', d_3=' ', d_4=' ', d_5=' ';
    char d_6=' ', d_7=' ', d_8=' ', d_9=' ', d_10=' ';
    char e_1=' ', e_2=' ', e_3=' ', e_4=' ', e_5=' ';
    char e_6=' ', e_7=' ', e_8=' ', e_9=' ', e_10=' ';
    char f_1=' ', f_2=' ', f_3=' ', f_4=' ', f_5=' ';
    char f_6=' ', f_7=' ', f_8=' ', f_9=' ', f_10=' ';
    char g_1=' ', g_2=' ', g_3=' ', g_4=' ', g_5=' ';
    char g_6=' ', g_7=' ', g_8=' ', g_9=' ', g_10=' ';
    char h_1=' ', h_2=' ', h_3=' ', h_4=' ', h_5=' ';
    char h_6=' ', h_7=' ', h_8=' ', h_9=' ', h_10=' ';
    char e_11=' ', e_12=' ', e_13=' ', e_14=' ', e_15=' ';
    char e_16=' ', e_17=' ', e_18=' ', e_19=' ', e_20=' ';
    char f_11=' ', f_12=' ', f_13=' ', f_14=' ', f_15=' ';
    char f_16=' ', f_17=' ', f_18=' ', f_19=' ', f_20=' ';
    char g_11=' ', g_12=' ', g_13=' ', g_14=' ', g_15=' ';
    char g_16=' ', g_17=' ', g_18=' ', g_19=' ', g_20=' ';
    char h_11=' ', h_12=' ', h_13=' ', h_14=' ', h_15=' ';
    char h_16=' ', h_17=' ', h_18=' ', h_19=' ', h_20=' ';
    do{
        for (int turn_count=1; turn_count<=11; turn_count++){
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
            cout<<"  "<<t_10<<"  | "<<a_10<<"| "<<b_10<<"| "<<c_10<<"| "<<d_10<<"|"<<e_19<<" | "<<f_19<<"|"<<g_19<<" | "<<h_19<<"|"<<endl;
            cout<<"      |__|__|__|__|"<<e_20<<" | "<<f_20<<"|"<<g_20<<" | "<<h_20<<"|"<<endl;
            cout<<"      |    Solution:    |"<<endl;
            cout<<"      | "<<sol_1<<"  "<<sol_2<<"  "<<sol_3<<"  "<<sol_4<<"      |"<<endl;
            cout<<"      ~~~~~~~~~~~~~~~~~~~"<<endl;
            //Turn Feedback Begins Here!
            if(turn_count==11){
                //Prints Last Turn Before Loop Ends
                turn_count++;
            }else if(turn_count==1){
                //Turn 1 Stuff
                cout<<"Turn 1 - Enter 4 Colors:"<<endl;
                cin>>a_1>>b_1>>c_1>>d_1;
                turn_1_pos_1(a_1, e_1, g_1, sol_1, sol_2, sol_3, sol_4);
                turn_1_pos_2(b_1, f_1, h_1, sol_1, sol_2, sol_3, sol_4);
                turn_1_pos_3(c_1, e_2, g_2, sol_1, sol_2, sol_3, sol_4);
                turn_1_pos_4(d_1, f_2, h_2, sol_1, sol_2, sol_3, sol_4);
                if(a_1==sol_1&&b_1==sol_2&&c_1==sol_3&&d_1==sol_4){
                    turn_count=turn_count+9;
                    win=true;
                }
            }else if(turn_count==2){
                //Turn 2 Stuff
                cout<<"Turn 2 - Enter 4 Colors:"<<endl;
                cin>>a_2>>b_2>>c_2>>d_2;
                turn_2_pos_1(a_2, e_3, g_3, sol_1, sol_2, sol_3, sol_4);
                turn_2_pos_2(b_2, f_3, h_3, sol_1, sol_2, sol_3, sol_4);
                turn_2_pos_3(c_2, e_4, g_4, sol_1, sol_2, sol_3, sol_4);
                turn_2_pos_4(d_2, f_4, h_4, sol_1, sol_2, sol_3, sol_4);
                if(a_2==sol_1&&b_2==sol_2&&c_2==sol_3&&d_2==sol_4){
                    turn_count=turn_count+8;
                    win=true;
                }
            }else if(turn_count==3){
                //Turn 3 Stuff
                cout<<"Turn 3 - Enter 4 Colors:"<<endl;
                cin>>a_3>>b_3>>c_3>>d_3;
                turn_3_pos_1(a_3, e_5, g_5, sol_1, sol_2, sol_3, sol_4);
                turn_3_pos_2(b_3, f_5, h_5, sol_1, sol_2, sol_3, sol_4);
                turn_3_pos_3(c_3, e_6, g_6, sol_1, sol_2, sol_3, sol_4);
                turn_3_pos_4(d_3, f_6, h_6, sol_1, sol_2, sol_3, sol_4);
                if(a_3==sol_1&&b_3==sol_2&&c_3==sol_3&&d_3==sol_4){
                    turn_count=turn_count+7;
                    win=true;
                }
            }else if(turn_count==4){
                //Turn 4 Stuff
                cout<<"Turn 4 - Enter 4 Colors:"<<endl;
                cin>>a_4>>b_4>>c_4>>d_4;
                turn_4_pos_1(a_4, e_7, g_7, sol_1, sol_2, sol_3, sol_4);
                turn_4_pos_2(b_4, f_7, h_7, sol_1, sol_2, sol_3, sol_4);
                turn_4_pos_3(c_4, e_8, g_8, sol_1, sol_2, sol_3, sol_4);
                turn_4_pos_4(d_4, f_8, h_8, sol_1, sol_2, sol_3, sol_4);
                if(a_4==sol_1&&b_4==sol_2&&c_4==sol_3&&d_4==sol_4){
                    turn_count=turn_count+6;
                    win=true;
                }
            }else if(turn_count==5){
                //Turn 5 Stuff
                cout<<"Turn 5 - Enter 4 Colors:"<<endl;
                cin>>a_5>>b_5>>c_5>>d_5;
                turn_5_pos_1(a_5, e_9, g_9, sol_1, sol_2, sol_3, sol_4);
                turn_5_pos_2(b_5, f_9, h_9, sol_1, sol_2, sol_3, sol_4);
                turn_5_pos_3(c_5, e_10, g_10, sol_1, sol_2, sol_3, sol_4);
                turn_5_pos_4(d_5, f_10, h_10, sol_1, sol_2, sol_3, sol_4);
                if(a_5==sol_1&&b_5==sol_2&&c_5==sol_3&&d_5==sol_4){
                    turn_count=turn_count+5;
                    win=true;
                }
            }else if(turn_count==6){
                //Turn 6 Stuff
                cout<<"Turn 6 - Enter 4 Colors:"<<endl;
                cin>>a_6>>b_6>>c_6>>d_6;
                turn_6_pos_1(a_6, e_11, g_11, sol_1, sol_2, sol_3, sol_4);
                turn_6_pos_2(b_6, f_11, h_11, sol_1, sol_2, sol_3, sol_4);
                turn_6_pos_3(c_6, e_12, g_12, sol_1, sol_2, sol_3, sol_4);
                turn_6_pos_4(d_6, f_12, h_12, sol_1, sol_2, sol_3, sol_4);
                if(a_6==sol_1&&b_6==sol_2&&c_6==sol_3&&d_6==sol_4){
                    turn_count=turn_count+4;
                    win=true;
                }
            }else if(turn_count==7){
                //Turn 7 Stuff
                cout<<"Turn 7 - Enter 4 Colors:"<<endl;
                cin>>a_7>>b_7>>c_7>>d_7;
                turn_7_pos_1(a_7, e_13, g_13, sol_1, sol_2, sol_3, sol_4);
                turn_7_pos_2(b_7, f_13, h_13, sol_1, sol_2, sol_3, sol_4);
                turn_7_pos_3(c_7, e_14, g_14, sol_1, sol_2, sol_3, sol_4);
                turn_7_pos_4(d_7, f_14, h_14, sol_1, sol_2, sol_3, sol_4);
                if(a_7==sol_1&&b_7==sol_2&&c_7==sol_3&&d_7==sol_4){
                    turn_count=turn_count+3;
                    win=true;
                }
            }else if(turn_count==8){
                //Turn 8 Stuff
                cout<<"Turn 8 - Enter 4 Colors:"<<endl;
                cin>>a_8>>b_8>>c_8>>d_8;
                turn_8_pos_1(a_8, e_15, g_15, sol_1, sol_2, sol_3, sol_4);
                turn_8_pos_2(b_8, f_15, h_15, sol_1, sol_2, sol_3, sol_4);
                turn_8_pos_3(c_8, e_16, g_16, sol_1, sol_2, sol_3, sol_4);
                turn_8_pos_4(d_8, f_16, h_16, sol_1, sol_2, sol_3, sol_4);
                if(a_8==sol_1&&b_8==sol_2&&c_8==sol_3&&d_8==sol_4){
                    turn_count=turn_count+2;
                    win=true;
                }
            }else if(turn_count==9){
                //Turn 9 Stuff
                cout<<"Turn 9 - Enter 4 Colors:"<<endl;
                cin>>a_9>>b_9>>c_9>>d_9;
                turn_9_pos_1(a_9, e_17, g_17, sol_1, sol_2, sol_3, sol_4);
                turn_9_pos_2(b_9, f_17, h_17, sol_1, sol_2, sol_3, sol_4);
                turn_9_pos_3(c_9, e_18, g_18, sol_1, sol_2, sol_3, sol_4);
                turn_9_pos_4(d_9, f_18, h_18, sol_1, sol_2, sol_3, sol_4);
                if(a_9==sol_1&&b_9==sol_2&&c_9==sol_3&&d_9==sol_4){
                    turn_count++;
                    win=true;
                }
            }else{
                //Turn 10 Stuff
                cout<<"Turn 10 - Enter 4 Colors:"<<endl;
                cin>>a_10>>b_10>>c_10>>d_10;
                turn_10_pos_1(a_10, e_19, g_19, sol_1, sol_2, sol_3, sol_4);
                turn_10_pos_2(b_10, f_19, h_19, sol_1, sol_2, sol_3, sol_4);
                turn_10_pos_3(c_10, e_20, g_20, sol_1, sol_2, sol_3, sol_4);
                turn_10_pos_4(d_10, f_20, h_20, sol_1, sol_2, sol_3, sol_4);
                if(a_10==sol_1&&b_10==sol_2&&c_10==sol_3&&d_10==sol_4){
                    win=true;
                }
            }
        }
        if(win==true){
            cout<<"You Win!"<<endl;
        }
        else
        {
            cout<<"You Lose!"<<endl;
        }
        cout<<"Would you like to run the game again (Yes/No)?"<<endl;
        cin>>exit;
    }while(exit=="Yes"||exit=="yes");
    //Exit Stage Right!!
    return 0;
}

void turn_1_pos_1(char a_1, char& e_1, char& g_1,char sol_1, char sol_2, char sol_3, char sol_4){
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
}

void turn_1_pos_2(char b_1, char& f_1, char& h_1,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_1==sol_2){
        f_1='B';
    }
    else
    {
        f_1=' ';
    }
    if (b_1==sol_1||b_1==sol_3||b_1==sol_4){
        h_1='W';
    }
    else
    {
        h_1=' ';
    }
}

void turn_1_pos_3(char c_1, char& e_2, char& g_2,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_1==sol_3){
        e_2='B';
    }
    else
    {
        e_2=' ';
    }
    if (c_1==sol_1||c_1==sol_2||c_1==sol_4){
        g_2='W';
    }
    else
    {
        g_2=' ';
    }
}

void turn_1_pos_4(char d_1, char& f_2, char& h_2,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_1==sol_4){
        f_2='B';
    }
    else
    {
        f_2=' ';
    }
    if (d_1==sol_1||d_1==sol_2||d_1==sol_3){
        h_2='W';
    }
    else
    {
        h_2=' ';
    }
}

void turn_2_pos_1(char a_2, char& e_3, char& g_3,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_2==sol_1){
        e_3='B';
    }
    else
    {
        e_3=' ';
    }
    if (a_2==sol_2||a_2==sol_3||a_2==sol_4){
        g_3='W';
    }
    else
    {
        g_3=' ';
    }
}

void turn_2_pos_2(char b_2, char& f_3, char& h_3,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_2==sol_2){
        f_3='B';
    }
    else
    {
        f_3=' ';
    }
    if (b_2==sol_1||b_2==sol_3||b_2==sol_4){
        h_3='W';
    }
    else
    {
        h_3=' ';
    }
}

void turn_2_pos_3(char c_2, char& e_4, char& g_4,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_2==sol_3){
        e_4='B';
    }
    else
    {
        e_4=' ';
    }
    if (c_2==sol_1||c_2==sol_2||c_2==sol_4){
        g_4='W';
    }
    else
    {
        g_4=' ';
    }
}

void turn_2_pos_4(char d_2, char& f_4, char& h_4,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_2==sol_4){
        f_4='B';
    }
    else
    {
        f_4=' ';
    }
    if (d_2==sol_1||d_2==sol_2||d_2==sol_3){
        h_4='W';
    }
    else
    {
        h_4=' ';
    }
}

void turn_3_pos_1(char a_3, char& e_5, char& g_5,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_3==sol_1){
        e_5='B';
    }
    else
    {
        e_5=' ';
    }
    if (a_3==sol_2||a_3==sol_3||a_3==sol_4){
        g_5='W';
    }
    else
    {
        g_5=' ';
    }
}

void turn_3_pos_2(char b_3, char& f_5, char& h_5,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_3==sol_2){
        f_5='B';
    }
    else
    {
        f_5=' ';
    }
    if (b_3==sol_1||b_3==sol_3||b_3==sol_4){
        h_5='W';
    }
    else
    {
        h_5=' ';
    }
}

void turn_3_pos_3(char c_3, char& e_6, char& g_6,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_3==sol_3){
        e_6='B';
    }
    else
    {
        e_6=' ';
    }
    if (c_3==sol_1||c_3==sol_2||c_3==sol_4){
        g_6='W';
    }
    else
    {
        g_6=' ';
    }
}

void turn_3_pos_4(char d_3, char& f_6, char& h_6,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_3==sol_4){
        f_6='B';
    }
    else
    {
        f_6=' ';
    }
    if (d_3==sol_1||d_3==sol_2||d_3==sol_3){
        h_6='W';
    }
    else
    {
        h_6=' ';
    }
}

void turn_4_pos_1(char a_4, char& e_7, char& g_7,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_4==sol_1){
        e_7='B';
    }
    else
    {
        e_7=' ';
    }
    if (a_4==sol_2||a_4==sol_3||a_4==sol_4){
        g_7='W';
    }
    else
    {
        g_7=' ';
    }
}

void turn_4_pos_2(char b_4, char& f_7, char& h_7,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_4==sol_2){
        f_7='B';
    }
    else
    {
        f_7=' ';
    }
    if (b_4==sol_1||b_4==sol_3||b_4==sol_4){
        h_7='W';
    }
    else
    {
        h_7=' ';
    }
}

void turn_4_pos_3(char c_4, char& e_8, char& g_8,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_4==sol_3){
        e_8='B';
    }
    else
    {
        e_8=' ';
    }
    if (c_4==sol_1||c_4==sol_2||c_4==sol_4){
        g_8='W';
    }
    else
    {
        g_8=' ';
    }
}

void turn_4_pos_4(char d_4, char& f_8, char& h_8,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_4==sol_4){
        f_8='B';
    }
    else
    {
        f_8=' ';
    }
    if (d_4==sol_1||d_4==sol_2||d_4==sol_3){
        h_8='W';
    }
    else
    {
        h_8=' ';
    }
}

void turn_5_pos_1(char a_5, char& e_9, char& g_9,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_5==sol_1){
        e_9='B';
    }
    else
    {
        e_9=' ';
    }
    if (a_5==sol_2||a_5==sol_3||a_5==sol_4){
        g_9='W';
    }
    else
    {
        g_9=' ';
    }
}

void turn_5_pos_2(char b_5, char& f_9, char& h_9,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_5==sol_2){
        f_9='B';
    }
    else
    {
        f_9=' ';
    }
    if (b_5==sol_1||b_5==sol_3||b_5==sol_4){
        h_9='W';
    }
    else
    {
        h_9=' ';
    }
}

void turn_5_pos_3(char c_5, char& e_10, char& g_10,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_5==sol_3){
        e_10='B';
    }
    else
    {
        e_10=' ';
    }
    if (c_5==sol_1||c_5==sol_2||c_5==sol_4){
        g_10='W';
    }
    else
    {
        g_10=' ';
    }
}

void turn_5_pos_4(char d_5, char& f_10, char& h_10,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_5==sol_4){
        f_10='B';
    }
    else
    {
        f_10=' ';
    }
    if (d_5==sol_1||d_5==sol_2||d_5==sol_3){
        h_10='W';
    }
    else
    {
        h_10=' ';
    }
}

void turn_6_pos_1(char a_6, char& e_11, char& g_11,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_6==sol_1){
        e_11='B';
    }
    else
    {
        e_11=' ';
    }
    if (a_6==sol_2||a_6==sol_3||a_6==sol_4){
        g_11='W';
    }
    else
    {
        g_11=' ';
    }
}

void turn_6_pos_2(char b_6, char& f_11, char& h_11,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_6==sol_2){
        f_11='B';
    }
    else
    {
        f_11=' ';
    }
    if (b_6==sol_1||b_6==sol_3||b_6==sol_4){
        h_11='W';
    }
    else
    {
        h_11=' ';
    }
}

void turn_6_pos_3(char c_6, char& e_12, char& g_12,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_6==sol_3){
        e_12='B';
    }
    else
    {
        e_12=' ';
    }
    if (c_6==sol_1||c_6==sol_2||c_6==sol_4){
        g_12='W';
    }
    else
    {
        g_12=' ';
    }
}

void turn_6_pos_4(char d_6, char& f_12, char& h_12,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_6==sol_4){
        f_12='B';
    }
    else
    {
        f_12=' ';
    }
    if (d_6==sol_1||d_6==sol_2||d_6==sol_3){
        h_12='W';
    }
    else
    {
        h_12=' ';
    }
}

void turn_7_pos_1(char a_7, char& e_13, char& g_13,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_7==sol_1){
        e_13='B';
    }
    else
    {
        e_13=' ';
    }
    if (a_7==sol_2||a_7==sol_3||a_7==sol_4){
        g_13='W';
    }
    else
    {
        g_13=' ';
    }
}

void turn_7_pos_2(char b_7, char& f_13, char& h_13,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_7==sol_2){
        f_13='B';
    }
    else
    {
        f_13=' ';
    }
    if (b_7==sol_1||b_7==sol_3||b_7==sol_4){
        h_13='W';
    }
    else
    {
        h_13=' ';
    }
}

void turn_7_pos_3(char c_7, char& e_14, char& g_14,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_7==sol_3){
        e_14='B';
    }
    else
    {
        e_14=' ';
    }
    if (c_7==sol_1||c_7==sol_2||c_7==sol_4){
        g_14='W';
    }
    else
    {
        g_14=' ';
    }
}

void turn_7_pos_4(char d_7, char& f_14, char& h_14,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_7==sol_4){
        f_14='B';
    }
    else
    {
        f_14=' ';
    }
    if (d_7==sol_1||d_7==sol_2||d_7==sol_3){
        h_14='W';
    }
    else
    {
        h_14=' ';
    }
}

void turn_8_pos_1(char a_8, char& e_15, char& g_15,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_8==sol_1){
        e_15='B';
    }
    else
    {
        e_15=' ';
    }
    if (a_8==sol_2||a_8==sol_3||a_8==sol_4){
        g_15='W';
    }
    else
    {
        g_15=' ';
    }
}

void turn_8_pos_2(char b_8, char& f_15, char& h_15,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_8==sol_2){
        f_15='B';
    }
    else
    {
        f_15=' ';
    }
    if (b_8==sol_1||b_8==sol_3||b_8==sol_4){
        h_15='W';
    }
    else
    {
        h_15=' ';
    }
}

void turn_8_pos_3(char c_8, char& e_16, char& g_16,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_8==sol_3){
        e_16='B';
    }
    else
    {
        e_16=' ';
    }
    if (c_8==sol_1||c_8==sol_2||c_8==sol_4){
        g_16='W';
    }
    else
    {
        g_16=' ';
    }
}

void turn_8_pos_4(char d_8, char& f_16, char& h_16,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_8==sol_4){
        f_16='B';
    }
    else
    {
        f_16=' ';
    }
    if (d_8==sol_1||d_8==sol_2||d_8==sol_3){
        h_16='W';
    }
    else
    {
        h_16=' ';
    }
}

void turn_9_pos_1(char a_9, char& e_17, char& g_17,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_9==sol_1){
        e_17='B';
    }
    else
    {
        e_17=' ';
    }
    if (a_9==sol_2||a_9==sol_3||a_9==sol_4){
        g_17='W';
    }
    else
    {
        g_17=' ';
    }
}

void turn_9_pos_2(char b_9, char& f_17, char& h_17,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_9==sol_2){
        f_17='B';
    }
    else
    {
        f_17=' ';
    }
    if (b_9==sol_1||b_9==sol_3||b_9==sol_4){
        h_17='W';
    }
    else
    {
        h_17=' ';
    }
}

void turn_9_pos_3(char c_9, char& e_18, char& g_18,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_9==sol_3){
        e_18='B';
    }
    else
    {
        e_18=' ';
    }
    if (c_9==sol_1||c_9==sol_2||c_9==sol_4){
        g_18='W';
    }
    else
    {
        g_18=' ';
    }
}

void turn_9_pos_4(char d_9, char& f_18, char& h_18,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_9==sol_4){
        f_18='B';
    }
    else
    {
        f_18=' ';
    }
    if (d_9==sol_1||d_9==sol_2||d_9==sol_3){
        h_18='W';
    }
    else
    {
        h_18=' ';
    }
}

void turn_10_pos_1(char a_10, char& e_19, char& g_19,char sol_1, char sol_2, char sol_3, char sol_4){
    if (a_10==sol_1){
        e_19='B';
    }
    else
    {
        e_19=' ';
    }
    if (a_10==sol_2||a_10==sol_3||a_10==sol_4){
        g_19='W';
    }
    else
    {
        g_19=' ';
    }
}

void turn_10_pos_2(char b_10, char& f_19, char& h_19,char sol_1, char sol_2, char sol_3, char sol_4){
    if (b_10==sol_2){
        f_19='B';
    }
    else
    {
        f_19=' ';
    }
    if (b_10==sol_1||b_10==sol_3||b_10==sol_4){
        h_19='W';
    }
    else
    {
        h_19=' ';
    }
}

void turn_10_pos_3(char c_10, char& e_20, char& g_20,char sol_1, char sol_2, char sol_3, char sol_4){
    if (c_10==sol_3){
        e_20='B';
    }
    else
    {
        e_20=' ';
    }
    if (c_10==sol_1||c_10==sol_2||c_10==sol_4){
        g_20='W';
    }
    else
    {
        g_20=' ';
    }
}

void turn_10_pos_4(char d_10, char& f_20, char& h_20,char sol_1, char sol_2, char sol_3, char sol_4){
    if (d_10==sol_4){
        f_20='B';
    }
    else
    {
        f_20=' ';
    }
    if (d_10==sol_1||d_10==sol_2||d_10==sol_3){
        h_20='W';
    }
    else
    {
        h_20=' ';
    }
}