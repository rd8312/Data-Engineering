#include <iostream>
using namespace std;
 
class eCash{
public:
    eCash(){
        Money = 0;
    }
    
    void store(int m){
        if(m<=0){
            cout << "eCash: Please enter a number > 0." <<endl;
            return;
        }
        
		Money += m;
        cout << "eCash: You stored " << m << "." <<endl;
    }
    
    void pay(int m){
        
		if(Money<m){
            cout << "eCash: Insufficient balance." <<endl;
            return;
        }
        
        if(m<=0){
            cout << "eCash: Please enter a number > 0." <<endl;
            return;
        }
        
        Money -= m;
        cout << "eCash: You spend " << m << "." <<endl;
    }
    
    void display(){
        cout << "eCash: You remaining " << Money << "." <<endl;
    }
 
private:
    int Money;
};
 
int main(){
    char mod;
    int m;
    eCash card;
 
    while(cin>>mod){
        switch(mod){
            case 's':
                cin >> m;
                card.store(m);
                break;
                
            case 'p':
                cin >> m;
                card.pay(m);
                break;
                
            case 'd':
                card.display();
                break;
        }
        
        if(mod=='q'){
            break;
        }
    }
 
    cout << "eCash: Thank you. Bye Bye." <<endl;
 
    return 0;
}
