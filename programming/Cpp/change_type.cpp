#include <iostream>
using namespace std;

int main(){
	int a = 3.2; // 隱性轉型
	int b = (int) 3.2; // (T) 是 C 風格的顯性轉型 
	int c = static_cast<int>(3.2); // C++ 新增了 static_cast<T> 來明確區分顯性轉型的類型 
	cout << "a: " << a << endl
	     << "b: " << b << endl
	     << "c: " << c << endl;
	return 0;
} 
