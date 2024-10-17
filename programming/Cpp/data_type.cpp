#include <iostream>
using namespace std;

int main(){
	int a = 3;
	double b = 3.2;
	char c = '3';
	bool d = true;
	
	cout << "Integer: " << a << endl
	     << "Floating-point number: " << b << endl
	     << "Character: " << c << endl
	     << "Boolean: " << d << endl
	     // 使用串流操縱器 boolalpha 可以讓 bool型態的值顯示 true 或 false 
	     << "Boolean: " << boolalpha << d << endl;
	
	return 0;
}

