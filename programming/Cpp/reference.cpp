#include <iostream>
using namespace std;

int main(){
	int a = 3;
	int& b = a;
	int& c = b;
	c = 5;
	cout << "a : " << a << endl
		 << "b : " << b << endl
		 << "c : " << c << endl;
	return 0;
}
 
