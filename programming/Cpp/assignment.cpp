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
	     
	int f = 3;
	int g;
	g = f = f + 1;
	cout << "f: " << f << endl
	     << "g: " << g << endl;
	
	int h = 3;
	int i;
	i = ++h; // ++h -> h = h + 1
	cout << "h: " << h << endl
	     << "i: " << i << endl;
	     
	int j = 3;
	int k;
	k = j++; // j++ -> j = j + 1
	cout << "j: " << j << endl
	     << "k: " << k << endl;
	
	return 0;
}

