#include "Pokemon.h"
 
Pokemon::Pokemon(){
    Name = "No Name";
    Lv = 1;
    HpMax = 1;
    HpCur = 1;
    itemNum = 0;
    items = new string[Lv];
}
Pokemon::Pokemon(string na, int lv, int hp){
    if(na==" "||na==""||na==","){
        cout<<"Name can't be empty."<<endl;
        Name = "No name";
    }
    else{
        Name = na;
    }
    if(lv<=0){
        Lv = 1;
        cout<<"Lv setting error."<<endl;
    }
    else{
        Lv = lv;
    }
    if(hp<=0){
        HpMax = 1;
        HpCur = 1;
        cout<<"Hp setting error."<<endl;
    }
    else{
        HpMax = hp;
        HpCur = hp;
    }
    items = new string[Lv];
    itemNum = 0;
}
Pokemon::~Pokemon(){
    cout<<Name<<" has returned to the nature."<<endl;
    delete []items;
}
void Pokemon::ShowInfo(){
    int i;
    cout<<"Name: "<<Name<<endl;
    cout<<"Lv: "<<Lv<<endl;
    cout<<"HP: "<<HpCur<<"/"<<HpMax<<endl;
    cout<<"Items: ";
    for(i=0;i<itemNum;i++){
        cout<<items[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
void Pokemon::Attack(Pokemon &tg){
    if(HpCur<=0 || tg.HpCur<=0){
        return;
    }
    tg.HpCur -= Lv;
    if(tg.HpCur<0){
        tg.HpCur = 0;
    }
}
void Pokemon::Defence(int atkp){
    if(HpCur<=0){
        return;
    }
    HpCur -= atkp;
    if(HpCur<0){
        HpCur = 0;
    }
}
void Pokemon::Cure(){
    HpCur = HpMax;
}
void Pokemon::setData(string na, int lv, int hp){
    if(na==" "||na==""||na==","){
        cout<<"Name can't be empty."<<endl;
        Name = "No name";
    }
    else{
        Name = na;
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
    itemNum = 0;
    items = new string[Lv];
}
void Pokemon::addItem(string item){
    if(itemNum==Lv){
        cout<<Name<<" is full, cannot carry "<<item<<"."<<endl;
        return;
    }
    else{
        items[itemNum] = item;
        itemNum++;
    }
}
