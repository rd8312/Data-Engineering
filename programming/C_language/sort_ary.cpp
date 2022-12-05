#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
    int num;
    string temp;
    cin>>num;
    string *list = new string[num];
    int i,j;
    for(i=0;i<num;i++){
        cin>>list[i];
    }
 
    for(i=0;i<num;i++){
        bool change = false;
        for(j=0;j<num-1;j++){
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                change = true;
            }
        }
    }
    for(i=0;i<num;i++){
        if(i!=num-1){
            cout<<list[i]<<" ";
        }
        else{
            cout<<list[i]<<endl;
        }
    }
    delete []list;
    return 0;
}
