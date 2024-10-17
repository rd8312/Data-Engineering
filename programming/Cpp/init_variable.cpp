#include <iostream>
using namespace std;

int main(){
	int a = 3;
	int b(3);
	int c{3}; // C++11
	
	cout << "a : " << a << endl
		 << "b : " << b << endl
		 << "c : " << c << endl;
	
	// 使用 auto 關鍵字自動推斷型態 
	auto e = 3;
	auto f(3);
	auto g{3};
	
	cout << "e : " << e << endl
		 << "f : " << f << endl
		 << "g : " << g << endl;
		 
	int h{3.2}; // {} 初始化的方式在資訊會發生損失時會編譯錯誤 error: narrowing conversion of '3.2000000000000002e+0' from 'double' to 'int' [-Wnarrowing]
	double i{3.2};
	auto j; // 沒有初始值不可使用 auto 
	
}

