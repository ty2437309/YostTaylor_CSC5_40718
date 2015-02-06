/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on January 28, 2015, 18:06
 * Purpose: Project 2 Ver 1.2
 * Changes: Attempt at addition of arrays.
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
    unsigned int pass_1, pass_2, pass_3, pass_4;
    char sol_1, sol_2, sol_3, sol_4;
    const int SIZE=6;
    char code[SIZE]={'R', 'O', 'Y', 'G', 'B', 'P'};
        //Output Variables
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
    char e_11=' ', e_12=' ', e_13=' ', e_14=' ', e_15=' ';
    char e_16=' ', e_17=' ', e_18=' ', e_19=' ', e_20=' ';
    char f_11=' ', f_12=' ', f_13=' ', f_14=' ', f_15=' ';
    char f_16=' ', f_17=' ', f_18=' ', f_19=' ', f_20=' ';
        //Loop Variables
    bool win=false;
    //Computer Makes Code
    srand(static_cast<unsigned int>(time(0)));
    pass_1=rand()%NCOLOR;
    pass_2=rand()%NCOLOR;
    pass_3=rand()%NCOLOR;
    pass_4=rand()%NCOLOR;
    sol_1=code[pass_1];
    sol_2=code[pass_2];
    sol_3=code[pass_3];    
    sol_4=code[pass_4];
    //Turns Begin Here!
    for (int turn_count=1; turn_count<=11; turn_count++){
        cout<<"        // Mastermind // "<<endl;
        cout<<"Turns ~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"  1   | "<<a_1<<"| "<<b_1<<"| "<<c_1<<"| "<<d_1<<"|"<<e_1<<" | "<<f_1<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                <<e_2<<" | "<<f_2<<"|"<<endl;
        cout<<"  2   | "<<a_2<<"| "<<b_2<<"| "<<c_2<<"| "<<d_2<<"|"<<e_3<<" | "<<f_3<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                <<e_4<<" | "<<f_4<<"|"<<endl;
        cout<<"  3   | "<<a_3<<"| "<<b_3<<"| "<<c_3<<"| "<<d_3<<"|"<<e_5<<" | "<<f_5<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                <<e_6<<" | "<<f_6<<"|"<<endl;
        cout<<"  4   | "<<a_4<<"| "<<b_4<<"| "<<c_4<<"| "<<d_4<<"|"<<e_7<<" | "<<f_7<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                <<e_8<<" | "<<f_8<<"|"<<endl;
        cout<<"  5   | "<<a_5<<"| "<<b_5<<"| "<<c_5<<"| "<<d_5<<"|"<<e_9<<" | "<<f_9<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                <<e_10<<" | "<<f_10<<"|"<<endl;
        cout<<"  6   | "<<a_6<<"| "<<b_6<<"| "<<c_6<<"| "<<d_6<<"|"<<e_11<<" | "<<f_11<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                <<e_12<<" | "<<f_12<<"|"<<endl;
        cout<<"  7   | "<<a_7<<"| "<<b_7<<"| "<<c_7<<"| "<<d_7<<"|"<<e_13<<" | "<<f_13<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                <<e_14<<" | "<<f_14<<"|"<<endl;
        cout<<"  8   | "<<a_8<<"| "<<b_8<<"| "<<c_8<<"| "<<d_8<<"|"<<e_15<<" | "<<f_15<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                <<e_16<<" | "<<f_16<<"|"<<endl;
        cout<<"  9   | "<<a_9<<"| "<<b_9<<"| "<<c_9<<"| "<<d_9<<"|"<<e_17<<" | "<<f_17<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                    <<e_18<<" | "<<f_18<<"|"<<endl;
        cout<<"  10  | "<<a_10<<"| "<<b_10<<"| "<<c_10<<"| "<<d_10<<"|"<<e_19<<" | "<<f_19<<"|"<<endl;
        cout<<"      |__|__|__|__|"                                    <<e_20<<" | "<<f_20<<"|"<<endl;
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
            cin>>a_1>>b_1>>c_1>>d_1;
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
            cin>>a_2>>b_2>>c_2>>d_2;
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
            cin>>a_3>>b_3>>c_3>>d_3;
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
            cin>>a_4>>b_4>>c_4>>d_4;
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
            cin>>a_5>>b_5>>c_5>>d_5;
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
            cin>>a_6>>b_6>>c_6>>d_6;
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
            cin>>a_7>>b_7>>c_7>>d_7;
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
            cin>>a_8>>b_8>>c_8>>d_8;
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
            cin>>a_9>>b_9>>c_9>>d_9;
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
            cin>>a_10>>b_10>>c_10>>d_10;
            while(last_chance==0){
                cout<<"This is your last chance!! Are you sure?"<<endl;
                cout<<" [1] Retry Input"<<endl;
                cout<<"Or, press any other number to continue..."<<endl;
                cin>>last_chance;
                switch(last_chance){
                    case 1:{
                        cout<<"Second Try:"<<endl;
                        cin>>a_10>>b_10>>c_10>>d_10;                        
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