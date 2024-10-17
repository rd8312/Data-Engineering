#include <iostream>
using namespace std;

int main(){
	int a = 3;
	double b = 3.2;
	char c = '3';
	bool d = true;
	
	// 使用 sizeof 運算子可以計算物件所佔記憶體大小
	// C++ 只保證 char 佔用 1 個位元組，其他型態都是由 <實作定義> 
	cout << "sizeof(a) : " << sizeof(a) << endl
		 << "sizeof(b) : " << sizeof(b) << endl
		 << "sizeof(c) : " << sizeof(c) << endl
		 << "sizeof(d) : " << sizeof(d) << endl;
	
	int e = 10000;
	cout << "sizeof(int) : " << sizeof(int) << endl
		 << "e * e       : " << e * e       << endl
		 << "e * e * e   : " << e * e * e   << endl; // 溢位對有號整數是 <未定義行為> 
	
	long long f = 10000;
	cout << "sizeof(long long) : " << sizeof(long long) << endl
		 << "f * f       : " << f * f       << endl
		 << "f * f * f   : " << f * f * f   << endl; // 溢位對有號整數是 <未定義行為>
	return 0;
	
}

