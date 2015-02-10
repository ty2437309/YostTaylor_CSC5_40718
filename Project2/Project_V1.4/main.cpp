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
//Standard Mastermind Always Has 6 Colors, 4 Solutions
const int NCOLOR=6;
const int NSOL=4;
const int FBCKR=20; //Feedback Block Rows
const int FBCKC=2;  //Feedback Block Columns
//Function Prototypes
    //Menu Option Functions
void game();
void rules();
void feedback1(char[], char[], int&, int&);
void feedback2(char[], char[], int&, int&);
void feedback3(char[], char[], int&, int&);
void feedback4(char[], char[], int&, int&);
void feedback5(char[], char[], int&, int&);
void feedback6(char[], char[], int&, int&);
void feedback7(char[], char[], int&, int&);
void feedback8(char[], char[], int&, int&);
void feedback9(char[], char[], int&, int&);
void feedback10(char[], char[], int&, int&);
bool feedbackout(char [FBCKR][FBCKC], bool, int&, int&, int, int, int, int);
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
    char fbck[FBCKR][FBCKC]={' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                             ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                             ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                             ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' '};
        //Loop Variables
    bool win=false;
        //Feedback Control Variables
    int black=0, white=0;
    //Computer Makes Code
    srand(static_cast<unsigned int>(time(0)));
    for(cdindx=0; cdindx<=3; cdindx++){
        pass=rand()%NCOLOR;
        sol[cdindx]=code[pass];
    }
    //Turns Begin Here!
    for(int turn_count=1;turn_count<=11;turn_count++){
        cout<<"        // Mastermind // "<<endl;
        cout<<"Turns ~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"  1   | "<<turn1[0]<<"| "<<turn1[1]<<"| "<<turn1[2]<<"| "<<turn1[3]<<"|"<<fbck[0][0]<<" | "<<fbck[0][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[1][0]<<" | "<<fbck[1][1]<<"|"<<endl;
        cout<<"  2   | "<<turn2[0]<<"| "<<turn2[1]<<"| "<<turn2[2]<<"| "<<turn2[3]<<"|"<<fbck[2][0]<<" | "<<fbck[2][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[3][0]<<" | "<<fbck[3][1]<<"|"<<endl;
        cout<<"  3   | "<<turn3[0]<<"| "<<turn3[1]<<"| "<<turn3[2]<<"| "<<turn3[3]<<"|"<<fbck[4][0]<<" | "<<fbck[4][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[5][0]<<" | "<<fbck[5][1]<<"|"<<endl;
        cout<<"  4   | "<<turn4[0]<<"| "<<turn4[1]<<"| "<<turn4[2]<<"| "<<turn4[3]<<"|"<<fbck[6][0]<<" | "<<fbck[6][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[7][0]<<" | "<<fbck[7][1]<<"|"<<endl;
        cout<<"  5   | "<<turn5[0]<<"| "<<turn5[1]<<"| "<<turn5[2]<<"| "<<turn5[3]<<"|"<<fbck[8][0]<<" | "<<fbck[8][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[9][0]<<" | "<<fbck[9][1]<<"|"<<endl;
        cout<<"  6   | "<<turn6[0]<<"| "<<turn6[1]<<"| "<<turn6[2]<<"| "<<turn6[3]<<"|"<<fbck[10][0]<<" | "<<fbck[10][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[11][0]<<" | "<<fbck[11][1]<<"|"<<endl;
        cout<<"  7   | "<<turn7[0]<<"| "<<turn7[1]<<"| "<<turn7[2]<<"| "<<turn7[3]<<"|"<<fbck[12][0]<<" | "<<fbck[12][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[13][0]<<" | "<<fbck[13][1]<<"|"<<endl;
        cout<<"  8   | "<<turn8[0]<<"| "<<turn8[1]<<"| "<<turn8[2]<<"| "<<turn8[3]<<"|"<<fbck[14][0]<<" | "<<fbck[14][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[15][0]<<" | "<<fbck[15][1]<<"|"<<endl;
        cout<<"  9   | "<<turn9[0]<<"| "<<turn9[1]<<"| "<<turn9[2]<<"| "<<turn9[3]<<"|"<<fbck[16][0]<<" | "<<fbck[16][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                    <<fbck[17][0]<<" | "<<fbck[17][1]<<"|"<<endl;
        cout<<"  10  | "<<turn10[0]<<"| "<<turn10[1]<<"| "<<turn10[2]<<"| "<<turn10[3]<<"|"<<fbck[18][0]<<" | "<<fbck[18][1]<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                                        <<fbck[19][0]<<" | "<<fbck[19][1]<<"|"<<endl;
        cout<<"      ~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        //Turn Feedback Begins Here!
        if(turn_count==11){
            //Prints Last Turn Before Loop Ends
            turn_count++;
        }else if(turn_count==1){
            //Turn 1 Stuff
            //Turn 1 Array Identifiers
            int a=0, b=1, c=0, d=1;
            cout<<"Turn 1!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;         
            cin>>turn1[0]>>turn1[1]>>turn1[2]>>turn1[3];
            feedback1(turn1, sol, black, white);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                break;
            }
        }else if(turn_count==2){
            //Turn 2 Stuff
            //Turn 2 Array Identifiers
            int a=0, b=1, c=2, d=3;
            cout<<"Turn 2!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn2[0]>>turn2[1]>>turn2[2]>>turn2[3];
        }else if(turn_count==3){
            //Turn 3 Stuff
            //Turn 1 Identifiers
            int a=0, b=1, c=4, d=5;
            cout<<"Turn 3!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn3[0]>>turn3[1]>>turn3[2]>>turn3[3];
        }else if(turn_count==4){
            //Turn 4 Stuff
            //Turn 1 Identifiers
            int a=0, b=1, c=6, d=7;
            cout<<"Turn 4!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn4[0]>>turn4[1]>>turn4[2]>>turn4[3];
        }else if(turn_count==5){
            //Turn 5 Stuff
            //Turn 1 Identifiers
            int a=0, b=1, c=8, d=9;
            cout<<"Turn 5!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn5[0]>>turn5[1]>>turn5[2]>>turn5[3];
        }else if(turn_count==6){
            //Turn 6 Stuff
            //Turn 1 Identifiers
            int a=0, b=1, c=10, d=11;
            cout<<"Turn 6!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn6[0]>>turn6[1]>>turn6[2]>>turn6[3];
        }else if(turn_count==7){
            //Turn 7 Stuff
            //Turn 1 Identifiers
            int a=0, b=1, c=12, d=13;
            cout<<"Turn 7!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn7[0]>>turn7[1]>>turn7[2]>>turn7[3];
        }else if(turn_count==8){
            //Turn 8 Stuff
            //Turn 1 Identifiers
            int a=0, b=1, c=14, d=15;
            cout<<"Turn 8!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn8[0]>>turn8[1]>>turn8[2]>>turn8[3];
        }else if(turn_count==9){
            //Turn 9 Stuff
            //Turn 1 Identifiers
            int a=0, b=1, c=16, d=17;
            cout<<"Turn 9!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn9[0]>>turn9[1]>>turn9[2]>>turn9[3];
        }else{
            //Turn 10 Stuff
            //Turn 1 Identifiers
            int a=0, b=1, c=18, d=19;
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

bool feedbackout(char fbck[FBCKR][FBCKC], bool win, int& black, int& white, int a, int b, int c, int d){
    //Begin Box Assignment
    if(black==1&&white==0){
        fbck[c][a]='B'; fbck[c][b]=' '; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==0&&white==1){
        fbck[c][a]='W'; fbck[c][b]=' '; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==1&&white==1){
        fbck[c][a]='B'; fbck[c][b]='W'; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==2&&white==0){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==0&&white==2){
        fbck[c][a]='W'; fbck[c][b]='W'; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==2&&white==2){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]='W'; fbck[d][b]='W';
    }else if(black==3&&white==0){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]='B'; fbck[d][b]=' ';
    }else if(black==0&&white==3){
        fbck[c][a]='W'; fbck[c][b]='W'; fbck[d][a]='W'; fbck[d][b]=' ';
    }else if(black==3&&white==1){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]='B'; fbck[d][b]='W';
    }else if(black==4&&white==0){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]='B'; fbck[d][b]='B';
        win=true;
    }else if(black==0&&white==4){
        fbck[c][a]='W'; fbck[c][b]='W'; fbck[d][a]='W'; fbck[d][b]='W';
    }else if(black==1&&white==3){
        fbck[c][a]='B'; fbck[c][b]='W'; fbck[d][a]='W'; fbck[d][b]='W';
    }else{
        fbck[c][a]=' '; fbck[c][b]=' '; fbck[d][a]=' '; fbck[d][b]=' ';
    }
    black=0;
    white=0;
    return(win);
}

void feedback1(char turn1[], char sol[], int& black, int& white){
    //Declare Variables
    int index=0, temp=0;
    //Check For Black
    for(int index=0;index<=3;index++){
        if(turn1[index]==sol[index]){
            black++;
        }
    }
    //Check For White
    for(int index=0;index<=3;index++){
        if((turn1[index]==sol[0])&&(index!=0)){
            white++;
        }
        if((turn1[index]==sol[1])&&(index!=1)){
            white++;
        }
        if((turn1[index]==sol[2])&&(index!=2)){
            white++;
        }
        if((turn1[index]==sol[3])&&(index!=3)){
            white++;
        }
    }
    //Eliminate Duplicates
    if(black+white>4){
        temp=white-black;
        white=white-temp;
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