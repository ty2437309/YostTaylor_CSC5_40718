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
    char sol[NSOL]={' ', ' ', ' ', ' '};
    char code[NCOLOR]={'R', 'O', 'Y', 'G', 'B', 'P'};
    
    //Computer Makes Code
    srand(static_cast<unsigned int>(time(0)));
    
    /*for(cdindx=0; cdindx<=3; cdindx++){
        pass=rand()%NCOLOR;
        sol[cdindx]=pass;
    */
    for(cdindx=0; cdindx<=3; cdindx++){
    pass=rand()%NCOLOR;
    //pass_2=rand()%NCOLOR;
    //pass_3=rand()%NCOLOR;
    //pass_4=rand()%NCOLOR;
    sol[cdindx]=code[pass];
    //sol[1]=code[pass_2];
    //sol[2]=code[pass_3];    
    //sol[3]=code[pass_4];
    }
    //Output Test
    cout<<"Solution: "<<sol[0]<<sol[1]<<sol[2]<<sol[3]<<endl;
    //Output for loop test
    int index=0, black=0, white=0;
    char turn1[NSOL]={'P', 'G', 'G', 'O'};
    for(int index=0;index<=3;index++){
        if(turn1[index]==sol[index]){
            black++;
        }
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
    cout<<"Black: "<<black<<" White: "<<white<<endl;
    return 0;
}

