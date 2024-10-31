#include <iostream>
using namespace std;

int main(){
	int a = 3;
	int& b = a;
	b = 5;
	cout << "a : " << a << endl
		 << "b : " << b << endl;
	return 0;
}
 
