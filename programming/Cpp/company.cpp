#include <iostream>
using namespace std;
 
class employee
{
    private:
        int rank;
        int mouth;
        int def;
    public:
        employee();
        employee(int &a, int &b, int &c);
        void show();
        int find_others(employee &tg);
 
};
 
int check(int &loc, int find[50][50], int &phase, int phase_num[]);
 
 
int main(int argc, char** argv) {
    int num;
    int r, m, d;
    int i,j,k;
    int first;
    int find_num;
    int phase = 0;
    int found;
    int sum;
    cin>>num;
    employee *em = new employee[num];
    int find[50][50];
    int phase_num[50];
    for(i=0;i<num;i++){
        cin>> r >> m >> d;
        em[i] = employee(r, m, d);
    }
    cin>> first;
    find[0][0] = first-1;
    phase++;
    find_num = 1;
    phase_num[0] = 1;
    sum = 1;
    while(1){
        found = 0;
        for(i=0;i<find_num;i++){
            for(j=0;j<num;j++){
                if(em[find[phase-1][i]].find_others(em[j])&&check(j, find,phase, phase_num)){
                    find[phase][found] = j;
                    found++;
                }
            }   
        }
        phase_num[phase] = found;
        phase++;
        find_num = found;
        sum += found;
        if(found==0){
            break;
        }
    }
    
    cout<<sum<<endl;
 
    delete []em;
    return 0;
}
 
 
employee::employee(){
    rank = 1;
    mouth = 1;
    def = 1;
}
 
employee::employee(int &a, int &b, int &c){
    rank = a;
    mouth = b;
    def = c;
}
 
int employee::find_others(employee &tg){
    if(rank>tg.rank&&mouth>tg.def){
        return 1;
    }
    else{
        return 0;
    }
}
 
int check(int &loc, int find[50][50], int &phase, int phase_num[]){
    int i,j;
    int same = 0;
    for(i=0;i<phase;i++){
        for(j=0;j<phase_num[i];j++){
            if(loc==find[i][j]){
                same = 1;
                return 0;
                break;
            }
        }   
    }
    if(same==0){
        return 1;
    }
}
 
void employee::show(){
    cout<<rank<<" "<<mouth<<" "<<def<<endl;
}
