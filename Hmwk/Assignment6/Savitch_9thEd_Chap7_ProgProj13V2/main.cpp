/* 
 * File: main.cpp
 * Author: Taylor Yost
 * Created on February 08, 2015, 16:03
 * Purpose: Chapter 7 Homework
 */

//System Libraries
#include <iostream>
#include <ctime>
using namespace std;
//User Libraries
//Global Constants
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
//Execution Begins Here!
int main(int argc, char** argv) {
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
    return(0);
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