#include <bits/stdc++.h>
using namespace std;
 
class Encrypt_decrypt_machine{
    private:
    char key[128];
    char text[128];
 
    public:
        void start(){
            cout<<"MACHINE BOOTING...\nWelcome, What can I help you?\n";
            cout<<"DEFAULT KEY= 000101000011101001001\n";
            strcpy(key,"000101000011101001001");
            strcpy(text,"");
        }
        
        int check_valid_stream(char stream[]){
            for(int i=0;i<strlen(stream);i++){
                if(stream[i]!='0'&&stream[i]!='1'){return 0;}
            }
            return 1;
        }
        
        void encrypt(char plaintext[]){
            if(check_valid_stream(plaintext)){
                strcpy(text,"");
                int i;
                for(i=0;i<strlen(plaintext);i++){
                    text[i]=((key[i%strlen(key)]-'0')^(plaintext[i]-'0'))+'0';
                }
                text[i]='\0';
                cout<<"ENCRYPT SUCCESS.\nchiphertext= "<<text<<endl;
            }
            else{cout<<"Plaintext contains character other than 0 and 1. ENCRYPT FAILED.\n";}
        }
        
        void decrypt(char chiphertext[]){
            if(check_valid_stream(chiphertext)){
                strcpy(text,"");
                int i;
                for(i=0;i<strlen(chiphertext);i++){
                    text[i]=((key[i%strlen(key)]-'0')^(chiphertext[i]-'0'))+'0';
                }
                text[i]='\0';
                cout<<"DECRYPT SUCCESS.\nplaintext= "<<text<<endl;
            }
            else{cout<<"Chiphertext contains character other than 0 and 1. ENCRYPT FAILED.\n";}
        }
        
        void updatekey(char newkey[]){
            if(check_valid_stream(newkey)){
                strcpy(key,"");
                strcpy(key,newkey);
                cout<<"UPDATE KEY SUCCESS.\nNEWKEY= "<<newkey<<endl;
            }
            else{cout<<"NEW KEY contains character other than 0 and 1. UPDATE KEY FAILED.\n";}
        }
        
        void ended(){
            cout<<"MACHINE HALTING...\n";
        }
};
 
typedef class Encrypt_decrypt_machine EDM;
 
int main(){
    EDM machine;
    machine.start();
 
    while(1){
        char ctrl;
        cin>>ctrl;
        char stream[128]={0};
        switch(ctrl){
            case 'e':
                cin>>stream;
                machine.encrypt(stream);
            break;
            case 'd':
                cin>>stream;
                machine.decrypt(stream);
            break;
            case 'u':
                cin>>stream;
                machine.updatekey(stream);
            break;
            case 'q':
                machine.ended();
            return 0;
            break;
        }
    }
return 0;
}
