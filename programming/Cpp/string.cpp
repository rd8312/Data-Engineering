#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//std::string s1;
	string s1, s2;
	
	s1 = "apple";
	s2 = "banana";
	
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	
	int len = s2.length();
	for(int i=0; i<len; i++){
		cout << s2[i] << " ";
	}
	cout << endl;
	
	cout << "op: " << endl;
	for(int i=0; i<len; i++){
		cout << s2.operator[](i) << " ";
	}
	cout << endl;
	
	return 0;
}
