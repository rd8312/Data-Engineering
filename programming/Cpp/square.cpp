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
