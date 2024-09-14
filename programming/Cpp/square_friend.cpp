#include<iostream>
#include "square.h"
using namespace std;
 
int Square::area(){
    int a = len * len;
    return a;
}
 
void Square::setLen(int n){
    if(n<1){
        len = 1;
        cout<<"len setting error"<<endl;
    }
    else{
        len = n;
    }
}
 
int Square::getLen(){
    return len;
}
 
Square::Square(){
    len = 0;
}
 
Square::Square(int n){
    if(n<1){
        len = 1;
        cout<<"len setting error"<<endl;
    }
    else{
        len = n;
    }
}
 
void cmpSquare(Square &q1, Square &q2){
    if(q1.len>q2.len){
        cout<<"1>2"<<endl;
    }
    else if(q1.len==q2.len){
        cout<<"1==2"<<endl;
    }
    else if(q1.len<q2.len){
        cout<<"1<2"<<endl;
    }
}
