#include <iostream>

// �禡�h�� (function overloading) 
void Print(const char*);
void Print(char);


int main(){
	// ���F�W�٤��~�A�I�s�禡�ɤ]�|�̷ӶǤJ���޼�(argument) �P�Ѽ�(parameter)���ۦ���
	// �M�w�I�s���O���Ө禡 
	Print("Hello");
	Print('\n');
	Print("world!");
	return 0;
}

void Print(const char* str) {
	std::cout << str;
}

void Print(char ch) {
	std::cout << ch;
}

