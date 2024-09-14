#include<iostream>
#include "Pokemon.h"
 
using namespace std;
 
void Pokemon::ShowInfo(){
    cout << "Name: " << Name << endl;
    cout << "Lv: " << Lv << endl;
    cout << "HP: " << HpCur << "/"
         << HpMax << endl<< endl;
}
 
void Pokemon::Attack(Pokemon &Target){
    if(HpCur<=0){
        cout << Name << " is unable to attack." << endl;
        return;
    }
    if(Target.HpCur<=0){
        cout << Name << " cannot attack fainted target " << Target.Name << "." <<endl;
        return;
    }
    cout << Name << " Attack " << Target.Name << " "
         << Lv << " Points." << endl;
    Target.Defence(Lv);
}
void Pokemon::Defence( int atkp ){
    int defp = 0;
    HpCur -= (atkp-defp);
 
    if(HpCur<=0){
        cout << Name << " is fainted." << endl;
        HpCur = 0;
    }
}
void Pokemon::Cure(){
    HpCur = HpMax;
}
void Pokemon::setData(string name, int lv, int hp){
    if(name==""||name==" "||name==","){
        cout << "Name can't be empty.\n";
        Name = "No Name";  
    }
    if(lv<=0){
        cout << "Lv setting error.\n";
        lv = 1;  
    }
    if(hp<=0){
        cout << "Hp setting error.\n";
        hp = 1;  
    }
 
    Name = name;
    Lv = lv;
    HpCur = HpMax = hp;
}
 
Pokemon::Pokemon(){
    Name = "No Name";
    Lv = 1;
    HpCur = HpMax = 1;
}
 
Pokemon::Pokemon(string na, int lv, int hp){
    if(na==""||na==" "||na==","){
        cout << "Name can't be empty.\n";
        Name = "No Name";  
    }
    if(lv<=0){
        cout << "Lv setting error.\n";
        lv = 1;  
    }
    if(hp<=0){
        cout << "Hp setting error.\n";
        hp = 1;  
    }
 
    Name = na;
    Lv = lv;
    HpCur = HpMax = hp;
}
 
PokemonHealthCenter::PokemonHealthCenter(string na){
    Name = na;
}
void PokemonHealthCenter::Cure(Pokemon &p){
    p.Cure();
    cout<<p.Name<<" has restored health at "<<Name<<"."<<endl;
}
 
void Pokemon::operator>>(Pokemon &p){
    Attack(p);
}
 
void PokemonHealthCenter::operator<<(Pokemon &p){
    Cure(p);
}
