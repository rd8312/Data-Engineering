#include <iostream>
// �w�q�禡�P�Ѽ� 
void Print(const char*);

int main(){
	// �禡�I�s�ɡA�禡�Ѽ�(parameter)�|�Τ޼�(argument)�i���l�� 
	// �ǤJ�޼� 
	Print("Hello\nworld!");
	return 0;
}

void Print(const char* str){
	std::cout << str;
}

