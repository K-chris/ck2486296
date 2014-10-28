/* 
 * File:   main.cpp
 * Author: Chris
 *
 * Created on October 27, 2014, 10:38 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//function prototypes
void problem1();
void problem2();
void package(int,int,int,int,int,char);
void problem3();
int main(int argc, char** argv) {
    int choice;
    bool exitMnu=false;
    do{
        cout<<endl;
        cout<<"Enter in what problem you want to see"<<endl;
        cout<<"1) Gross pay calculator"<<endl;
        cout<<"2) ISP Bil Calculator "<<endl;
        cout<<"3) Fibonacci sequence "<<endl;
        cin>>choice;
       switch(choice){
           case 1:problem1();break;
           case 2:problem2();break;
           case 3:problem3();break;   
           default: exitMnu=true;

       }

    }
    while(!exitMnu);
    return 0;
}
void problem1(){
       int hours, rate,total;
    cout<<"Enter in the hours you worked this week"<<endl;
    cin>>hours;
    if(hours>60){
        cout<<"thats too many hours. max hours is 60, enter in less hours"<<endl;
        cin>>hours;
    }
    cout<<"Enter in your payrate"<<endl;
    cin>>rate;
    if(hours<=20){
        total=hours*rate;
    }
    else if(hours>20&&hours<=40){
        hours-=20;
    
        total=(rate*20)+((rate*2)*hours);
    }
    else if(hours>40){
       
        hours-=40;
        total=rate*20+((rate*2)*20)+((rate*3)*hours);  
    }
    cout<<"your gross pay this week is $"<<total;

}

void problem2(){
        //declare variables
    int moncost=30, hour=11, addhour=22, cost=3, addcost=6;
    int usrhour,total;
    char count;
    cout<<"Enter in what package you have"<<endl;
    package( moncost,  hour,  addhour, cost, addcost,count);
    cin>>count;
    while(!(count=='a'||count=='b'||count=='c')){
        cout<<"invalid choice"<<endl;
        cin>>count;
    }
    cout<<"Enter in how many hours you used this month"<<endl;
    cin>>usrhour;
    for(char counter='a';counter<count;counter++){
        moncost+=5;
        hour+=11;
        cost--;
    }
    
    
    
    
   //for(char counter='a';counter<count;counter++){
   //    moncost+=5; hour+=11; addhour+=22;cost-=1; addcost-=2;
   // }
    total=moncost;
    
    if(usrhour>(hour*2)){
        usrhour-=(hour*2);
        total+=(usrhour*(cost*2));
        hour=(hour*2)-hour;
        total+=(hour*cost);
    }
    else if(usrhour>hour){
        usrhour-=hour;
        total+=(usrhour*cost);
    }
    
    cout<<"the total cost this month is $"<<total;
}
void package( int moncost, int hour, int addhour,int cost,int addcost, char count){
    count='a';
    while(count<'d'){
        cout<<count<<") "<<"$"<<moncost<<" per month, "<<hour<<" hours access. Additional hours"<<endl;
        cout<<"are $"<<cost<<" up to "<<addhour<<" hours then $"<<addcost<<" for all additional hours."<<endl;
        moncost+=5; hour+=11; addhour+=22;cost-=1; addcost-=2; count++;
    }  
}

void problem3(){
        int r1=15;
    int r2=r1;
    int r3=0;
    int r4=1;
    int r5;
    
    for(int stopper=1;r2>stopper;r2--){
        r3=r3+r4;
        r5=r4;
        r4=r3;
        r3=r5;
    }
    
   cout<<"the "<<r1<<" term of the fibonacci sequence is "<<r3<<endl;
}