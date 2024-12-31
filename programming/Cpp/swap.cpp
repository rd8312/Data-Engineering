#include <iostream>
using namespace std;

void MySwap(int&, int&);

int main() {
	int a = 3, b = 5;
	
	MySwap(a, b);
	
	cout << "a : " << a << endl
		 << "b : " << b << endl;
	return 0;
}

void MySwap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

