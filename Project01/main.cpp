/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 18, 2014, 5:50 PM
 * 
 */
//system Libraries 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!
int main(int argc, char** argv) {
    //Initiate random seed
    srand(time(NULL));
    //declare variables r=row c=colum
    unsigned short r1c1=0,r2c1=0,r3c1=0,r4c1=0,r1c2=0,r2c2=0,r3c2=0,r4c2=0;
    unsigned short r1c3=0,r2c3=0,r3c3=0,r4c3=0,r1c4=0,r2c4=0,r3c4=0,r4c4=0;
    short newnum;
    short breakdo=0;
    bool usrinp=true;
    char keyprs(1);
    //random num for new num choice; 
    short ranval=rand()%20+1;
    //new num will equal 2 9 out of 10 times
    if(ranval<19){
        newnum=2;
    }
    //new num will equal 4 1 out of 10 times 
    else{
        newnum=4;
    }
    //random starting board 
    system("color 1B");
    cout<<"Welcome to 2048 a number game"<<endl;
    cout<<"the goal is to get to the number 2048 by combining like numbers ie 2 and 2"<<endl;
    cout<<"the controls are"<<endl;
    cout<<"W for up "<<endl;
    cout<<"A for left"<<endl;
    cout<<"S for down"<<endl;
    cout<<"and D for right"<<endl;

    do{
        short ranval=rand()%20+1;
        if(ranval<19){
            newnum=2;
        }
        else{
            newnum=4;
        }
        short ranval1=rand()%16+1;
        switch(ranval1){
            case 1:{
                if(r1c1==0){
                    r1c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 2:{
                if(r2c1==0){
                    r2c1=newnum;
                    breakdo++;
                } 
                else{
                }

                break;
            }
            case 3:{
                if(r3c1==0){
                    r3c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 4:{
                if(r4c1==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 5:{
                if(r1c2==0){
                    r1c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 6:{
                if(r2c2==0){
                    r2c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 7:{
                if(r3c2==0){
                    r3c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 8:{
                if(r4c2==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 9:{
                if(r1c3==0){
                    r1c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 10:{
                if(r2c3==0){
                    r2c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 11:{
                if(r3c3==0){
                    r3c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 12:{
                if(r4c3==0){
                    r4c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 13:{
                if(r1c4==0){
                    r1c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 14:{
                if(r2c4==0){
                    r2c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 15:{
                if(r3c4==0){
                    r3c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 16:{
                if(r4c4==0){
                    r4c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
        } 
    }
    while(breakdo<2);
    //output the starting game board design
    cout<<"+----+----+----+----+"<<endl;
    //row1 colum 1
    if(r1c1<10){
        cout<<"|   "<<r1c1;
    }
    else if(r1c1<100){
        cout<<"|  "<<r1c1;
    }
    else if(r1c1<1000){
        cout<<"| "<<r1c1;
    }
    else{
        cout<<"|"<<r1c1;
    }
    //row2 colum 1
    if(r2c1<10){
        cout<<"|   "<<r2c1;
    }
    else if(r2c1<100){
        cout<<"|  "<<r2c1;
    }
    else if(r2c1<1000){
        cout<<"| "<<r2c1;
    }
    else{
        cout<<"|"<<r2c1;
    }
    //row3 colum 1
    if(r3c1<10){
        cout<<"|   "<<r3c1;
    }
    else if(r3c1<100){
        cout<<"|  "<<r3c1;
    }
    else if(r3c1<1000){
        cout<<"| "<<r3c1;
    }
    else{
        cout<<"|"<<r3c1;
    }
    //row4 colum 1
    if(r4c1<10){
        cout<<"|   "<<r4c1;
    }
    else if(r4c1<100){
        cout<<"|  "<<r4c1;
    }
    else if(r4c1<1000){
        cout<<"| "<<r4c1;
    }
    else{
        cout<<"|"<<r4c1;
    }
    cout<<endl;
    cout<<"+----+----+----+----+"<<endl;
    //row1 colum 2
    if(r1c2<10){
        cout<<"|   "<<r1c2;
    }
    else if(r1c2<100){
        cout<<"|  "<<r1c2;
    }
    else if(r1c2<1000){
        cout<<"| "<<r1c2;
    }
    else{
        cout<<"|"<<r1c2;
    }
    //row2 colum 2
    if(r2c2<10){
        cout<<"|   "<<r2c2;
    }
    else if(r2c2<100){
        cout<<"|  "<<r2c2;
    }
    else if(r2c2<1000){
        cout<<"| "<<r2c2;
    }
    else{
        cout<<"|"<<r2c2;
    }
    //row3 colum 2
    if(r3c2<10){
        cout<<"|   "<<r3c2;
    }
    else if(r3c2<100){
        cout<<"|  "<<r3c2;
    }
    else if(r3c2<1000){
        cout<<"| "<<r3c2;
    }
    else{
        cout<<"|"<<r3c2;
    }
    //row4 colum 2
    if(r4c2<10){
        cout<<"|   "<<r4c2;
    }
    else if(r4c2<100){
        cout<<"|  "<<r4c2;
    }
    else if(r4c2<1000){
        cout<<"| "<<r4c2;
    }
    else{
        cout<<"|"<<r4c2;
    }
    cout<<endl;
    cout<<"+----+----+----+----+"<<endl;
    //row1 colum 3
    if(r1c3<10){
        cout<<"|   "<<r1c3;
    }
    else if(r1c3<100){
        cout<<"|  "<<r1c3;
    }
    else if(r1c3<1000){
        cout<<"| "<<r1c3;
    }
    else{
        cout<<"|"<<r1c3;
    }
    //row2 colum 3
    if(r2c3<10){
        cout<<"|   "<<r2c3;
    }
    else if(r2c3<100){
        cout<<"|  "<<r2c3;
    }
    else if(r2c3<1000){
        cout<<"| "<<r2c3;
    }
    else{
        cout<<"|"<<r2c3;
    }
    //row3 colum 3
    if(r3c3<10){
        cout<<"|   "<<r3c3;
    }
    else if(r3c3<100){
        cout<<"|  "<<r3c3;
    }
    else if(r3c3<1000){
        cout<<"| "<<r3c3;
    }
    else{
        cout<<"|"<<r3c3;
    }
    //row4 colum 3
    if(r4c3<10){
        cout<<"|   "<<r4c3;
    }
    else if(r4c3<100){
        cout<<"|  "<<r4c3;
    }
    else if(r4c3<1000){
        cout<<"| "<<r4c3;
    }
    else{
        cout<<"|"<<r4c3;
    }
    cout<<endl;
    cout<<"+----+----+----+----+"<<endl;
    //row1 colum 4
    if(r1c4<10){
        cout<<"|   "<<r1c4;
    }
    else if(r1c4<100){
        cout<<"|  "<<r1c4;
    }
    else if(r1c4<1000){
        cout<<"| "<<r1c4;
    }
    else{
        cout<<"|"<<r1c4;
    }
    //row2 colum 4
    if(r2c4<10){
        cout<<"|   "<<r2c4;
    }
    else if(r2c4<100){
        cout<<"|  "<<r2c4;
    }
    else if(r2c4<1000){
        cout<<"| "<<r2c4;
    }
    else{
        cout<<"|"<<r2c4;
    }
    //row3 colum 4
    if(r3c4<10){
        cout<<"|   "<<r3c4;
    }
    else if(r3c4<100){
        cout<<"|  "<<r3c4;
    }
    else if(r3c4<1000){
        cout<<"| "<<r3c4;
    }
    else{
        cout<<"|"<<r3c4;
    }
    //row4 colum 4
    if(r4c4<10){
        cout<<"|   "<<r4c4;
    }
    else if(r4c4<100){
        cout<<"|  "<<r4c4;
    }
    else if(r4c4<1000){
        cout<<"| "<<r4c4;
    }
    else{
        cout<<"|"<<r4c4;
    }
    cout<<endl;
    cout<<"+----+----+----+----+"<<endl;
    while(usrinp==true){
        cin>>keyprs;
        while(!(keyprs=='w'||keyprs=='W'||keyprs=='s'||keyprs=='S'||keyprs=='a'||keyprs=='A'||keyprs=='d'||keyprs=='D')){
            cout<<"WRONG"<<endl;
            cin>>keyprs;
        }
        if(keyprs=='w'||keyprs=='W'){
            //row 1 colum 1 2 3 4 up logic 
            if(r1c1==r1c2&&r1c1!=0){
                r1c1+=r1c2;
                r1c2=0;   
                if(r1c3==r1c4&&r1c3!=0){
                    r1c3+=r1c4;
                    r1c2=r1c3;
                    r1c3=0;
                    r1c4=0;
                }
                else{
                    r1c2=r1c3;
                    r1c3=r1c4;
                    r1c4=0;
                }
            }
            else if(r1c2==r1c3&&r1c2!=0){
                r1c2+=r1c3;
                r1c3=0;
                if(r1c4!=0){
                    r1c3=r1c4;
                    r1c4=0;
                }
            }
            else if(r1c3==r1c4&&r1c3!=0){
                r1c3+=r1c4;
                r1c4=0;
            }
            else if(r1c1==r1c3&&r1c1!=0&&r1c2==0){
                r1c1+=r1c3;
                r1c3=0;
                r1c2=r1c4;
                r1c4=0;
            }
            else if(r1c1==r1c4&&r1c1!=0&&r1c2==0&&r1c3==0){
                r1c1+=r1c4;
                r1c4=0;
            }
            else if(r1c2==r1c4&&r1c2!=0&r1c3==0){
                r1c2+=r1c4;
                r1c4=0;
                if(r1c1==0){
                    r1c1=r1c2;
                    r1c2=0;
                }
            }
            else if(r1c1==0){
                if(r1c2!=0){
                    r1c1=r1c2;
                    r1c2=0;
                    if(r1c3!=0){
                        r1c2=r1c3;
                        r1c3=0;
                        if(r1c4!=0){
                            r1c3=r1c4;
                            r1c4=0;
                        }
                    }
                    else if(r1c4!=0){
                        r1c2=r1c4;
                        r1c4=0;
                    }
                }
                else if(r1c3!=0){
                    r1c1=r1c3;
                    r1c3=0;
                    if(r1c4!=0){
                        r1c2=r1c4;
                        r1c4=0;
                    }
                }
                else if(r1c4!=0){
                    r1c1=r1c4;
                    r1c4=0;
                }
            }
            else if(r1c2==0){
                if(r1c3!=0){
                    r1c2=r1c3;
                    r1c3=0;
                    if(r1c4!=0){
                        r1c3=r1c4;
                        r1c4=0;
                    }
                }
                else if(r1c4!=0){
                    r1c2=r1c4;
                    r1c4=0;
                }
            }
                else if(r1c3==0){
                    if(r1c4!=0){
                        r1c3=r1c4;
                        r1c4=0;
                    }
                }
            //row 2 colum 1 2 3 and 4 up logic 
            if(r2c1==r2c2&&r2c1!=0){
                r2c1+=r2c2;
                r2c2=0;   
                if(r2c3==r2c4&&r2c3!=0){
                    r2c3+=r2c4;
                    r2c2=r2c3;
                    r2c3=0;
                    r2c4=0;
                }
                else{
                    r2c2=r2c3;
                    r2c3=r2c4;
                    r2c4=0;
                }
            }
            else if(r2c2==r2c3&&r2c2!=0){
                r2c2+=r2c3;
                r2c3=0;
                if(r2c4!=0){
                    r2c3=r2c4;
                    r2c4=0;
                }
            }
            else if(r2c3==r2c4&&r2c3!=0){
                r2c3+=r2c4;
                r2c4=0;
                bool r2up=true;
            }
            else if(r2c1==r2c3&&r2c1!=0&&r2c2==0){
                r2c1+=r2c3;
                r2c3=0;
                r2c2=r2c4;
                r2c4=0;
            }
            else if(r2c1==r2c4&&r2c1!=0&&r2c2==0&&r2c3==0){
                r2c1+=r2c4;
                r2c4=0;
            }
            else if(r2c2==r2c4&&r2c2!=0&r2c3==0){
                r2c2+=r2c4;
                r2c4=0;
                if(r2c1==0){
                    r2c1=r2c2;
                    r2c2=0;
                }
            }
            else if(r2c1==0){
                if(r2c2!=0){
                    r2c1=r2c2;
                    r2c2=0;
                    if(r2c3!=0){
                        r2c2=r2c3;
                        r2c3=0;
                        if(r2c4!=0){
                            r2c3=r2c4;
                            r2c4=0;
                        }
                    }
                    else if(r2c4!=0){
                        r2c2=r2c4;
                        r2c4=0;
                    }
                }
                else if(r2c3!=0){
                    r2c1=r2c3;
                    r2c3=0;
                    if(r2c4!=0){
                        r2c2=r2c4;
                        r2c4=0;
                    }
                }
                else if(r2c4!=0){
                    r2c1=r2c4;
                    r2c4=0;
                }
            }
            else if(r2c2==0){
                if(r2c3!=0){
                    r2c2=r2c3;
                    r2c3=0;
                    if(r2c4!=0){
                        r2c3=r2c4;
                        r2c4=0;
                    }
                }
                else if(r2c4!=0){
                    r2c2=r2c4;
                    r2c4=0;
                }
            }
                else if(r2c3==0){
                    if(r2c4!=0){
                        r2c3=r2c4;
                        r2c4=0;
                    }
                }
            //row 3 colum 1 2 3 and 4 up logic 
            if(r3c1==r3c2&&r3c1!=0){
                r3c1+=r3c2;
                r3c2=0;   
                if(r3c3==r3c4&&r3c3!=0){
                    r3c3+=r3c4;
                    r3c2=r3c3;
                    r3c3=0;
                    r3c4=0;
                }
                else{
                    r3c2=r3c3;
                    r3c3=r3c4;
                    r3c4=0;
                }
            }
            else if(r3c2==r3c3&&r3c2!=0){
                r3c2+=r3c3;
                r3c3=0;
                if(r3c4!=0){
                    r3c3=r3c4;
                    r3c4=0;
                }
            }
            else if(r3c3==r3c4&&r3c3!=0){
                r3c3+=r3c4;
                r3c4=0;
                bool r3up=true;
            }
            else if(r3c1==r3c3&&r3c1!=0&&r3c2==0){
                r3c1+=r3c3;
                r3c3=0;
                r3c2=r3c4;
                r3c4=0;
            }
            else if(r3c1==r3c4&&r3c1!=0&&r3c2==0&&r3c3==0){
                r3c1+=r3c4;
                r3c4=0;
            }
            else if(r3c2==r3c4&&r3c2!=0&r3c3==0){
                r3c2+=r3c4;
                r3c4=0;
                if(r3c1==0){
                    r3c1=r3c2;
                    r3c2=0;
                }
            }
            else if(r3c1==0){
                if(r3c2!=0){
                    r3c1=r3c2;
                    r3c2=0;
                    if(r3c3!=0){
                        r3c2=r3c3;
                        r3c3=0;
                        if(r3c4!=0){
                            r3c3=r3c4;
                            r3c4=0;
                        }
                    }
                    else if(r3c4!=0){
                        r3c2=r3c4;
                        r3c4=0;
                    }
                }
                else if(r3c3!=0){
                    r3c1=r3c3;
                    r3c3=0;
                    if(r3c4!=0){
                        r3c2=r3c4;
                        r3c4=0;
                    }
                }
                else if(r3c4!=0){
                    r3c1=r3c4;
                    r3c4=0;
                }
            }
            else if(r3c2==0){
                if(r3c3!=0){
                    r3c2=r3c3;
                    r3c3=0;
                    if(r3c4!=0){
                        r3c3=r3c4;
                        r3c4=0;
                    }
                }
                else if(r3c4!=0){
                    r3c2=r3c4;
                    r3c4=0;
                }
            }
                else if(r3c3==0){
                    if(r3c4!=0){
                        r3c3=r3c4;
                        r3c4=0;
                    }
                }
            //row 4 colum 1 2 3 and 4 up logic 
            if(r4c1==r4c2&&r4c1!=0){
                r4c1+=r4c2;
                r4c2=0;   
                if(r4c3==r4c4&&r4c3!=0){
                    r4c3+=r4c4;
                    r4c2=r4c3;
                    r4c3=0;
                    r4c4=0;
                }
                else{
                    r4c2=r4c3;
                    r4c3=r4c4;
                    r4c4=0;
                }
            }
            else if(r4c2==r4c3&&r4c2!=0){
                r4c2+=r4c3;
                r4c3=0;
                if(r4c4!=0){
                    r4c3=r4c4;
                    r4c4=0;
                }
            }
            else if(r4c3==r4c4&&r4c3!=0){
                r4c3+=r4c4;
                r4c4=0;
            }
            else if(r4c1==r4c3&&r4c1!=0&&r4c2==0){
                r4c1+=r4c3;
                r4c3=0;
                r4c2=r4c4;
                r4c4=0;
            }
            else if(r4c1==r4c4&&r4c1!=0&&r4c2==0&&r4c3==0){
                r4c1+=r4c4;
                r4c4=0;
            }
            else if(r4c2==r4c4&&r4c2!=0&r4c3==0){
                r4c2+=r4c4;
                r4c4=0;
                if(r4c1==0){
                    r4c1=r4c2;
                    r4c2=0;
                }
            }
            else if(r4c1==0){
                if(r4c2!=0){
                    r4c1=r4c2;
                    r4c2=0;
                    if(r4c3!=0){
                        r4c2=r4c3;
                        r4c3=0;
                        if(r4c4!=0){
                            r4c3=r4c4;
                            r4c4=0;
                        }
                    }
                    else if(r4c4!=0){
                        r4c2=r4c4;
                        r4c4=0;
                    }
                }
                else if(r4c3!=0){
                    r4c1=r4c3;
                    r4c3=0;
                    if(r4c4!=0){
                        r4c2=r4c4;
                        r4c4=0;
                    }
                }
                else if(r4c4!=0){
                    r4c1=r4c4;
                    r4c4=0;
                }
            }
            else if(r4c2==0){
                if(r4c3!=0){
                    r4c2=r4c3;
                    r4c3=0;
                    if(r4c4!=0){
                        r4c3=r4c4;
                        r4c4=0;
                    }
                }
                else if(r4c4!=0){
                    r4c2=r4c4;
                    r4c4=0;
                }
            }
                else if(r4c3==0){
                    if(r4c4!=0){
                        r4c3=r4c4;
                        r4c4=0;
                    }
                }
        //add a new num            
        short ranval1=rand()%16+1;
        switch(ranval1){
            case 1:{
                if(r1c1==0){
                    r1c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 2:{
                if(r2c1==0){
                    r2c1=newnum;
                    breakdo++;
                } 
                else{
                }

                break;
            }
            case 3:{
                if(r3c1==0){
                    r3c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 4:{
                if(r4c1==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 5:{
                if(r1c2==0){
                    r1c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 6:{
                if(r2c2==0){
                    r2c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 7:{
                if(r3c2==0){
                    r3c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 8:{
                if(r4c2==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 9:{
                if(r1c3==0){
                    r1c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 10:{
                if(r2c3==0){
                    r2c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 11:{
                if(r3c3==0){
                    r3c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 12:{
                if(r4c3==0){
                    r4c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 13:{
                if(r1c4==0){
                    r1c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 14:{
                if(r2c4==0){
                    r2c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 15:{
                if(r3c4==0){
                    r3c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 16:{
                if(r4c4==0){
                    r4c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
        }
        for(int format=0;format<20;format++){
            cout<<endl;
        }
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 1
        if(r1c1<10){
            cout<<"|   "<<r1c1;
        }
        else if(r1c1<100){
            cout<<"|  "<<r1c1;
        }
        else if(r1c1<1000){
            cout<<"| "<<r1c1;
        }
        else{
            cout<<"|"<<r1c1;
        }
        //row2 colum 1
        if(r2c1<10){
            cout<<"|   "<<r2c1;
        }
        else if(r2c1<100){
            cout<<"|  "<<r2c1;
        }
        else if(r2c1<1000){
            cout<<"| "<<r2c1;
        }
        else{
            cout<<"|"<<r2c1;
        }
        //row3 colum 1
        if(r3c1<10){
            cout<<"|   "<<r3c1;
        }
        else if(r3c1<100){
            cout<<"|  "<<r3c1;
        }
        else if(r3c1<1000){
            cout<<"| "<<r3c1;
        }
        else{
            cout<<"|"<<r3c1;
        }
        //row4 colum 1
        if(r4c1<10){
            cout<<"|   "<<r4c1;
        }
        else if(r4c1<100){
            cout<<"|  "<<r4c1;
        }
        else if(r4c1<1000){
            cout<<"| "<<r4c1;
        }
        else{
            cout<<"|"<<r4c1;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 2
        if(r1c2<10){
            cout<<"|   "<<r1c2;
        }
        else if(r1c2<100){
            cout<<"|  "<<r1c2;
        }
        else if(r1c2<1000){
            cout<<"| "<<r1c2;
        }
        else{
            cout<<"|"<<r1c2;
        }
        //row2 colum 2
        if(r2c2<10){
            cout<<"|   "<<r2c2;
        }
        else if(r2c2<100){
            cout<<"|  "<<r2c2;
        }
        else if(r2c2<1000){
            cout<<"| "<<r2c2;
        }
        else{
            cout<<"|"<<r2c2;
        }
        //row3 colum 2
        if(r3c2<10){
            cout<<"|   "<<r3c2;
        }
        else if(r3c2<100){
            cout<<"|  "<<r3c2;
        }
        else if(r3c2<1000){
            cout<<"| "<<r3c2;
        }
        else{
            cout<<"|"<<r3c2;
        }
        //row4 colum 2
        if(r4c2<10){
            cout<<"|   "<<r4c2;
        }
        else if(r4c2<100){
            cout<<"|  "<<r4c2;
        }
        else if(r4c2<1000){
            cout<<"| "<<r4c2;
        }
        else{
            cout<<"|"<<r4c2;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 3
        if(r1c3<10){
            cout<<"|   "<<r1c3;
        }
        else if(r1c3<100){
            cout<<"|  "<<r1c3;
        }
        else if(r1c3<1000){
            cout<<"| "<<r1c3;
        }
        else{
            cout<<"|"<<r1c3;
        }
        //row2 colum 3
        if(r2c3<10){
            cout<<"|   "<<r2c3;
        }
        else if(r2c3<100){
            cout<<"|  "<<r2c3;
        }
        else if(r2c3<1000){
            cout<<"| "<<r2c3;
        }
        else{
            cout<<"|"<<r2c3;
        }
        //row3 colum 3
        if(r3c3<10){
            cout<<"|   "<<r3c3;
        }
        else if(r3c3<100){
            cout<<"|  "<<r3c3;
        }
        else if(r3c3<1000){
            cout<<"| "<<r3c3;
        }
        else{
            cout<<"|"<<r3c3;
        }
        //row4 colum 3
        if(r4c3<10){
            cout<<"|   "<<r4c3;
        }
        else if(r4c3<100){
            cout<<"|  "<<r4c3;
        }
        else if(r4c3<1000){
            cout<<"| "<<r4c3;
        }
        else{
            cout<<"|"<<r4c3;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 4
        if(r1c4<10){
            cout<<"|   "<<r1c4;
        }
        else if(r1c4<100){
            cout<<"|  "<<r1c4;
        }
        else if(r1c4<1000){
            cout<<"| "<<r1c4;
        }
        else{
            cout<<"|"<<r1c4;
        }
        //row2 colum 4
        if(r2c4<10){
            cout<<"|   "<<r2c4;
        }
        else if(r2c4<100){
            cout<<"|  "<<r2c4;
        }
        else if(r2c4<1000){
            cout<<"| "<<r2c4;
        }
        else{
            cout<<"|"<<r2c4;
        }
        //row3 colum 4
        if(r3c4<10){
            cout<<"|   "<<r3c4;
        }
        else if(r3c4<100){
            cout<<"|  "<<r3c4;
        }
        else if(r3c4<1000){
            cout<<"| "<<r3c4;
        }
        else{
            cout<<"|"<<r3c4;
        }
        //row4 colum 4
        if(r4c4<10){
            cout<<"|   "<<r4c4;
        }
        else if(r4c4<100){
            cout<<"|  "<<r4c4;
        }
        else if(r4c4<1000){
            cout<<"| "<<r4c4;
        }
        else{
            cout<<"|"<<r4c4;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        }
        //A left logic
        else if(keyprs=='a'||keyprs=='A'){
            if(r1c1==r2c1&&r1c1!=0){
                r1c1+=r2c1;
                r2c1=0;   
                if(r3c1==r4c1&&r3c1!=0){
                    r3c1+=r4c1;
                    r2c1=r3c1;
                    r3c1=0;
                    r4c1=0;
                }
                else{
                    r2c1=r3c1;
                    r3c1=r4c1;
                    r4c1=0;
                }
            }
            else if(r2c1==r3c1&&r2c1!=0){
                r2c1+=r3c1;
                r3c1=0;
                if(r4c1!=0){
                    r3c1=r4c1;
                    r4c1=0;
                }
            }
            else if(r3c1==r4c1&&r3c1!=0){
                r3c1+=r4c1;
                r4c1=0;
            }
            else if(r1c1==r3c1&&r1c1!=0&&r2c1==0){
                r1c1+=r3c1;
                r3c1=0;
                r2c1=r4c1;
                r4c1=0;
            }
            else if(r1c1==r4c1&&r1c1!=0&&r2c1==0&&r3c1==0){
                r1c1+=r4c1;
                r4c1=0;
            }
            else if(r2c1==r4c1&&r2c1!=0&r3c1==0){
                r2c1+=r4c1;
                r4c1=0;
                if(r1c1==0){
                    r1c1=r2c1;
                    r2c1=0;
                }
            }
            else if(r1c1==0){
                if(r2c1!=0){
                    r1c1=r2c1;
                    r2c1=0;
                    if(r3c1!=0){
                        r2c1=r3c1;
                        r3c1=0;
                        if(r4c1!=0){
                            r3c1=r4c1;
                            r4c1=0;
                        }
                    }
                    else if(r4c1!=0){
                        r2c1=r4c1;
                        r4c1=0;
                    }
                }
                else if(r3c1!=0){
                    r1c1=r3c1;
                    r3c1=0;
                    if(r4c1!=0){
                        r2c1=r4c1;
                        r4c1=0;
                    }
                }
                else if(r4c1!=0){
                    r1c1=r4c1;
                    r4c1=0;
                }
            }
            else if(r2c1==0){
                if(r3c1!=0){
                    r2c1=r3c1;
                    r4c1=0;
                    if(r4c1!=0){
                        r3c1=r4c1;
                        r4c1=0;
                    }
                }
                else if(r4c1!=0){
                    r2c1=r4c1;
                    r4c1=0;
                }
            }
                else if(r3c1==0){
                    if(r4c1!=0){
                        r3c1=r4c1;
                        r4c1=0;
                    }
                }
    //row1234 colum 2
    if(r1c2==r2c2&&r1c2!=0){
                r1c2+=r2c2;
                r2c2=0;   
                if(r3c2==r4c2&&r3c2!=0){
                    r3c2+=r4c2;
                    r2c2=r3c2;
                    r3c2=0;
                    r4c2=0;
                }
                else{
                    r2c2=r3c2;
                    r3c2=r4c2;
                    r4c2=0;
                }
            }
            else if(r2c2==r3c2&&r2c2!=0){
                r2c2+=r3c2;
                r3c2=0;
                if(r4c2!=0){
                    r3c2=r4c2;
                    r4c2=0;
                }
            }
            else if(r3c2==r4c2&&r3c2!=0){
                r3c2+=r4c2;
                r4c2=0;
            }
            else if(r1c2==r3c2&&r1c2!=0&&r2c2==0){
                r1c2+=r3c2;
                r3c2=0;
                r2c2=r4c2;
                r4c2=0;
            }
            else if(r1c2==r4c2&&r1c2!=0&&r2c2==0&&r3c2==0){
                r1c2+=r4c2;
                r4c2=0;
            }
            else if(r2c2==r4c2&&r2c2!=0&r3c2==0){
                r2c2+=r4c2;
                r4c2=0;
                if(r1c2==0){
                    r1c2=r2c2;
                    r2c2=0;
                }
            }
            else if(r1c2==0){
                if(r2c2!=0){
                    r1c2=r2c2;
                    r2c2=0;
                    if(r3c2!=0){
                        r2c2=r3c2;
                        r3c2=0;
                        if(r4c2!=0){
                            r3c2=r4c2;
                            r4c2=0;
                        }
                    }
                    else if(r4c2!=0){
                        r2c2=r4c2;
                        r4c2=0;
                    }
                }
                else if(r3c2!=0){
                    r1c2=r3c2;
                    r3c2=0;
                    if(r4c2!=0){
                        r2c2=r4c2;
                        r4c2=0;
                    }
                }
                else if(r4c2!=0){
                    r1c2=r4c2;
                    r4c2=0;
                }
            }
            else if(r2c2==0){
                if(r3c2!=0){
                    r2c2=r3c2;
                    r4c2=0;
                    if(r4c2!=0){
                        r3c2=r4c2;
                        r4c2=0;
                    }
                }
                else if(r4c2!=0){
                    r2c2=r4c2;
                    r4c2=0;
                }
            }
                else if(r3c2==0){
                    if(r4c2!=0){
                        r3c2=r4c2;
                        r4c2=0;
                    }
                }
    //row 1234 and colum 3
    if(r1c3==r2c3&&r1c3!=0){
                r1c3+=r2c3;
                r2c3=0;   
                if(r3c3==r4c3&&r3c3!=0){
                    r3c3+=r4c3;
                    r2c3=r3c3;
                    r3c3=0;
                    r4c3=0;
                }
                else{
                    r2c3=r3c3;
                    r3c3=r4c3;
                    r4c3=0;
                }
            }
            else if(r2c3==r3c3&&r2c3!=0){
                r2c3+=r3c3;
                r3c3=0;
                if(r4c3!=0){
                    r3c3=r4c3;
                    r4c3=0;
                }
            }
            else if(r3c3==r4c3&&r3c3!=0){
                r3c3+=r4c3;
                r4c3=0;
            }
            else if(r1c3==r3c3&&r1c3!=0&&r2c3==0){
                r1c3+=r3c3;
                r3c3=0;
                r2c3=r4c3;
                r4c3=0;
            }
            else if(r1c3==r4c3&&r1c3!=0&&r2c3==0&&r3c3==0){
                r1c3+=r4c3;
                r4c3=0;
            }
            else if(r2c3==r4c3&&r2c3!=0&r3c3==0){
                r2c3+=r4c3;
                r4c3=0;
                if(r1c3==0){
                    r1c3=r2c3;
                    r2c3=0;
                }
            }
            else if(r1c3==0){
                if(r2c3!=0){
                    r1c3=r2c3;
                    r2c3=0;
                    if(r3c3!=0){
                        r2c3=r3c3;
                        r3c3=0;
                        if(r4c3!=0){
                            r3c3=r4c3;
                            r4c3=0;
                        }
                    }
                    else if(r4c3!=0){
                        r2c3=r4c3;
                        r4c3=0;
                    }
                }
                else if(r3c3!=0){
                    r1c3=r3c3;
                    r3c3=0;
                    if(r4c3!=0){
                        r2c3=r4c3;
                        r4c3=0;
                    }
                }
                else if(r4c3!=0){
                    r1c3=r4c3;
                    r4c3=0;
                }
            }
            else if(r2c3==0){
                if(r3c3!=0){
                    r2c3=r3c3;
                    r4c3=0;
                    if(r4c3!=0){
                        r3c3=r4c3;
                        r4c3=0;
                    }
                }
                else if(r4c3!=0){
                    r2c3=r4c3;
                    r4c3=0;
                }
            }
                else if(r3c3==0){
                    if(r4c3!=0){
                        r3c3=r4c3;
                        r4c3=0;
                    }
                }
    //row1234 colum4
    if(r1c4==r2c4&&r1c4!=0){
                r1c4+=r2c4;
                r2c4=0;   
                if(r3c4==r4c4&&r3c4!=0){
                    r3c4+=r4c4;
                    r2c4=r3c4;
                    r3c4=0;
                    r4c4=0;
                }
                else{
                    r2c4=r3c4;
                    r3c4=r4c4;
                    r4c4=0;
                }
            }
            else if(r2c4==r3c4&&r2c4!=0){
                r2c4+=r3c4;
                r3c4=0;
                if(r4c4!=0){
                    r3c4=r4c4;
                    r4c4=0;
                }
            }
            else if(r3c4==r4c4&&r3c4!=0){
                r3c4+=r4c4;
                r4c4=0;
            }
            else if(r1c4==r3c4&&r1c4!=0&&r2c4==0){
                r1c4+=r3c4;
                r3c4=0;
                r2c4=r4c4;
                r4c4=0;
            }
            else if(r1c4==r4c4&&r1c4!=0&&r2c4==0&&r3c4==0){
                r1c4+=r4c4;
                r4c4=0;
            }
            else if(r2c4==r4c4&&r2c4!=0&r3c4==0){
                r2c4+=r4c4;
                r4c4=0;
                if(r1c4==0){
                    r1c4=r2c4;
                    r2c4=0;
                }
            }
            else if(r1c4==0){
                if(r2c4!=0){
                    r1c4=r2c4;
                    r2c4=0;
                    if(r3c4!=0){
                        r2c4=r3c4;
                        r3c4=0;
                        if(r4c4!=0){
                            r3c4=r4c4;
                            r4c4=0;
                        }
                    }
                    else if(r4c4!=0){
                        r2c4=r4c4;
                        r4c4=0;
                    }
                }
                else if(r3c4!=0){
                    r1c4=r3c4;
                    r3c4=0;
                    if(r4c4!=0){
                        r2c4=r4c4;
                        r4c4=0;
                    }
                }
                else if(r4c4!=0){
                    r1c4=r4c4;
                    r4c4=0;
                }
            }
            else if(r2c4==0){
                if(r3c4!=0){
                    r2c4=r3c4;
                    r4c4=0;
                    if(r4c4!=0){
                        r3c4=r4c4;
                        r4c4=0;
                    }
                }
                else if(r4c4!=0){
                    r2c4=r4c4;
                    r4c4=0;
                }
            }
                else if(r3c4==0){
                    if(r4c4!=0){
                        r3c4=r4c4;
                        r4c4=0;
                    }
                }
            //add a new num            
        short ranval1=rand()%16+1;
        switch(ranval1){
            case 1:{
                if(r1c1==0){
                    r1c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 2:{
                if(r2c1==0){
                    r2c1=newnum;
                    breakdo++;
                } 
                else{
                }

                break;
            }
            case 3:{
                if(r3c1==0){
                    r3c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 4:{
                if(r4c1==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 5:{
                if(r1c2==0){
                    r1c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 6:{
                if(r2c2==0){
                    r2c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 7:{
                if(r3c2==0){
                    r3c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 8:{
                if(r4c2==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 9:{
                if(r1c3==0){
                    r1c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 10:{
                if(r2c3==0){
                    r2c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 11:{
                if(r3c3==0){
                    r3c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 12:{
                if(r4c3==0){
                    r4c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 13:{
                if(r1c4==0){
                    r1c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 14:{
                if(r2c4==0){
                    r2c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 15:{
                if(r3c4==0){
                    r3c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 16:{
                if(r4c4==0){
                    r4c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
        }
        for(int format=0;format<20;format++){
            cout<<endl;
        }
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 1
        if(r1c1<10){
            cout<<"|   "<<r1c1;
        }
        else if(r1c1<100){
            cout<<"|  "<<r1c1;
        }
        else if(r1c1<1000){
            cout<<"| "<<r1c1;
        }
        else{
            cout<<"|"<<r1c1;
        }
        //row2 colum 1
        if(r2c1<10){
            cout<<"|   "<<r2c1;
        }
        else if(r2c1<100){
            cout<<"|  "<<r2c1;
        }
        else if(r2c1<1000){
            cout<<"| "<<r2c1;
        }
        else{
            cout<<"|"<<r2c1;
        }
        //row3 colum 1
        if(r3c1<10){
            cout<<"|   "<<r3c1;
        }
        else if(r3c1<100){
            cout<<"|  "<<r3c1;
        }
        else if(r3c1<1000){
            cout<<"| "<<r3c1;
        }
        else{
            cout<<"|"<<r3c1;
        }
        //row4 colum 1
        if(r4c1<10){
            cout<<"|   "<<r4c1;
        }
        else if(r4c1<100){
            cout<<"|  "<<r4c1;
        }
        else if(r4c1<1000){
            cout<<"| "<<r4c1;
        }
        else{
            cout<<"|"<<r4c1;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 2
        if(r1c2<10){
            cout<<"|   "<<r1c2;
        }
        else if(r1c2<100){
            cout<<"|  "<<r1c2;
        }
        else if(r1c2<1000){
            cout<<"| "<<r1c2;
        }
        else{
            cout<<"|"<<r1c2;
        }
        //row2 colum 2
        if(r2c2<10){
            cout<<"|   "<<r2c2;
        }
        else if(r2c2<100){
            cout<<"|  "<<r2c2;
        }
        else if(r2c2<1000){
            cout<<"| "<<r2c2;
        }
        else{
            cout<<"|"<<r2c2;
        }
        //row3 colum 2
        if(r3c2<10){
            cout<<"|   "<<r3c2;
        }
        else if(r3c2<100){
            cout<<"|  "<<r3c2;
        }
        else if(r3c2<1000){
            cout<<"| "<<r3c2;
        }
        else{
            cout<<"|"<<r3c2;
        }
        //row4 colum 2
        if(r4c2<10){
            cout<<"|   "<<r4c2;
        }
        else if(r4c2<100){
            cout<<"|  "<<r4c2;
        }
        else if(r4c2<1000){
            cout<<"| "<<r4c2;
        }
        else{
            cout<<"|"<<r4c2;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 3
        if(r1c3<10){
            cout<<"|   "<<r1c3;
        }
        else if(r1c3<100){
            cout<<"|  "<<r1c3;
        }
        else if(r1c3<1000){
            cout<<"| "<<r1c3;
        }
        else{
            cout<<"|"<<r1c3;
        }
        //row2 colum 3
        if(r2c3<10){
            cout<<"|   "<<r2c3;
        }
        else if(r2c3<100){
            cout<<"|  "<<r2c3;
        }
        else if(r2c3<1000){
            cout<<"| "<<r2c3;
        }
        else{
            cout<<"|"<<r2c3;
        }
        //row3 colum 3
        if(r3c3<10){
            cout<<"|   "<<r3c3;
        }
        else if(r3c3<100){
            cout<<"|  "<<r3c3;
        }
        else if(r3c3<1000){
            cout<<"| "<<r3c3;
        }
        else{
            cout<<"|"<<r3c3;
        }
        //row4 colum 3
        if(r4c3<10){
            cout<<"|   "<<r4c3;
        }
        else if(r4c3<100){
            cout<<"|  "<<r4c3;
        }
        else if(r4c3<1000){
            cout<<"| "<<r4c3;
        }
        else{
            cout<<"|"<<r4c3;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 4
        if(r1c4<10){
            cout<<"|   "<<r1c4;
        }
        else if(r1c4<100){
            cout<<"|  "<<r1c4;
        }
        else if(r1c4<1000){
            cout<<"| "<<r1c4;
        }
        else{
            cout<<"|"<<r1c4;
        }
        //row2 colum 4
        if(r2c4<10){
            cout<<"|   "<<r2c4;
        }
        else if(r2c4<100){
            cout<<"|  "<<r2c4;
        }
        else if(r2c4<1000){
            cout<<"| "<<r2c4;
        }
        else{
            cout<<"|"<<r2c4;
        }
        //row3 colum 4
        if(r3c4<10){
            cout<<"|   "<<r3c4;
        }
        else if(r3c4<100){
            cout<<"|  "<<r3c4;
        }
        else if(r3c4<1000){
            cout<<"| "<<r3c4;
        }
        else{
            cout<<"|"<<r3c4;
        }
        //row4 colum 4
        if(r4c4<10){
            cout<<"|   "<<r4c4;
        }
        else if(r4c4<100){
            cout<<"|  "<<r4c4;
        }
        else if(r4c4<1000){
            cout<<"| "<<r4c4;
        }
        else{
            cout<<"|"<<r4c4;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        }   
        else if(keyprs=='s'||keyprs=='S'){
            //row 1 colum 4321 down logic 
            if(r1c4==r1c3&&r1c4!=0){
                r1c4+=r1c3;
                r1c3=0;   
                if(r1c2==r1c1&&r1c2!=0){
                    r1c2+=r1c1;
                    r1c3=r1c2;
                    r1c2=0;
                    r1c1=0;
                }
                else{
                    r1c3=r1c2;
                    r1c2=r1c1;
                    r1c1=0;
                }
            }
            else if(r1c3==r1c2&&r1c3!=0){
                r1c3+=r1c2;
                r1c2=0;
                if(r1c1!=0){
                    r1c2=r1c1;
                    r1c1=0;
                }
            }
            else if(r1c2==r1c1&&r1c2!=0){
                r1c2+=r1c1;
                r1c1=0;
            }
            else if(r1c4==r1c2&&r1c4!=0&&r1c3==0){
                r1c4+=r1c2;
                r1c2=0;
                r1c3=r1c1;
                r1c1=0;
            }
            else if(r1c4==r1c1&&r1c4!=0&&r1c3==0&&r1c2==0){
                r1c4+=r1c1;
                r1c1=0;
            }
            else if(r1c3==r1c1&&r1c3!=0&r1c2==0){
                r1c3+=r1c1;
                r1c1=0;
                if(r1c4==0){
                    r1c4=r1c3;
                    r1c3=0;
                }
            }
            else if(r1c4==0){
                if(r1c3!=0){
                    r1c4=r1c3;
                    r1c3=0;
                    if(r1c2!=0){
                        r1c3=r1c2;
                        r1c3=0;
                        if(r1c1!=0){
                            r1c2=r1c1;
                            r1c1=0;
                        }
                    }
                    else if(r1c1!=0){
                        r1c3=r1c1;
                        r1c1=0;
                    }
                }
                else if(r1c2!=0){
                    r1c4=r1c2;
                    r1c2=0;
                    if(r1c1!=0){
                        r1c3=r1c1;
                        r1c1=0;
                    }
                }
                else if(r1c1!=0){
                    r1c4=r1c1;
                    r1c1=0;
                }
            }
            else if(r1c3==0){
                if(r1c2!=0){
                    r1c3=r1c2;
                    r1c2=0;
                    if(r1c1!=0){
                        r1c2=r1c1;
                        r1c1=0;
                    }
                }
                else if(r1c1!=0){
                    r1c3=r1c1;
                    r1c1=0;
                }
            }
                else if(r1c2==0){
                    if(r1c1!=0){
                        r1c2=r1c1;
                        r1c1=0;
                    }
                }
            //row 2 colum 4321 down logic 
            if(r2c4==r2c3&&r2c4!=0){
                r2c4+=r2c3;
                r2c3=0;   
                if(r2c2==r2c1&&r2c2!=0){
                    r2c2+=r2c1;
                    r2c3=r2c2;
                    r2c2=0;
                    r2c1=0;
                }
                else{
                    r2c3=r2c2;
                    r2c2=r2c1;
                    r2c1=0;
                }
            }
            else if(r2c3==r2c2&&r2c3!=0){
                r2c3+=r2c2;
                r2c2=0;
                if(r2c1!=0){
                    r2c2=r2c1;
                    r2c1=0;
                }
            }
            else if(r2c2==r2c1&&r2c2!=0){
                r2c2+=r2c1;
                r2c1=0;
            }
            else if(r2c4==r2c2&&r2c4!=0&&r2c3==0){
                r2c4+=r2c2;
                r2c2=0;
                r2c3=r2c1;
                r2c1=0;
            }
            else if(r2c4==r2c1&&r2c4!=0&&r2c3==0&&r2c2==0){
                r2c4+=r2c1;
                r2c1=0;
            }
            else if(r2c3==r2c1&&r2c3!=0&r2c2==0){
                r2c3+=r2c1;
                r2c1=0;
                if(r2c4==0){
                    r2c4=r2c3;
                    r2c3=0;
                }
            }
            else if(r2c4==0){
                if(r2c3!=0){
                    r2c4=r2c3;
                    r2c3=0;
                    if(r2c2!=0){
                        r2c3=r2c2;
                        r2c3=0;
                        if(r2c1!=0){
                            r2c2=r2c1;
                            r2c1=0;
                        }
                    }
                    else if(r2c1!=0){
                        r2c3=r2c1;
                        r2c1=0;
                    }
                }
                else if(r2c2!=0){
                    r2c4=r2c2;
                    r2c2=0;
                    if(r2c1!=0){
                        r2c3=r2c1;
                        r2c1=0;
                    }
                }
                else if(r2c1!=0){
                    r2c4=r2c1;
                    r2c1=0;
                }
            }
            else if(r2c3==0){
                if(r2c2!=0){
                    r2c3=r2c2;
                    r2c2=0;
                    if(r2c1!=0){
                        r2c2=r2c1;
                        r2c1=0;
                    }
                }
                else if(r2c1!=0){
                    r2c3=r2c1;
                    r2c1=0;
                }
            }
                else if(r2c2==0){
                    if(r2c1!=0){
                        r2c2=r2c1;
                        r2c1=0;
                    }
                }
            //row 3 colum 4321 down logic 
            if(r3c4==r3c3&&r3c4!=0){
                r3c4+=r3c3;
                r3c3=0;   
                if(r3c2==r3c1&&r3c2!=0){
                    r3c2+=r3c1;
                    r3c3=r3c2;
                    r3c2=0;
                    r3c1=0;
                }
                else{
                    r3c3=r3c2;
                    r3c2=r3c1;
                    r3c1=0;
                }
            }
            else if(r3c3==r3c2&&r3c3!=0){
                r3c3+=r3c2;
                r3c2=0;
                if(r3c1!=0){
                    r3c2=r3c1;
                    r3c1=0;
                }
            }
            else if(r3c2==r3c1&&r3c2!=0){
                r3c2+=r3c1;
                r3c1=0;
            }
            else if(r3c4==r3c2&&r3c4!=0&&r3c3==0){
                r3c4+=r3c2;
                r3c2=0;
                r3c3=r3c1;
                r3c1=0;
            }
            else if(r3c4==r3c1&&r3c4!=0&&r3c3==0&&r3c2==0){
                r3c4+=r3c1;
                r3c1=0;
            }
            else if(r3c3==r3c1&&r3c3!=0&r3c2==0){
                r3c3+=r3c1;
                r3c1=0;
                if(r3c4==0){
                    r3c4=r3c3;
                    r3c3=0;
                }
            }
            else if(r3c4==0){
                if(r3c3!=0){
                    r3c4=r3c3;
                    r3c3=0;
                    if(r3c2!=0){
                        r3c3=r3c2;
                        r3c3=0;
                        if(r3c1!=0){
                            r3c2=r3c1;
                            r3c1=0;
                        }
                    }
                    else if(r3c1!=0){
                        r3c3=r3c1;
                        r3c1=0;
                    }
                }
                else if(r3c2!=0){
                    r3c4=r3c2;
                    r3c2=0;
                    if(r3c1!=0){
                        r3c3=r3c1;
                        r3c1=0;
                    }
                }
                else if(r3c1!=0){
                    r3c4=r3c1;
                    r3c1=0;
                }
            }
            else if(r3c3==0){
                if(r3c2!=0){
                    r3c3=r3c2;
                    r3c2=0;
                    if(r3c1!=0){
                        r3c2=r3c1;
                        r3c1=0;
                    }
                }
                else if(r3c1!=0){
                    r3c3=r3c1;
                    r3c1=0;
                }
            }
                else if(r3c2==0){
                    if(r3c1!=0){
                        r3c2=r3c1;
                        r3c1=0;
                    }
                }
            //row 4 colum 4321 down logic 
            if(r4c4==r4c3&&r4c4!=0){
                r4c4+=r4c3;
                r4c3=0;   
                if(r4c2==r4c1&&r4c2!=0){
                    r4c2+=r4c1;
                    r4c3=r4c2;
                    r4c2=0;
                    r4c1=0;
                }
                else{
                    r4c3=r4c2;
                    r4c2=r4c1;
                    r4c1=0;
                }
            }
            else if(r4c3==r4c2&&r4c3!=0){
                r4c3+=r4c2;
                r4c2=0;
                if(r4c1!=0){
                    r4c2=r4c1;
                    r4c1=0;
                }
            }
            else if(r4c2==r4c1&&r4c2!=0){
                r4c2+=r4c1;
                r4c1=0;
            }
            else if(r4c4==r4c2&&r4c4!=0&&r4c3==0){
                r4c4+=r4c2;
                r4c2=0;
                r4c3=r4c1;
                r4c1=0;
            }
            else if(r4c4==r4c1&&r4c4!=0&&r4c3==0&&r4c2==0){
                r4c4+=r4c1;
                r4c1=0;
            }
            else if(r4c3==r4c1&&r4c3!=0&r4c2==0){
                r4c3+=r4c1;
                r4c1=0;
                if(r4c4==0){
                    r4c4=r4c3;
                    r4c3=0;
                }
            }
            else if(r4c4==0){
                if(r4c3!=0){
                    r4c4=r4c3;
                    r4c3=0;
                    if(r4c2!=0){
                        r4c3=r4c2;
                        r4c3=0;
                        if(r4c1!=0){
                            r4c2=r4c1;
                            r4c1=0;
                        }
                    }
                    else if(r4c1!=0){
                        r4c3=r4c1;
                        r4c1=0;
                    }
                }
                else if(r4c2!=0){
                    r4c4=r4c2;
                    r4c2=0;
                    if(r4c1!=0){
                        r4c3=r4c1;
                        r4c1=0;
                    }
                }
                else if(r4c1!=0){
                    r4c4=r4c1;
                    r4c1=0;
                }
            }
            else if(r4c3==0){
                if(r4c2!=0){
                    r4c3=r4c2;
                    r4c2=0;
                    if(r4c1!=0){
                        r4c2=r4c1;
                        r4c1=0;
                    }
                }
                else if(r4c1!=0){
                    r4c3=r4c1;
                    r4c1=0;
                }
            }
                else if(r4c2==0){
                    if(r4c1!=0){
                        r4c2=r4c1;
                        r4c1=0;
                    }
                }
                //add a new num            
        short ranval1=rand()%16+1;
        switch(ranval1){
            case 1:{
                if(r1c1==0){
                    r1c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 2:{
                if(r2c1==0){
                    r2c1=newnum;
                    breakdo++;
                } 
                else{
                }

                break;
            }
            case 3:{
                if(r3c1==0){
                    r3c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 4:{
                if(r4c1==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 5:{
                if(r1c2==0){
                    r1c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 6:{
                if(r2c2==0){
                    r2c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 7:{
                if(r3c2==0){
                    r3c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 8:{
                if(r4c2==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 9:{
                if(r1c3==0){
                    r1c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 10:{
                if(r2c3==0){
                    r2c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 11:{
                if(r3c3==0){
                    r3c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 12:{
                if(r4c3==0){
                    r4c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 13:{
                if(r1c4==0){
                    r1c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 14:{
                if(r2c4==0){
                    r2c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 15:{
                if(r3c4==0){
                    r3c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 16:{
                if(r4c4==0){
                    r4c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
        }
        for(int format=0;format<20;format++){
            cout<<endl;
        }
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 1
        if(r1c1<10){
            cout<<"|   "<<r1c1;
        }
        else if(r1c1<100){
            cout<<"|  "<<r1c1;
        }
        else if(r1c1<1000){
            cout<<"| "<<r1c1;
        }
        else{
            cout<<"|"<<r1c1;
        }
        //row2 colum 1
        if(r2c1<10){
            cout<<"|   "<<r2c1;
        }
        else if(r2c1<100){
            cout<<"|  "<<r2c1;
        }
        else if(r2c1<1000){
            cout<<"| "<<r2c1;
        }
        else{
            cout<<"|"<<r2c1;
        }
        //row3 colum 1
        if(r3c1<10){
            cout<<"|   "<<r3c1;
        }
        else if(r3c1<100){
            cout<<"|  "<<r3c1;
        }
        else if(r3c1<1000){
            cout<<"| "<<r3c1;
        }
        else{
            cout<<"|"<<r3c1;
        }
        //row4 colum 1
        if(r4c1<10){
            cout<<"|   "<<r4c1;
        }
        else if(r4c1<100){
            cout<<"|  "<<r4c1;
        }
        else if(r4c1<1000){
            cout<<"| "<<r4c1;
        }
        else{
            cout<<"|"<<r4c1;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 2
        if(r1c2<10){
            cout<<"|   "<<r1c2;
        }
        else if(r1c2<100){
            cout<<"|  "<<r1c2;
        }
        else if(r1c2<1000){
            cout<<"| "<<r1c2;
        }
        else{
            cout<<"|"<<r1c2;
        }
        //row2 colum 2
        if(r2c2<10){
            cout<<"|   "<<r2c2;
        }
        else if(r2c2<100){
            cout<<"|  "<<r2c2;
        }
        else if(r2c2<1000){
            cout<<"| "<<r2c2;
        }
        else{
            cout<<"|"<<r2c2;
        }
        //row3 colum 2
        if(r3c2<10){
            cout<<"|   "<<r3c2;
        }
        else if(r3c2<100){
            cout<<"|  "<<r3c2;
        }
        else if(r3c2<1000){
            cout<<"| "<<r3c2;
        }
        else{
            cout<<"|"<<r3c2;
        }
        //row4 colum 2
        if(r4c2<10){
            cout<<"|   "<<r4c2;
        }
        else if(r4c2<100){
            cout<<"|  "<<r4c2;
        }
        else if(r4c2<1000){
            cout<<"| "<<r4c2;
        }
        else{
            cout<<"|"<<r4c2;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 3
        if(r1c3<10){
            cout<<"|   "<<r1c3;
        }
        else if(r1c3<100){
            cout<<"|  "<<r1c3;
        }
        else if(r1c3<1000){
            cout<<"| "<<r1c3;
        }
        else{
            cout<<"|"<<r1c3;
        }
        //row2 colum 3
        if(r2c3<10){
            cout<<"|   "<<r2c3;
        }
        else if(r2c3<100){
            cout<<"|  "<<r2c3;
        }
        else if(r2c3<1000){
            cout<<"| "<<r2c3;
        }
        else{
            cout<<"|"<<r2c3;
        }
        //row3 colum 3
        if(r3c3<10){
            cout<<"|   "<<r3c3;
        }
        else if(r3c3<100){
            cout<<"|  "<<r3c3;
        }
        else if(r3c3<1000){
            cout<<"| "<<r3c3;
        }
        else{
            cout<<"|"<<r3c3;
        }
        //row4 colum 3
        if(r4c3<10){
            cout<<"|   "<<r4c3;
        }
        else if(r4c3<100){
            cout<<"|  "<<r4c3;
        }
        else if(r4c3<1000){
            cout<<"| "<<r4c3;
        }
        else{
            cout<<"|"<<r4c3;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 4
        if(r1c4<10){
            cout<<"|   "<<r1c4;
        }
        else if(r1c4<100){
            cout<<"|  "<<r1c4;
        }
        else if(r1c4<1000){
            cout<<"| "<<r1c4;
        }
        else{
            cout<<"|"<<r1c4;
        }
        //row2 colum 4
        if(r2c4<10){
            cout<<"|   "<<r2c4;
        }
        else if(r2c4<100){
            cout<<"|  "<<r2c4;
        }
        else if(r2c4<1000){
            cout<<"| "<<r2c4;
        }
        else{
            cout<<"|"<<r2c4;
        }
        //row3 colum 4
        if(r3c4<10){
            cout<<"|   "<<r3c4;
        }
        else if(r3c4<100){
            cout<<"|  "<<r3c4;
        }
        else if(r3c4<1000){
            cout<<"| "<<r3c4;
        }
        else{
            cout<<"|"<<r3c4;
        }
        //row4 colum 4
        if(r4c4<10){
            cout<<"|   "<<r4c4;
        }
        else if(r4c4<100){
            cout<<"|  "<<r4c4;
        }
        else if(r4c4<1000){
            cout<<"| "<<r4c4;
        }
        else{
            cout<<"|"<<r4c4;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;  
        }
        else if(keyprs=='d'||keyprs=='D'){
            //D right logic
            //4321 colum 1 logic
            if(r4c1==r3c1&&r4c1!=0){
                r4c1+=r3c1;
                r3c1=0;   
                if(r2c1==r1c1&&r2c1!=0){
                    r2c1+=r1c1;
                    r3c1=r2c1;
                    r2c1=0;
                    r1c1=0;
                }
                else{
                    r3c1=r2c1;
                    r2c1=r1c1;
                    r1c1=0;
                }
            }
            else if(r3c1==r2c1&&r3c1!=0){
                r3c1+=r2c1;
                r2c1=0;
                if(r1c1!=0){
                    r2c1=r1c1;
                    r1c1=0;
                }
            }
            else if(r2c1==r1c1&&r2c1!=0){
                r2c1+=r1c1;
                r1c1=0;
            }
            else if(r4c1==r2c1&&r4c1!=0&&r3c1==0){
                r4c1+=r2c1;
                r2c1=0;
                r3c1=r1c1;
                r1c1=0;
            }
            else if(r4c1==r1c1&&r4c1!=0&&r3c1==0&&r2c1==0){
                r4c1+=r1c1;
                r1c1=0;
            }
            else if(r3c1==r1c1&&r3c1!=0&r2c1==0){
                r3c1+=r1c1;
                r1c1=0;
                if(r4c1==0){
                    r4c1=r3c1;
                    r3c1=0;
                }
            }
            else if(r4c1==0){
                if(r3c1!=0){
                    r4c1=r3c1;
                    r3c1=0;
                    if(r2c1!=0){
                        r3c1=r2c1;
                        r2c1=0;
                        if(r1c1!=0){
                            r2c1=r1c1;
                            r1c1=0;
                        }
                    }
                    else if(r1c1!=0){
                        r3c1=r1c1;
                        r1c1=0;
                    }
                }
                else if(r2c1!=0){
                    r4c1=r2c1;
                    r2c1=0;
                    if(r1c1!=0){
                        r3c1=r1c1;
                        r1c1=0;
                    }
                }
                else if(r1c1!=0){
                    r4c1=r1c1;
                    r1c1=0;
                }
            }
            else if(r3c1==0){
                if(r2c1!=0){
                    r3c1=r2c1;
                    r1c1=0;
                    if(r1c1!=0){
                        r2c1=r1c1;
                        r1c1=0;
                    }
                }
                else if(r1c1!=0){
                    r3c1=r1c1;
                    r1c1=0;
                }
            }
                else if(r2c1==0){
                    if(r1c1!=0){
                        r2c1=r1c1;
                        r1c1=0;
                    }
                }
            //4321 colum 2 logic
            if(r4c2==r3c2&&r4c2!=0){
                r4c2+=r3c2;
                r3c2=0;   
                if(r2c2==r1c2&&r2c2!=0){
                    r2c2+=r1c2;
                    r3c2=r2c2;
                    r2c2=0;
                    r1c2=0;
                }
                else{
                    r3c2=r2c2;
                    r2c2=r1c2;
                    r1c2=0;
                }
            }
            else if(r3c2==r2c2&&r3c2!=0){
                r3c2+=r2c2;
                r2c2=0;
                if(r1c2!=0){
                    r2c2=r1c2;
                    r1c2=0;
                }
            }
            else if(r2c2==r1c2&&r2c2!=0){
                r2c2+=r1c2;
                r1c2=0;
            }
            else if(r4c2==r2c2&&r4c2!=0&&r3c2==0){
                r4c2+=r2c2;
                r2c2=0;
                r3c2=r1c2;
                r1c2=0;
            }
            else if(r4c2==r1c2&&r4c2!=0&&r3c2==0&&r2c2==0){
                r4c2+=r1c2;
                r1c2=0;
            }
            else if(r3c2==r1c2&&r3c2!=0&r2c2==0){
                r3c2+=r1c2;
                r1c2=0;
                if(r4c2==0){
                    r4c2=r3c2;
                    r3c2=0;
                }
            }
            else if(r4c2==0){
                if(r3c2!=0){
                    r4c2=r3c2;
                    r3c2=0;
                    if(r2c2!=0){
                        r3c2=r2c2;
                        r2c2=0;
                        if(r1c2!=0){
                            r2c2=r1c2;
                            r1c2=0;
                        }
                    }
                    else if(r1c2!=0){
                        r3c2=r1c2;
                        r1c2=0;
                    }
                }
                else if(r2c2!=0){
                    r4c2=r2c2;
                    r2c2=0;
                    if(r1c2!=0){
                        r3c2=r1c2;
                        r1c2=0;
                    }
                }
                else if(r1c2!=0){
                    r4c2=r1c2;
                    r1c2=0;
                }
            }
            else if(r3c2==0){
                if(r2c2!=0){
                    r3c2=r2c2;
                    r1c2=0;
                    if(r1c2!=0){
                        r2c2=r1c2;
                        r1c2=0;
                    }
                }
                else if(r1c2!=0){
                    r3c2=r1c2;
                    r1c2=0;
                }
            }
                else if(r2c2==0){
                    if(r1c2!=0){
                        r2c2=r1c2;
                        r1c2=0;
                    }
                }
            //4321 colum 3 logic
            if(r4c3==r3c3&&r4c3!=0){
                r4c3+=r3c3;
                r3c3=0;   
                if(r2c3==r1c3&&r2c3!=0){
                    r2c3+=r1c3;
                    r3c3=r2c3;
                    r2c3=0;
                    r1c3=0;
                }
                else{
                    r3c3=r2c3;
                    r2c3=r1c3;
                    r1c3=0;
                }
            }
            else if(r3c3==r2c3&&r3c3!=0){
                r3c3+=r2c3;
                r2c3=0;
                if(r1c3!=0){
                    r2c3=r1c3;
                    r1c3=0;
                }
            }
            else if(r2c3==r1c3&&r2c3!=0){
                r2c3+=r1c3;
                r1c3=0;
            }
            else if(r4c3==r2c3&&r4c3!=0&&r3c3==0){
                r4c3+=r2c3;
                r2c3=0;
                r3c3=r1c3;
                r1c3=0;
            }
            else if(r4c3==r1c3&&r4c3!=0&&r3c3==0&&r2c3==0){
                r4c3+=r1c3;
                r1c3=0;
            }
            else if(r3c3==r1c3&&r3c3!=0&r2c3==0){
                r3c3+=r1c3;
                r1c3=0;
                if(r4c3==0){
                    r4c3=r3c3;
                    r3c3=0;
                }
            }
            else if(r4c3==0){
                if(r3c3!=0){
                    r4c3=r3c3;
                    r3c3=0;
                    if(r2c3!=0){
                        r3c3=r2c3;
                        r2c3=0;
                        if(r1c3!=0){
                            r2c3=r1c3;
                            r1c3=0;
                        }
                    }
                    else if(r1c3!=0){
                        r3c3=r1c3;
                        r1c3=0;
                    }
                }
                else if(r2c3!=0){
                    r4c3=r2c3;
                    r2c3=0;
                    if(r1c3!=0){
                        r3c3=r1c3;
                        r1c3=0;
                    }
                }
                else if(r1c3!=0){
                    r4c3=r1c3;
                    r1c3=0;
                }
            }
            else if(r3c3==0){
                if(r2c3!=0){
                    r3c3=r2c3;
                    r1c3=0;
                    if(r1c3!=0){
                        r2c3=r1c3;
                        r1c3=0;
                    }
                }
                else if(r1c3!=0){
                    r3c3=r1c3;
                    r1c3=0;
                }
            }
                else if(r2c3==0){
                    if(r1c3!=0){
                        r2c3=r1c3;
                        r1c3=0;
                    }
                }
            //4321 colum 4 logic
            if(r4c4==r3c4&&r4c4!=0){
                r4c4+=r3c4;
                r3c4=0;   
                if(r2c4==r1c4&&r2c4!=0){
                    r2c4+=r1c4;
                    r3c4=r2c4;
                    r2c4=0;
                    r1c4=0;
                }
                else{
                    r3c4=r2c4;
                    r2c4=r1c4;
                    r1c4=0;
                }
            }
            else if(r3c4==r2c4&&r3c4!=0){
                r3c4+=r2c4;
                r2c4=0;
                if(r1c4!=0){
                    r2c4=r1c4;
                    r1c4=0;
                }
            }
            else if(r2c4==r1c4&&r2c4!=0){
                r2c4+=r1c4;
                r1c4=0;
            }
            else if(r4c4==r2c4&&r4c4!=0&&r3c4==0){
                r4c4+=r2c4;
                r2c4=0;
                r3c4=r1c4;
                r1c4=0;
            }
            else if(r4c4==r1c4&&r4c4!=0&&r3c4==0&&r2c4==0){
                r4c4+=r1c4;
                r1c4=0;
            }
            else if(r3c4==r1c4&&r3c4!=0&r2c4==0){
                r3c4+=r1c4;
                r1c4=0;
                if(r4c4==0){
                    r4c4=r3c4;
                    r3c4=0;
                }
            }
            else if(r4c4==0){
                if(r3c4!=0){
                    r4c4=r3c4;
                    r3c4=0;
                    if(r2c4!=0){
                        r3c4=r2c4;
                        r2c4=0;
                        if(r1c4!=0){
                            r2c4=r1c4;
                            r1c4=0;
                        }
                    }
                    else if(r1c4!=0){
                        r3c4=r1c4;
                        r1c4=0;
                    }
                }
                else if(r2c4!=0){
                    r4c4=r2c4;
                    r2c4=0;
                    if(r1c4!=0){
                        r3c4=r1c4;
                        r1c4=0;
                    }
                }
                else if(r1c4!=0){
                    r4c4=r1c4;
                    r1c4=0;
                }
            }
            else if(r3c4==0){
                if(r2c4!=0){
                    r3c4=r2c4;
                    r1c4=0;
                    if(r1c4!=0){
                        r2c4=r1c4;
                        r1c4=0;
                    }
                }
                else if(r1c4!=0){
                    r3c4=r1c4;
                    r1c4=0;
                }
            }
                else if(r2c4==0){
                    if(r1c4!=0){
                        r2c4=r1c4;
                        r1c4=0;
                    }
                }
        //add a new num            
        short ranval1=rand()%16+1;
        switch(ranval1){
            case 1:{
                if(r1c1==0){
                    r1c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 2:{
                if(r2c1==0){
                    r2c1=newnum;
                    breakdo++;
                } 
                else{
                }

                break;
            }
            case 3:{
                if(r3c1==0){
                    r3c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 4:{
                if(r4c1==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 5:{
                if(r1c2==0){
                    r1c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 6:{
                if(r2c2==0){
                    r2c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 7:{
                if(r3c2==0){
                    r3c2=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 8:{
                if(r4c2==0){
                    r4c1=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 9:{
                if(r1c3==0){
                    r1c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 10:{
                if(r2c3==0){
                    r2c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 11:{
                if(r3c3==0){
                    r3c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 12:{
                if(r4c3==0){
                    r4c3=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 13:{
                if(r1c4==0){
                    r1c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 14:{
                if(r2c4==0){
                    r2c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 15:{
                if(r3c4==0){
                    r3c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
            case 16:{
                if(r4c4==0){
                    r4c4=newnum;
                    breakdo++;
                } 
                else{
                }
                break;
            }
        }
        for(int format=0;format<20;format++){
            cout<<endl;
        }
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 1
        if(r1c1<10){
            cout<<"|   "<<r1c1;
        }
        else if(r1c1<100){
            cout<<"|  "<<r1c1;
        }
        else if(r1c1<1000){
            cout<<"| "<<r1c1;
        }
        else{
            cout<<"|"<<r1c1;
        }
        //row2 colum 1
        if(r2c1<10){
            cout<<"|   "<<r2c1;
        }
        else if(r2c1<100){
            cout<<"|  "<<r2c1;
        }
        else if(r2c1<1000){
            cout<<"| "<<r2c1;
        }
        else{
            cout<<"|"<<r2c1;
        }
        //row3 colum 1
        if(r3c1<10){
            cout<<"|   "<<r3c1;
        }
        else if(r3c1<100){
            cout<<"|  "<<r3c1;
        }
        else if(r3c1<1000){
            cout<<"| "<<r3c1;
        }
        else{
            cout<<"|"<<r3c1;
        }
        //row4 colum 1
        if(r4c1<10){
            cout<<"|   "<<r4c1;
        }
        else if(r4c1<100){
            cout<<"|  "<<r4c1;
        }
        else if(r4c1<1000){
            cout<<"| "<<r4c1;
        }
        else{
            cout<<"|"<<r4c1;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 2
        if(r1c2<10){
            cout<<"|   "<<r1c2;
        }
        else if(r1c2<100){
            cout<<"|  "<<r1c2;
        }
        else if(r1c2<1000){
            cout<<"| "<<r1c2;
        }
        else{
            cout<<"|"<<r1c2;
        }
        //row2 colum 2
        if(r2c2<10){
            cout<<"|   "<<r2c2;
        }
        else if(r2c2<100){
            cout<<"|  "<<r2c2;
        }
        else if(r2c2<1000){
            cout<<"| "<<r2c2;
        }
        else{
            cout<<"|"<<r2c2;
        }
        //row3 colum 2
        if(r3c2<10){
            cout<<"|   "<<r3c2;
        }
        else if(r3c2<100){
            cout<<"|  "<<r3c2;
        }
        else if(r3c2<1000){
            cout<<"| "<<r3c2;
        }
        else{
            cout<<"|"<<r3c2;
        }
        //row4 colum 2
        if(r4c2<10){
            cout<<"|   "<<r4c2;
        }
        else if(r4c2<100){
            cout<<"|  "<<r4c2;
        }
        else if(r4c2<1000){
            cout<<"| "<<r4c2;
        }
        else{
            cout<<"|"<<r4c2;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 3
        if(r1c3<10){
            cout<<"|   "<<r1c3;
        }
        else if(r1c3<100){
            cout<<"|  "<<r1c3;
        }
        else if(r1c3<1000){
            cout<<"| "<<r1c3;
        }
        else{
            cout<<"|"<<r1c3;
        }
        //row2 colum 3
        if(r2c3<10){
            cout<<"|   "<<r2c3;
        }
        else if(r2c3<100){
            cout<<"|  "<<r2c3;
        }
        else if(r2c3<1000){
            cout<<"| "<<r2c3;
        }
        else{
            cout<<"|"<<r2c3;
        }
        //row3 colum 3
        if(r3c3<10){
            cout<<"|   "<<r3c3;
        }
        else if(r3c3<100){
            cout<<"|  "<<r3c3;
        }
        else if(r3c3<1000){
            cout<<"| "<<r3c3;
        }
        else{
            cout<<"|"<<r3c3;
        }
        //row4 colum 3
        if(r4c3<10){
            cout<<"|   "<<r4c3;
        }
        else if(r4c3<100){
            cout<<"|  "<<r4c3;
        }
        else if(r4c3<1000){
            cout<<"| "<<r4c3;
        }
        else{
            cout<<"|"<<r4c3;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;
        //row1 colum 4
        if(r1c4<10){
            cout<<"|   "<<r1c4;
        }
        else if(r1c4<100){
            cout<<"|  "<<r1c4;
        }
        else if(r1c4<1000){
            cout<<"| "<<r1c4;
        }
        else{
            cout<<"|"<<r1c4;
        }
        //row2 colum 4
        if(r2c4<10){
            cout<<"|   "<<r2c4;
        }
        else if(r2c4<100){
            cout<<"|  "<<r2c4;
        }
        else if(r2c4<1000){
            cout<<"| "<<r2c4;
        }
        else{
            cout<<"|"<<r2c4;
        }
        //row3 colum 4
        if(r3c4<10){
            cout<<"|   "<<r3c4;
        }
        else if(r3c4<100){
            cout<<"|  "<<r3c4;
        }
        else if(r3c4<1000){
            cout<<"| "<<r3c4;
        }
        else{
            cout<<"|"<<r3c4;
        }
        //row4 colum 4
        if(r4c4<10){
            cout<<"|   "<<r4c4;
        }
        else if(r4c4<100){
            cout<<"|  "<<r4c4;
        }
        else if(r4c4<1000){
            cout<<"| "<<r4c4;
        }
        else{
            cout<<"|"<<r4c4;
        }
        cout<<endl;
        cout<<"+----+----+----+----+"<<endl;  
        }
    }
    return 0;
}