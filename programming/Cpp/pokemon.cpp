#include "Pokemon.h"
 
Pokemon::Pokemon(){
    Name = "No Name";
    Lv = 1;
    HpMax = 1;
    HpCur = 1;
}
Pokemon::Pokemon(string &name, int &LV, int &HP){
    if(name==" "||name==""||name==","){
        cout<<"Name can't be empty."<<endl;
        Name = "No name";
    }
    else{
        Name = name;
    }
    if(LV<=0){
        Lv = 1;
        cout<<"Lv setting error."<<endl;
    }
    else{
        Lv = LV;
    }
    if(HP<=0){
        HpMax = 1;
        HpCur = 1;
        cout<<"Hp setting error."<<endl;
    }
    else{
        HpMax = HP;
        HpCur = HP;
    }
}
Pokemon::~Pokemon(){
    cout<<Name<<" has returned to the nature."<<endl;
}
void Pokemon::ShowInfo(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Lv: "<<Lv<<endl;
    cout<<"HP: "<<HpCur<<"/"<<HpMax<<endl;
    cout<<endl;
}
void Pokemon::Attack(Pokemon &Target){
    if(HpCur<=0 || Target.HpCur<=0){
        return;
    }
    Target.HpCur -= Lv;
    if(Target.HpCur<0){
        Target.HpCur = 0;
    }
}
void Pokemon::Defence(int &n){
    if(HpCur<=0){
        return;
    }
    HpCur -= n;
    if(HpCur<0){
        HpCur = 0;
    }
}
void Pokemon::Cure(){
    HpCur = HpMax;
}
void Pokemon::setData(string &name, int &lv, int &hp){
    if(name==" "||name==""||name==","){
        cout<<"Name can't be empty."<<endl;
        Name = "No name";
    }
    else{
        Name = name;
    }
    if(lv<=0){
        Lv = 1;
        cout<<"Lv setting error."<<endl;
    }
    else{
        Lv = lv;
    }
    if(hp<=0){
        cout<<"Hp setting error."<<endl;
        HpMax = 1;
        HpCur = 1;
    }
    else{
        HpMax = hp;
        HpCur = hp;
    }
}
