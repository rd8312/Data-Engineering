#include <iostream>
#include <string.h>
using namespace std;
 
class Start_a_business
{
    private:
        char Garage[10][16];
        int car;
        int sellprice;
        int totalcost;
        int earn;
    public:
        Start_a_business(){
            int i,length;
            car = 0;
            sellprice = 0;
            totalcost = 0;
            earn = 0;
            for(i=0;i<10;i++){
                memset(Garage[i],'\0',sizeof(Garage[i]));
            }
        }
        void store(char x[16], struct car c[]);
        void sell(char x[16], struct car c[]);
        void displayi(){
            cout<<"Sell price= "<<sellprice<<endl;
        }
        void displaycost(){
            cout<<"Total cost= "<<totalcost<<endl;
        }
        void displayp(){
            cout<<"Profit= "<<earn<<endl;
        }
        void show(){
            cout<<sellprice<<endl;
            cout<<totalcost<<endl;
            cout<<earn<<endl;
        }
 
};
 
struct car{
    char type[16];
    int buy;
    int sell;
};

int main(int argc, char** argv) {
    car c[] = {{"BMW",8000,20000},
            {"Volkswagen",7000,18000},
            {"Ferrari",12000,35000},
            {"Proton",4000,50000},
            {"Audi",10000,30000},
            {"Lamborghini",15000,40000}};
    Start_a_business g1;
    char key;
    char brand[16];
    while(1){
        cin>>key;
        if(key=='a'){
            cin>>brand;
            cin.ignore(1024,'\n');
            g1.store(brand, c);
            //g1.show();
        }
        else if(key=='s'){
            cin>>brand;
            cin.ignore(1024,'\n');
            g1.sell(brand, c);
            //g1.show();
        }
        else if(key=='c'){
            g1.displaycost();
        }
        else if(key=='i'){
            g1.displayi();
        }
        else if(key=='p'){
            g1.displayp();
        }
        else if(key=='q'){
            cout<<"Thank you for visiting XMing_Garage. Bye bye."<<endl;
            break;
        }
    }
 
 
    return 0;
}
 
void Start_a_business::store(char x[16], struct car c[]){
    int i;
    if(car==10){
        cout<<"Garage FULL!\nCar not stored!"<<endl;
        return;
    }
    string temp = x;
    for(i=0;i<6;i++){
        if(temp==c[i].type){
            totalcost += c[i].buy;
            sellprice += c[i].sell;
            earn -= c[i].buy;
            strcpy(Garage[car],c[i].type);
            car++;
            cout<<"Store in a car."<<endl;
            cout<<"Type: "<<temp<<endl;
            cout<<"number car in garage: "<<car<<endl;
            return;
        }
    }
}
 
void Start_a_business::sell(char x[16], struct car c[]){
    int i,j,k,length,length2;
    int find = 0;
    string temp = x;
    string temp2;
    for(i=0;i<car;i++){
        if(temp==Garage[i]){
            find = 1;
            length = temp.length();
            memset(Garage[i],0,length);
            for(k=i;k<car-1;k++){
                strcpy(Garage[k],Garage[k+1]);   
            }
            temp2 = Garage[car-1];
            length2 = temp2.length();
            memset(Garage[car-1],0,length2);
            car--;
            cout<<"You sell a car."<<endl;
            cout<<"Type: "<<temp<<endl;
            for(j=0;j<6;j++){
                if(temp==c[j].type){
                    cout<<"Sell price: "<<c[j].sell<<endl;
                    earn += c[j].sell;
                    sellprice -= c[j].sell;
                    break;
                }
            }
            cout<<"number car left in garage: "<<car<<endl;
            break;
        }
    }
    if(find==0){
        cout<<"Car not found!"<<endl;
    }
}
