/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on February 08, 2015, 21:34
 * Purpose: Assignment 6 Homework Menu
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
//User Libraries
//Global Constants
const int SIZE=9;
const int COLUMN=30;
const int ROW=10;
//Function Prototypes
void fill_array(char [][COLUMN],int,char);
void output_array(char [][COLUMN],int);
void glider_test(char [][COLUMN],int,int,char);
void output_map(char [][COLUMN],int,char);
void gen_calc(char [][COLUMN],char[][COLUMN],int,char,char);
int  count_neighbors(char [][COLUMN],int,char,int,int);
void delay(int);
string lookupName(string[], string[], string);
void swapFrontBack(int[], int);
int countNum2s(int[], int);
bool firstLast2(int[], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int option;
    string exit;
    //Begin Menu/Do-While
    do{
        cout<<"Taylor Yost - CSC5"<<endl;
        cout<<"Assignment 6, Chapter 7 Homework."<<endl;
        cout<<"Choose a number from the list to test!"<<endl;
        cout<<"**************************************"<<endl;
        cout<<"  1 - Savitch_9thEd_Chap7_PracProg1"<<endl;
        cout<<"  2 - Savitch_9thEd_Chap7_PracProg2"<<endl;
        cout<<"  3 - Savitch_9thEd_Chap7_PracProg3"<<endl;
        cout<<"  4 - Savitch_9thEd_Chap7_PracProg4"<<endl;
        cout<<"  5 - Savitch_9thEd_Chap7_ProgProj10"<<endl;
        cout<<"  6 - Savitch_9thEd_Chap7_ProgProj13"<<endl;
        cout<<"**************************************"<<endl;
        cin>>option;
        switch (option)
        {
            case 1:
                cout<<"1 - Savitch_9thEd_Chap7_PracProg1:"<<endl;
                {
                //Declare Variables
                int indx=1, i=0;
                int array[indx];
                //Prompt User
                cout<<"What is the size of array you wish to enter?"<<endl;
                cin>>indx;
                cout<<"Enter "<<indx<<" integers, one at a time:"<<endl;
                do{
                    cin>>array[i];
                    i++;
                }while(i<indx);
                cout<<"Return: "<<firstLast2(array, indx);
                }
                break;
            case 2:
                cout<<"2 - Savitch_9thEd_Chap7_PracProg2:"<<endl;
                {
                //Declare Variables
                int indx=0, i=0;
                int array[indx];
                //Prompt User
                cout<<"What is the size of array you wish to enter?"<<endl;
                cin>>indx;
                cout<<"Enter "<<indx<<" integers, one at a time:"<<endl;
                do{
                    cin>>array[i];
                    i++;
                }while(i<indx);
                cout<<"Return # of 2s: "<<countNum2s(array, indx);
                }
                break;
            case 3:
                cout<<"3 - Savitch_9thEd_Chap7_PracProg3:"<<endl;
                {
                //Declare Variables
                int indx=0, i=0;
                int array[indx];
                //Prompt User
                cout<<"What is the size of array you wish to enter?"<<endl;
                cin>>indx;
                cout<<"Enter "<<indx<<" integers, one at a time:"<<endl;
                for(i=0; i<indx; i++){
                    cin>>array[i];
                }
                swapFrontBack(array, indx);
                for(i=0; i<indx; i++){
                    cout<<array[i];
                }    
                }
                break;
            case 4:
                cout<<"4 - Savitch_9thEd_Chap7_PracProg4:"<<endl;
                {
                /*
                 I had to change almost everything about this program to get it to run in this menu.
                 All I did was copy and pase from the original and I could not get the right answer at all.
                 If you take a look at the standalone one, it is written exactly like Savitch wants.
                 However, when that runs by itself there are no errors. Might be something to look
                 into because I don't understand how that is possible, it is not my first time using a menu
                 so I am almost certain I copied it right.
                */
                //Declare Variables
                string names[]={"Michael",
                                "Ash",
                                "Jack",
                                "Freddy"};
                string phoneNumbers[]={"333-8000","333-2323",
                                       "333-6150","339-7970"};
                string targetName, targetPhone;
                char c;
                int i=0, temp;
                do{
                    cout<<"Enter the first name to find the corresponding"<<endl;
                    cout<<"phone number."<<endl;
                    cout<<"Choices are Michael, Ash, Jack, or Freddy."<<endl;
                    //getline(cin, targetName);
                    cin>>targetName;
                    for(i=0; i<=3; i++){
                        if(targetName==names[i]){
                            temp=i;
                        }
                    }
                    targetPhone=phoneNumbers[temp];
                    cout<<"The number is: "<<targetPhone<<endl;
                    cout<<"Look up another name? (Y/N)"<<endl;
                    cin>>c;
                    cin.ignore();
                }while(c=='Y');
                }
                break;
            case 5:
                cout<<"5 - Savitch_9thEd_Chap7_ProgProj10:"<<endl;
                {
                //Declare Variables
                char pos[SIZE]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
                int x=0, o=0;
                //Output Box
                do{
                    cout<<" "<<pos[0]<<"  "<<pos[1]<<"  "<<pos[2]<<endl;
                    cout<<" "<<pos[3]<<"  "<<pos[4]<<"  "<<pos[5]<<endl;
                    cout<<" "<<pos[6]<<"  "<<pos[7]<<"  "<<pos[8]<<endl;
                    //Prompt Turns
                    cout<<"Player X's Turn:"<<endl;
                    cin>>x;
                    pos[x-1]='X';
                    if(pos[0]=='1'||pos[1]=='2'||pos[2]=='3'||
                       pos[3]=='4'||pos[4]=='5'||pos[5]=='6'||
                       pos[6]=='7'||pos[7]=='8'||pos[8]=='9'){
                        cout<<"Player O's Turn:"<<endl;
                        cin>>o;
                        pos[o-1]='O';
                    }
                    else
                    {
                        break;
                    }
                }while(pos[0]=='1'||pos[1]=='2'||pos[2]=='3'||
                       pos[3]=='4'||pos[4]=='5'||pos[5]=='6'||
                       pos[6]=='7'||pos[7]=='8'||pos[8]=='9');
                cout<<"Game Over!"<<endl;
                }
                break;
            case 6:
                cout<<"6 - Savitch_9thEd_Chap7_ProgProj13:"<<endl;
                {
                //Declare Variables
                char array[ROW][COLUMN]={};
                char brray[ROW][COLUMN]={};
                int gen_count=20;
                char d=' ',nd='*';
                //Fill Playing Field
                fill_array(array,ROW,d);
                fill_array(brray,ROW,d);
                //Output Blank Playing Field
                output_array(array,ROW);
                //Add Glider
                glider_test(array,1,10,nd);
                //Output Game w/ Glider
                output_array(array,ROW);
                delay(1);
                //Output Generation Count
                for(int gen=1;gen<=gen_count;gen++){
                    cout<<"Generation: "<<gen<<endl;
                    if(gen%2){
                        gen_calc(array,brray,ROW,d,nd);
                        output_array(brray,ROW);
                    }else{
                        gen_calc(brray,array,ROW,d,nd);
                        output_array(array,ROW);
                    }
                    delay(1);
                }
                //Exit Stage Right!
                }
                break;
            default:
                cout<<"Invalid choice!"<<endl;
                break;                   
        }
        cout<<endl;
        cout<<"Would you like to run the menu again (Y/N)?"<<endl;
        cin>>exit;
    }while(exit=="Y"||exit=="y");
    return 0;
}

string lookupName(string names[], string phoneNumbers[], string targetName){
    int i=0;
    for(i=0; i<=3; i++){
        if(targetName==names[i]){
            return(phoneNumbers[i]);
        }
    }
}

void gen_calc(char a[][COLUMN],char b[][COLUMN],int ROW,char d,char nd){
    for(int r=1;r<ROW-1;r++){
        for(int c=1;c<COLUMN-1;c++){
            int nBr=count_neighbors(a,ROW,nd,r,c);
            if(a[r][c]==nd&&nBr<=1)b[r][c]=d;
            else if(a[r][c]==nd&&(nBr==2||nBr==3))b[r][c]=nd;
            else if(a[r][c]==nd&&nBr>=4)b[r][c]=d;
            else if(a[r][c]==d&&nBr==3)b[r][c]=nd;
            else b[r][c]=a[r][c];
        }
    }
}

void output_map(char a[][COLUMN],int ROW,char nd){
    cout<<endl;
    for(int r=1;r<ROW-1;r++){
        cout<<" ";
        for(int c=1;c<COLUMN-1;c++){
            int nBr=count_neighbors(a,ROW,nd,r,c);
            cout<<nBr;
        }
        cout<<endl;
    }
}

int  count_neighbors(char a[][COLUMN],int ROW,char d,int r,int c){
    //Count All Neighbors
    int count=0;
    //Bottom Row of Neighbors
    if(a[r+1][c-1]==d)count++;
    if(a[r+1][c]==d)count++;
    if(a[r+1][c+1]==d)count++;
    //Top Row of Neighbors
    if(a[r-1][c-1]==d)count++;
    if(a[r-1][c]==d)count++;
    if(a[r-1][c+1]==d)count++;
    //Side Neighbors
    if(a[r][c-1]==d)count++;
    if(a[r][c+1]==d)count++;
    //Return Amount
    return(count);
}

void delay(int secs){
    //Start Delay
    int strt=static_cast<unsigned int>(time(0));
    int end;
    do{
        end=static_cast<unsigned int>(time(0));
    }while(secs>(end-strt));
}

void glider_test(char a[][COLUMN],int pRow,int pCol,char c){
    a[pRow+0][pCol+1]=c;
    a[pRow+1][pCol+2]=c;
    a[pRow+2][pCol+0]=c;
    a[pRow+2][pCol+1]=c;
    a[pRow+2][pCol+2]=c;
}

void output_array(char a[][COLUMN],int ROW){
    cout<<endl;
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COLUMN;c++){
            cout<<a[r][c];
        }
        cout<<endl;
    }
    cout<<endl;
}

void fill_array(char a[][COLUMN],int ROW,char d){
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COLUMN;c++){
            if(r==0){
                a[r][c]=c%10+48;
            }else if(r==(ROW-1)){
                a[r][c]=c%10+48;
            }else if(c==0){
                a[r][c]=r%10+48;
            }else if(c==(COLUMN-1)){
                a[r][c]=r%10+48;
            }else{
                a[r][c]=d;
            }
        }
    }
}

void swapFrontBack(int array[], int indx){
    int temp1, temp2;
    temp1=array[0];
    temp2=array[indx-1];
    array[0]=temp2;
    array[indx-1]=temp1;    
}

int countNum2s(int array[], int indx){
    int found=0, i=0;
    do{
        if(array[i]==2){
            found++;
        }
    i++;
    }while(i<indx);
    return(found);
}

bool firstLast2(int array[], int indx){
    bool test=false;
    if(array[indx-1]==2||array[0]==2){
        test=true;
    }
    else
    {
        test=false;
    }
    return(test);
}