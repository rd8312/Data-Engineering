#include <iostream>
using namespace std;

int main(){
	int a = 3.2; // �����૬
	int b = (int) 3.2; // (T) �O C ���檺����૬ 
	int c = static_cast<int>(3.2); // C++ �s�W�F static_cast<T> �ө��T�Ϥ�����૬������ 
	cout << "a: " << a << endl
	     << "b: " << b << endl
	     << "c: " << c << endl;
	return 0;
} 
