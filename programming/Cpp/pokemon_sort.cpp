#include <iostream>
 
using namespace std;
 
struct Pokemon{
    string Name;
    int Lv;
    int HP;
};
 
int main(int argc, char** argv) {
    
	Pokemon * PokemonList;
    int i=0,n=0,num=0;
    Pokemon temp;
    cin>>n;
    
	PokemonList=new Pokemon[n];
    for(i=0;i<n;i++){
        cin>>PokemonList[i].Name>>PokemonList[i].Lv>>PokemonList[i].HP;
    }
    
	cin>>num;
    if(num==0){
        
		for(i=0;i<n;i++){
            cout<<"Name: "<<PokemonList[i].Name<<endl<<"Lv: "<<PokemonList[i].Lv<<endl<<
                    "HP: "<<PokemonList[i].HP<<endl<<endl;
        }
    }
    
    if(num==1){
 
        for(i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(PokemonList[j].Name>PokemonList[j+1].Name){
                    temp=PokemonList[j+1];
                    PokemonList[j+1]=PokemonList[j];
                    PokemonList[j]=temp;
                }
            }
 
        }
        
        for(i=0;i<n;i++){
            cout<<"Name: "<<PokemonList[i].Name<<endl<<"Lv: "<<PokemonList[i].Lv<<endl
                <<"HP: "<<PokemonList[i].HP<<endl<<endl;       
        }
    }
    
    if(num==2){
        for(i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(PokemonList[j].Lv>PokemonList[j+1].Lv){
                    temp=PokemonList[j+1];
                    PokemonList[j+1]=PokemonList[j];
                    PokemonList[j]=temp;
                }
            }
 
        }
        
        for(i=0;i<n;i++){
            cout<<"Name: "<<PokemonList[i].Name<<endl<<"Lv: "<<PokemonList[i].Lv<<endl<<"HP: "<<PokemonList[i].HP<<endl<<endl;
		}
    }
    
    if(num==3){
        for(i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(PokemonList[j].HP>PokemonList[j+1].HP){
                    temp=PokemonList[j+1];
                    PokemonList[j+1]=PokemonList[j];
                    PokemonList[j]=temp;
                }
            }
 
        }
        
        for(i=0;i<n;i++){
            cout<<"Name: "<<PokemonList[i].Name<<endl<<"Lv: "<<PokemonList[i].Lv<<endl<<"HP: "<<PokemonList[i].HP<<endl<<endl;
		}
    }
 
    return 0;
}
