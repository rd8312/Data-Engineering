#include <iostream>
using namespace std;

int main(){
	const int& a = 3;
	const int& b = a + 1;
	cout << "a : " << a << endl
		 << "b : " << b << endl;
		 
	int c = 3;
	const double& d = c;
	const long long& e = c;
	cout << "d : " << d << endl
		 << "sizeof(d) : " << sizeof(d) << endl 
		 << "e : " << e << endl
		 << "sizeof(e) : " << sizeof(e) << endl;
	return 0;
}

