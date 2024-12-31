#include <iostream>
// ﹚竡ㄧΑ籔把计 
void Print(const char*);

int main(){
	// ㄧΑ㊣ㄧΑ把计(parameter)穦ノま计(argument)秈︽﹍て 
	// 肚ま计 
	Print("Hello\nworld!");
	return 0;
}

void Print(const char* str){
	std::cout << str;
}

