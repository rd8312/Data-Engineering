#include <iostream>

// ㄧΑ更 (function overloading) 
void Print(const char*);
void Print(char);


int main(){
	// 埃嘿ぇ㊣ㄧΑ穦ㄌ酚肚ま计(argument) 籔把计(parameter)┦
	// ∕﹚㊣琌ㄧΑ 
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

