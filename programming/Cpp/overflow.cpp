#include <iostream>
using namespace std;

int main(){
	int a = 3;
	double b = 3.2;
	char c = '3';
	bool d = true;
	
	// �ϥ� sizeof �B��l�i�H�p�⪫��Ҧ��O����j�p
	// C++ �u�O�� char ���� 1 �Ӧ줸�աA��L���A���O�� <��@�w�q> 
	cout << "sizeof(a) : " << sizeof(a) << endl
		 << "sizeof(b) : " << sizeof(b) << endl
		 << "sizeof(c) : " << sizeof(c) << endl
		 << "sizeof(d) : " << sizeof(d) << endl;
	
	int e = 10000;
	cout << "sizeof(int) : " << sizeof(int) << endl
		 << "e * e       : " << e * e       << endl
		 << "e * e * e   : " << e * e * e   << endl; // ����靈����ƬO <���w�q�欰> 
	
	long long f = 10000;
	cout << "sizeof(long long) : " << sizeof(long long) << endl
		 << "f * f       : " << f * f       << endl
		 << "f * f * f   : " << f * f * f   << endl; // ����靈����ƬO <���w�q�欰>
	return 0;
	
}

