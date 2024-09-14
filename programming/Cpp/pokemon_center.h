#ifndef POKEMON_H
#define POKEMON_H
 
#include <iostream>
using namespace std;
 
class Pokemon
{
    public:
        Pokemon();
        Pokemon(string na, int lv, int hp);
        void ShowInfo();
        void Attack(Pokemon &Target);
        void Defence( int atkp );
        void Cure();
 
friend class PokemonHealthCenter;
 
    private:
        void setData(string name, int lv, int hp);
        string Name;
        int Lv;
        int HpMax;
        int HpCur;      
    };
 
class PokemonHealthCenter
{
    public:
            PokemonHealthCenter(string na);
            void Cure(Pokemon &p);
    private:
            string Name;
};
typedef PokemonHealthCenter PC;
 
#endif
