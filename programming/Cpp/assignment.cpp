#include <iostream>
using namespace std;

int main(){
	int a = 2; // ��l�ơA�D��ȹB�� 
	int b = 5; // ��l�ơA�D��ȹB�� 
	b = a; // ��ȹB�� 
	
	// a �� b �O���P���ܼơA�]�O���P������C�i���ȹB��|�ƻs����� 
	cout << "a: " << a << endl
	     << "b: " << b << endl;
	     
	int c, d, e;
	c = d = e = 9;
	cout << "c: " << c << endl
		 << "d: " << d << endl
	     << "e: " << e << endl;
	
	return 0;
}

