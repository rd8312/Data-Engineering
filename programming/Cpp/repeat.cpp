#include <iostream>
using namespace std;

int main(){
	int a = 1234, b = 1234;
	
	while (a !=0){
		cout << a % 10 << endl;
		a /= 10;
	}
	
	for (int i = 1; i <= 4; i++){
		cout << b % 10 << endl;
		b /= 10;
	}
	
}

