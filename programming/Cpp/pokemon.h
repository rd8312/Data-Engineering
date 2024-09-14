#ifndef POKEMON_H
#define POKEMON_H
 
#include <iostream>
using namespace std;
 
class Pokemon
{
    public:
        Pokemon();
        Pokemon(string &name, int &LV, int &HP);
        ~Pokemon();
        void ShowInfo();
        void Attack(Pokemon &Target);
        void Defence(int &n);
        void Cure();
        void setData(string &name, int &lv, int &hp);
    private:
        string Name;
        int Lv;
        int HpMax;
        int HpCur;
};
 
#endif
