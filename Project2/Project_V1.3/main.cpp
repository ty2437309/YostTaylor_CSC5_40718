/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on February 05, 2015, 19:25
 * Purpose: Project 2 Ver 1.3
 * Changes: Addition of arrays/framework. Updated logic.
 */

//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
//Standard Mastermind Always Has 6 Colors
const int NCOLOR=6;
const int NSOL=4;
//Function Prototypes
    //Menu Option Functions
void game();
void rules();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int option;
    string exit;
    //Prompt Player
    cout<<"      Welcome to the game of Mastermind!       "<<endl;
    cout<<"Break the Computer's code before turns run out!"<<endl;
    cout<<"Do you feel up to the challenge?"<<endl;
    do{
        cout<<" [1] Play Game!"<<endl;
        cout<<" [2] Game Rules"<<endl;
        cout<<" [3] Exit Game"<<endl;
        cout<<"Type the number of your choice, then press enter!"<<endl;
        cin>>option;    
        switch(option){
            case 1:{
                cout<<"Play Game!"<<endl;
                game();
            }break;
            case 2:{
                rules();
            }break;
            case 3:{
                //Exit Program
            }break;
            default:{
                cout<<"Invalid Choice! Exiting Mastermind..."<<endl;
            }
        }
        cout<<"About to exit the game, are you sure? (Yes/No)"<<endl;
        cin>>exit;
    }while(exit=="No"||exit=="no");
    //Exit Stage Right!!
    return(0);
}

void game(){
    //Declare Variables & Initialize
        //Code-maker Variables
    char pass;
    unsigned int cdindx=0;
    char sol[NSOL]={' ', ' ', ' ', ' '};
    char code[NCOLOR]={'R', 'O', 'Y', 'G', 'B', 'P'};
        //Output Variables
    char turn1[NSOL]={' ', ' ', ' ', ' '}, turn2[NSOL]={' ', ' ', ' ', ' '};
    char turn3[NSOL]={' ', ' ', ' ', ' '}, turn4[NSOL]={' ', ' ', ' ', ' '};
    char turn5[NSOL]={' ', ' ', ' ', ' '}, turn6[NSOL]={' ', ' ', ' ', ' '};
    char turn7[NSOL]={' ', ' ', ' ', ' '}, turn8[NSOL]={' ', ' ', ' ', ' '};
    char turn9[NSOL]={' ', ' ', ' ', ' '}, turn10[NSOL]={' ', ' ', ' ', ' '};
    char e_1=' ', e_2=' ', e_3=' ', e_4=' ', e_5=' ';
    char e_6=' ', e_7=' ', e_8=' ', e_9=' ', e_10=' ';
    char f_1=' ', f_2=' ', f_3=' ', f_4=' ', f_5=' ';
    char f_6=' ', f_7=' ', f_8=' ', f_9=' ', f_10=' ';
    char e_11=' ', e_12=' ', e_13=' ', e_14=' ', e_15=' ';
    char e_16=' ', e_17=' ', e_18=' ', e_19=' ', e_20=' ';
    char f_11=' ', f_12=' ', f_13=' ', f_14=' ', f_15=' ';
    char f_16=' ', f_17=' ', f_18=' ', f_19=' ', f_20=' ';
        //Loop Variables
    bool win=false;
    //Computer Makes Code
    srand(static_cast<unsigned int>(time(0)));
    for(cdindx=0; cdindx<=3; cdindx++){
        pass=rand()%NCOLOR;
        sol[cdindx]=code[pass];
    }
    //Turns Begin Here!
    for (int turn_count=1; turn_count<=11; turn_count++){
        cout<<"        // Mastermind // "<<endl;
        cout<<"Turns ~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"  1   | "<<turn1[0]<<"| "<<turn1[1]<<"| "<<turn1[2]<<"| "<<turn1[3]<<"|"<<e_1<<" | "<<f_1<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_2<<" | "<<f_2<<"|"<<endl;
        cout<<"  2   | "<<turn2[0]<<"| "<<turn2[1]<<"| "<<turn2[2]<<"| "<<turn2[3]<<"|"<<e_3<<" | "<<f_3<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_4<<" | "<<f_4<<"|"<<endl;
        cout<<"  3   | "<<turn3[0]<<"| "<<turn3[1]<<"| "<<turn3[2]<<"| "<<turn3[3]<<"|"<<e_5<<" | "<<f_5<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_6<<" | "<<f_6<<"|"<<endl;
        cout<<"  4   | "<<turn4[0]<<"| "<<turn4[1]<<"| "<<turn4[2]<<"| "<<turn4[3]<<"|"<<e_7<<" | "<<f_7<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_8<<" | "<<f_8<<"|"<<endl;
        cout<<"  5   | "<<turn5[0]<<"| "<<turn5[1]<<"| "<<turn5[2]<<"| "<<turn5[3]<<"|"<<e_9<<" | "<<f_9<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_10<<" | "<<f_10<<"|"<<endl;
        cout<<"  6   | "<<turn6[0]<<"| "<<turn6[1]<<"| "<<turn6[2]<<"| "<<turn6[3]<<"|"<<e_11<<" | "<<f_11<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_12<<" | "<<f_12<<"|"<<endl;
        cout<<"  7   | "<<turn7[0]<<"| "<<turn7[1]<<"| "<<turn7[2]<<"| "<<turn7[3]<<"|"<<e_13<<" | "<<f_13<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_14<<" | "<<f_14<<"|"<<endl;
        cout<<"  8   | "<<turn8[0]<<"| "<<turn8[1]<<"| "<<turn8[2]<<"| "<<turn8[3]<<"|"<<e_15<<" | "<<f_15<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_16<<" | "<<f_16<<"|"<<endl;
        cout<<"  9   | "<<turn9[0]<<"| "<<turn9[1]<<"| "<<turn9[2]<<"| "<<turn9[3]<<"|"<<e_17<<" | "<<f_17<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<e_18<<" | "<<f_18<<"|"<<endl;
        cout<<"  10  | "<<turn10[0]<<"| "<<turn10[1]<<"| "<<turn10[2]<<"| "<<turn10[3]<<"|"<<e_19<<" | "<<f_19<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                        <<e_20<<" | "<<f_20<<"|"<<endl;
        cout<<"      ~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        //Turn Feedback Begins Here!
        if(turn_count==11){
            //Prints Last Turn Before Loop Ends
            turn_count++;
        }else if(turn_count==1){
            //Turn 1 Stuff
            cout<<"Turn 1!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;         
            cin>>turn1[0]>>turn1[1]>>turn1[2]>>turn1[3];
            if(a_1==sol_1&&b_1==sol_2&&c_1==sol_3&&d_1==sol_4){
                turn_count=turn_count+9;
                win=true;
            }
        }else if(turn_count==2){
            //Turn 2 Stuff
            cout<<"Turn 2!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn2[0]>>turn2[1]>>turn2[2]>>turn2[3];
            if(a_2==sol_1&&b_2==sol_2&&c_2==sol_3&&d_2==sol_4){
                turn_count=turn_count+8;
                win=true;
            }
        }else if(turn_count==3){
            //Turn 3 Stuff
            cout<<"Turn 3!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn3[0]>>turn3[1]>>turn3[2]>>turn3[3];
            if(a_3==sol_1&&b_3==sol_2&&c_3==sol_3&&d_3==sol_4){
                turn_count=turn_count+7;
                win=true;
            }
        }else if(turn_count==4){
            //Turn 4 Stuff
            cout<<"Turn 4!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn4[0]>>turn4[1]>>turn4[2]>>turn4[3];
            if(a_4==sol_1&&b_4==sol_2&&c_4==sol_3&&d_4==sol_4){
                turn_count=turn_count+6;
                win=true;
            }
        }else if(turn_count==5){
            //Turn 5 Stuff
            cout<<"Turn 5!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn5[0]>>turn5[1]>>turn5[2]>>turn5[3];
            if(a_5==sol_1&&b_5==sol_2&&c_5==sol_3&&d_5==sol_4){
                turn_count=turn_count+5;
                win=true;
            }
        }else if(turn_count==6){
            //Turn 6 Stuff
            cout<<"Turn 6!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn6[0]>>turn6[1]>>turn6[2]>>turn6[3];
            if(a_6==sol_1&&b_6==sol_2&&c_6==sol_3&&d_6==sol_4){
                turn_count=turn_count+4;
                win=true;
            }
        }else if(turn_count==7){
            //Turn 7 Stuff
            cout<<"Turn 7!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn7[0]>>turn7[1]>>turn7[2]>>turn7[3];
            if(a_7==sol_1&&b_7==sol_2&&c_7==sol_3&&d_7==sol_4){
                turn_count=turn_count+3;
                win=true;
            }
        }else if(turn_count==8){
            //Turn 8 Stuff
            cout<<"Turn 8!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn8[0]>>turn8[1]>>turn8[2]>>turn8[3];
            if(a_8==sol_1&&b_8==sol_2&&c_8==sol_3&&d_8==sol_4){
                turn_count=turn_count+2;
                win=true;
            }
        }else if(turn_count==9){
            //Turn 9 Stuff
            cout<<"Turn 9!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn9[0]>>turn9[1]>>turn9[2]>>turn9[3];
            if(a_9==sol_1&&b_9==sol_2&&c_9==sol_3&&d_9==sol_4){
                turn_count++;
                win=true;
            }
        }else{
            //Turn 10 Stuff
            int last_chance=0;
            cout<<"Turn 10!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn10[0]>>turn10[1]>>turn10[2]>>turn10[3];
            while(last_chance==0){
                cout<<"This is your last chance!! Are you sure?"<<endl;
                cout<<" [1] Retry Input"<<endl;
                cout<<"Or, press any other number to continue..."<<endl;
                cin>>last_chance;
                switch(last_chance){
                    case 1:{
                        cout<<"Second Try:"<<endl;
                        cin>>turn10[0]>>turn10[1]>>turn10[2]>>turn10[3];                        
                    }break;
                    default:{
                        //Continue To End
                    }
                }
            }
            if(a_10==sol_1&&b_10==sol_2&&c_10==sol_3&&d_10==sol_4){
                win=true;
            }
        }
    }
    if(win==true){
        cout<<"You Win!"<<endl;
        cout<<"You are a Mastermind!"<<endl;
    }
    else
    {
        cout<<"You Lose!"<<endl;
        cout<<"Maybe logic isn't your strong suit..."<<endl;
    }
}

void rules(){
    //Declare Variables
    char write;
    float n1=355, n2=113;
    //Declare a File Object
    ofstream output;
    //Output Rules
    cout<<endl;
    cout<<"Rules of Mastermind:"<<endl;
    cout<<endl;
    cout<<"The game of Mastermind is played with two players. One player is"<<endl;
    cout<<"the Code-Maker, while one is the Code-Breaker. The goal of the"<<endl;
    cout<<"Code-Breaker is to guess the code made by the Code-Maker. Should"<<endl;
    cout<<"the Code-Breaker fail to guess correctly within ten turns, the"<<endl;
    cout<<"game is lost and you may play again."<<endl;
    cout<<endl;
    cout<<"Job of Code-Breaker: The Code-Breaker will have to guess both the"<<endl;
    cout<<"correct color and order of the code. Using feedback from the"<<endl;
    cout<<"Code-Maker, the Code-Breaker can use logic to reveal the correct"<<endl;
    cout<<"code. Valid colors are as follows; Red(R), Orange(O), Yellow(Y),"<<endl;
    cout<<"Green(G), Blue(B), and Purple(P). Colors may be repeated, and are"<<endl;
    cout<<"random."<<endl;
    cout<<endl;
    cout<<"Feedback: The Code-Maker gives feedback to the Code-Breaker with"<<endl;
    cout<<"two colors. Black(B) means that the Code-Breaker has guessed a"<<endl;
    cout<<"correct color, and that it is in the right position. White(W)"<<endl;
    cout<<"means that the Code-Breaker has guessed a correct color, but it"<<endl;
    cout<<"is in the wrong position."<<endl;
    cout<<endl;
    cout<<"Would you like to write the rules to a file for easy viewing"<<endl;
    cout<<"in game? (Y/N)"<<endl;
    cin>>write;
    if(write=='Y'||write=='y'){
        output.open("MastermindRules.txt");
        output<<"Rules of Mastermind:"<<endl;
        output<<endl;
        output<<"The game of Mastermind is played with two players. One player is"<<endl;
        output<<"the Code-Maker, while one is the Code-Breaker. The goal of the"<<endl;
        output<<"Code-Breaker is to guess the code made by the Code-Maker. Should"<<endl;
        output<<"the Code-Breaker fail to guess correctly within ten turns, the"<<endl;
        output<<"game is lost and you may play again."<<endl;
        output<<endl;
        output<<"Job of Code-Breaker: The Code-Breaker will have to guess both the"<<endl;
        output<<"correct color and order of the code. Using feedback from the"<<endl;
        output<<"Code-Maker, the Code-Breaker can use logic to reveal the correct"<<endl;
        output<<"code. Valid colors are as follows; Red(R), Orange(O), Yellow(Y),"<<endl;
        output<<"Green(G), Blue(B), and Purple(P). Colors may be repeated, and are"<<endl;
        output<<"random."<<endl;
        output<<endl;
        output<<"Feedback: The Code-Maker gives feedback to the Code-Breaker with"<<endl;
        output<<"two colors. Black(B) means that the Code-Breaker has guessed a"<<endl;
        output<<"correct color, and that it is in the right position. White(W)"<<endl;
        output<<"means that the Code-Breaker has guessed a correct color, but it"<<endl;
        output<<"is in the wrong position."<<endl;
        output<<fixed<<setprecision(2)<<showpoint;
        output<<"Universe Check...is PI still PI?? "<<n1/n2<<endl;
        output.close();
    }
}