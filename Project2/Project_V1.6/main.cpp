/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on February 05, 2015, 19:25
 * Purpose: Project 2 Ver 1.6
 * Changes: Addition of condensed framework. Updated logic.
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
const int NTV=40;   //Number Turn Variables
const int FBCKR=20; //Feedback Block Rows
const int FBCKC=2;  //Feedback Block Columns
//Function Prototypes
    //Menu Option Functions
void game();
void gameout(char [FBCKR][FBCKC], char [], char []);
void feedback(char[], char[], int&, int&, int);
void feedbackout(char [FBCKR][FBCKC], bool&, int, int, int, int, int, int);
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
    char turn[NTV]={' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                    ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                    ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                    ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' '};
    char fbck[FBCKR][FBCKC]={' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                             ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                             ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' ',
                             ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ',' ', ' '};
        //Loop Variables
    bool win=false;
        //Feedback Control Variables
    int a=0, b=1, black=0, white=0;
    //Computer Makes Code
    srand(static_cast<unsigned int>(time(0)));
    for(cdindx=0; cdindx<=3; cdindx++){
        pass=rand()%NCOLOR;
        sol[cdindx]=code[pass];
    }
    //Turns Begin Here!
    for(int turn_count=1;turn_count<=11;turn_count++){
        //Output Board
        gameout(fbck, turn, sol);
        //Turn Feedback Begins Here!
        if(turn_count==11){
            //Prints Last Turn Before Loop Ends
            turn_count++;
        }else if(turn_count==1){
            //Turn 1 Stuff
            //Turn 1 Array Identifiers
            int c=0, d=1;
            cout<<"Turn 1!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;         
            cin>>turn[0]>>turn[1]>>turn[2]>>turn[3];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count=turn_count+9;
            }
        }else if(turn_count==2){
            //Turn 2 Stuff
            //Turn 2 Array Identifiers
            int c=2, d=3, black=0, white=0;
            cout<<"Turn 2!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[4]>>turn[5]>>turn[6]>>turn[7];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count=turn_count+8;
            }
        }else if(turn_count==3){
            //Turn 3 Stuff
            //Turn 3 Array Identifiers
            int c=4, d=5, black=0, white=0;
            cout<<"Turn 3!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[8]>>turn[9]>>turn[10]>>turn[11];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count=turn_count+7;
            }
        }else if(turn_count==4){
            //Turn 4 Stuff
            //Turn 4 Array Identifiers
            int c=6, d=7, black=0, white=0;
            cout<<"Turn 4!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[12]>>turn[13]>>turn[14]>>turn[15];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count=turn_count+6;
            }
        }else if(turn_count==5){
            //Turn 5 Stuff
            //Turn 5 Array Identifiers
            int c=8, d=9, black=0, white=0;
            cout<<"Turn 5!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[16]>>turn[17]>>turn[18]>>turn[19];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count=turn_count+5;
            }
        }else if(turn_count==6){
            //Turn 6 Stuff
            //Turn 6 Array Identifiers
            int c=10, d=11, black=0, white=0;
            cout<<"Turn 6!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[20]>>turn[21]>>turn[22]>>turn[23];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count=turn_count+4;
            }
        }else if(turn_count==7){
            //Turn 7 Stuff
            //Turn 7 Array Identifiers
            int c=12, d=13, black=0, white=0;
            cout<<"Turn 7!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[24]>>turn[25]>>turn[26]>>turn[27];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count=turn_count+3;
            }
        }else if(turn_count==8){
            //Turn 8 Stuff
            //Turn 8 Array Identifiers
            int c=14, d=15, black=0, white=0;
            cout<<"Turn 8!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[28]>>turn[29]>>turn[30]>>turn[31];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count=turn_count+2;
            }
        }else if(turn_count==9){
            //Turn 9 Stuff
            //Turn 9 Array Identifiers
            int c=16, d=17, black=0, white=0;
            cout<<"Turn 9!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[32]>>turn[33]>>turn[34]>>turn[35];
            feedback(turn, sol, black, white, turn_count);
            feedbackout(fbck, win, black, white, a, b, c, d);
            if(win==true){
                turn_count++;
            }
        }else{
            //Turn 10 Stuff
            //Turn 10 Array Identifiers
            int c=18, d=19, last_chance=0, black=0, white=0;
            cout<<"Turn 10!"<<endl;
            cout<<"Acceptable answers are: R, O, Y, G, B, and P."<<endl;
            cout<<"Please enter four color code guess separated"<<endl;
            cout<<"by spaces."<<endl;
            cin>>turn[36]>>turn[37]>>turn[38]>>turn[39];
            while(last_chance==0){
                cout<<"This is your last chance!! Are you sure?"<<endl;
                cout<<" [1] Retry Input"<<endl;
                cout<<"Or, press any other number to continue..."<<endl;
                cin>>last_chance;
                switch(last_chance){
                    case 1:{
                        cout<<"Second Try:"<<endl;
                        cin>>turn[36]>>turn[37]>>turn[38]>>turn[39];                        
                    }break;
                    default:{
                        //Continue To End
                        feedback(turn, sol, black, white, turn_count);
                        feedbackout(fbck, win, black, white, a, b, c, d);
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

void gameout(char fbck[FBCKR][FBCKC], char turn[], char sol[]){
    cout<<"        // Mastermind // "<<endl;
    cout<<"Turns ~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"  1   | "<<turn[0]<<"| "<<turn[1]<<"| "<<turn[2]<<"| "<<turn[3]<<"|"<<fbck[0][0]<<" | "<<fbck[0][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                <<fbck[1][0]<<" | "<<fbck[1][1]<<"|"<<endl;
    cout<<"  2   | "<<turn[4]<<"| "<<turn[5]<<"| "<<turn[6]<<"| "<<turn[7]<<"|"<<fbck[2][0]<<" | "<<fbck[2][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                <<fbck[3][0]<<" | "<<fbck[3][1]<<"|"<<endl;
    cout<<"  3   | "<<turn[8]<<"| "<<turn[9]<<"| "<<turn[10]<<"| "<<turn[11]<<"|"<<fbck[4][0]<<" | "<<fbck[4][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                    <<fbck[5][0]<<" | "<<fbck[5][1]<<"|"<<endl;
    cout<<"  4   | "<<turn[12]<<"| "<<turn[13]<<"| "<<turn[14]<<"| "<<turn[15]<<"|"<<fbck[6][0]<<" | "<<fbck[6][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                    <<fbck[7][0]<<" | "<<fbck[7][1]<<"|"<<endl;
    cout<<"  5   | "<<turn[16]<<"| "<<turn[17]<<"| "<<turn[18]<<"| "<<turn[19]<<"|"<<fbck[8][0]<<" | "<<fbck[8][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                    <<fbck[9][0]<<" | "<<fbck[9][1]<<"|"<<endl;
    cout<<"  6   | "<<turn[20]<<"| "<<turn[21]<<"| "<<turn[22]<<"| "<<turn[23]<<"|"<<fbck[10][0]<<" | "<<fbck[10][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                    <<fbck[11][0]<<" | "<<fbck[11][1]<<"|"<<endl;
    cout<<"  7   | "<<turn[24]<<"| "<<turn[25]<<"| "<<turn[26]<<"| "<<turn[27]<<"|"<<fbck[12][0]<<" | "<<fbck[12][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                    <<fbck[13][0]<<" | "<<fbck[13][1]<<"|"<<endl;
    cout<<"  8   | "<<turn[28]<<"| "<<turn[29]<<"| "<<turn[30]<<"| "<<turn[31]<<"|"<<fbck[14][0]<<" | "<<fbck[14][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                    <<fbck[15][0]<<" | "<<fbck[15][1]<<"|"<<endl;
    cout<<"  9   | "<<turn[32]<<"| "<<turn[33]<<"| "<<turn[34]<<"| "<<turn[35]<<"|"<<fbck[16][0]<<" | "<<fbck[16][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                    <<fbck[17][0]<<" | "<<fbck[17][1]<<"|"<<endl;
    cout<<"  10  | "<<turn[36]<<"| "<<turn[37]<<"| "<<turn[38]<<"| "<<turn[39]<<"|"<<fbck[18][0]<<" | "<<fbck[18][1]<<"|"<<endl;
    cout<<"      |__|__|__|__|"                                                    <<fbck[19][0]<<" | "<<fbck[19][1]<<"|"<<endl;
    cout<<"      ~~~~~~~~~~~~~~~~~~~"<<sol[0]<<sol[1]<<sol[2]<<sol[3]<<endl;
}

void feedbackout(char fbck[FBCKR][FBCKC], bool& win, int black, int white, int a, int b, int c, int d){
    //Feedback Box Assignment
    if(black==1&&white==0){
        fbck[c][a]='B'; fbck[c][b]=' '; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==0&&white==1){
        fbck[c][a]='W'; fbck[c][b]=' '; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==2&&white==0){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==0&&white==2){
        fbck[c][a]='W'; fbck[c][b]='W'; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==1&&white==1){
        fbck[c][a]='B'; fbck[c][b]='W'; fbck[d][a]=' '; fbck[d][b]=' ';
    }else if(black==3&&white==0){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]='B'; fbck[d][b]=' ';
    }else if(black==0&&white==3){
        fbck[c][a]='W'; fbck[c][b]='W'; fbck[d][a]='W'; fbck[d][b]=' ';
    }else if(black==2&&white==2){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]='W'; fbck[d][b]='W';
    }else if(black==3&&white==1){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]='B'; fbck[d][b]='W';
    }else if(black==1&&white==3){
        fbck[c][a]='B'; fbck[c][b]='W'; fbck[d][a]='W'; fbck[d][b]='W';
    }else if(black==0&&white==4){
        fbck[c][a]='W'; fbck[c][b]='W'; fbck[d][a]='W'; fbck[d][b]='W';
    }else if(black==4&&white==0){
        fbck[c][a]='B'; fbck[c][b]='B'; fbck[d][a]='B'; fbck[d][b]='B';
        win=true;    
    }else{
        fbck[c][a]=' '; fbck[c][b]=' '; fbck[d][a]=' '; fbck[d][b]=' ';
    }
}

void feedback(char turn[], char sol[], int& black, int& white, int turn_count){
    //Declare Control Variables
    int index=0, temp=0;
    //Determine What Turn Index To Use
    if(turn_count==1){
        temp=0;
    }else if(turn_count==2){
        temp=4;
    }else if(turn_count==3){
        temp=8;
    }else if(turn_count==4){
        temp=12;
    }else if(turn_count==5){
        temp=16;
    }else if(turn_count==6){
        temp=20;
    }else if(turn_count==7){
        temp=24;
    }else if(turn_count==8){
        temp=28;
    }else if(turn_count==9){
        temp=32;
    }else{
        temp=36;
    }
    cout<<"temp:"<<temp<<endl;
    //Check For Black~White Feedback
    for(int index=temp;index<=(temp+3);index++){
        cout<<"index:"<<index<<endl;
        if(turn[index]==sol[index]){
            black++;
        }
        if(index==temp){
            if((turn[index]==sol[1])&&(turn[index]!=sol[0])&&(turn[index+1]!=sol[1])){
                white++;
            }
            if((turn[index]==sol[2])&&(turn[index]!=sol[0])&&(turn[index+2]!=sol[2])){
                white++;
            }
            if((turn[index]==sol[3])&&(turn[index]!=sol[0])&&(turn[index+3]!=sol[3])){
                white++;
            } 
        }
        if(index==temp+1){
            if((turn[index]==sol[0])&&(turn[index]!=sol[1])&&(turn[index-1]!=sol[0])){
                white++;
            }
            if((turn[index]==sol[2])&&(turn[index]!=sol[1])&&(turn[index+2]!=sol[2])){
                white++;
            }
            if((turn[index]==sol[3])&&(turn[index]!=sol[1])&&(turn[index+3]!=sol[3])){
                white++;
            }
        }
        if(index==temp+2){
            if((turn[index]==sol[0])&&(turn[index]!=sol[2])&&(turn[index-2]!=sol[0])){
                white++;
            }
            if((turn[index]==sol[1])&&(turn[index]!=sol[2])&&(turn[index-1]!=sol[1])){
                white++;
            }
            if((turn[index]==sol[3])&&(turn[index]!=sol[2])&&(turn[index+1]!=sol[3])){
                white++;
            }
        }
        if(index==temp+3){
            if((turn[index]==sol[0])&&(turn[index]!=sol[3])&&(turn[index-3]!=sol[0])){
                white++;
            }
            if((turn[index]==sol[1])&&(turn[index]!=sol[3])&&(turn[index-2]!=sol[1])){
                white++;
            }
            if((turn[index]==sol[2])&&(turn[index]!=sol[3])&&(turn[index-1]!=sol[2])){
                white++;
            }
        }
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