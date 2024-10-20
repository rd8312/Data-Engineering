#include <iostream>
using namespace std;

int main(){
	int a = 2; // 初始化，非賦值運算 
	int b = 5; // 初始化，非賦值運算 
	b = a; // 賦值運算 
	
	// a 跟 b 是不同的變數，也是不同的物件。進行賦值運算會複製物件值 
	cout << "a: " << a << endl
	     << "b: " << b << endl;
	     
	int c, d, e;
	c = d = e = 9;
	cout << "c: " << c << endl
		 << "d: " << d << endl
	     << "e: " << e << endl;
	
	return 0;
}

