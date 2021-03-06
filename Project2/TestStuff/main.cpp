/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 5, 2015, 5:57 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
const int NCOLOR=6;
const int NSOL=4;
/*
 * 
 */
int main(int argc, char** argv) {
    //Code-maker Variables
    char pass=0;
    unsigned int cdindx=0;
    char sol[NSOL]={'O', 'O', 'P', 'G'};
    char code[NCOLOR]={'R', 'O', 'Y', 'G', 'B', 'P'};
    cout<<"Solution: "<<sol[0]<<sol[1]<<sol[2]<<sol[3]<<endl;
    //Output for loop test
    int index=0, black=0, white=0, flag=0;
    char turn1[NSOL]={'Y', 'O', 'O', 'O'};
    //Check For Black
    for(int index=0;index<=3;index++){
        if(turn1[index]==sol[index]){
            black++;
        }
    }
    //Check For White
    for(int index=0;index<=3;index++){
        if(index==0){
            if((turn1[0]==sol[1])&&(turn1[0]!=sol[0])&&(turn1[1]!=sol[1])){
                white++;
            }
            if((turn1[0]==sol[2])&&(turn1[0]!=sol[0])&&(turn1[2]!=sol[2])){
                white++;
            }
            if((turn1[0]==sol[3])&&(turn1[0]!=sol[0])&&(turn1[3]!=sol[3])){
                white++;
            } 
        }        
        if(index==1){
            if((turn1[1]==sol[0])&&(turn1[1]!=sol[1])&&(turn1[0]!=sol[0])){
                white++;
            }
            if((turn1[1]==sol[2])&&(turn1[1]!=sol[1])&&(turn1[2]!=sol[2])){
                white++;
            }
            if((turn1[1]==sol[3])&&(turn1[1]!=sol[1])&&(turn1[3]!=sol[3])){
                white++;
            }
        }
        if(index==2){
            if((turn1[2]==sol[0])&&(turn1[2]!=sol[2])&&(turn1[0]!=sol[0])){
                white++;
            }
            if((turn1[2]==sol[1])&&(turn1[2]!=sol[2])&&(turn1[1]!=sol[1])){
                white++;
            }
            if((turn1[2]==sol[3])&&(turn1[2]!=sol[2])&&(turn1[3]!=sol[3])){
                white++;
            }
        }
        if(index==3){
            if((turn1[3]==sol[0])&&(turn1[3]!=sol[3])&&(turn1[0]!=sol[0])){
                white++;
            }
            if((turn1[3]==sol[1])&&(turn1[3]!=sol[3])&&(turn1[1]!=sol[1])){
                white++;
            }
            if((turn1[3]==sol[2])&&(turn1[3]!=sol[3])&&(turn1[2]!=sol[2])){
                white++;
            }
        }
    }
    
    //Eliminate Duplicates

    cout<<"Total Black: "<<black<<" Total White: "<<white<<endl;
    return 0;
}

