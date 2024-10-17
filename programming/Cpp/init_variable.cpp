#include <iostream>
using namespace std;

int main(){
	int a = 3;
	int b(3);
	int c{3}; // C++11
	
	cout << "a : " << a << endl
		 << "b : " << b << endl
		 << "c : " << c << endl;
	
	// �ϥ� auto ����r�۰ʱ��_���A 
	auto e = 3;
	auto f(3);
	auto g{3};
	
	cout << "e : " << e << endl
		 << "f : " << f << endl
		 << "g : " << g << endl;
		 
	int h{3.2}; // {} ��l�ƪ��覡�b��T�|�o�ͷl���ɷ|�sĶ���~ error: narrowing conversion of '3.2000000000000002e+0' from 'double' to 'int' [-Wnarrowing]
	double i{3.2};
	auto j; // �S����l�Ȥ��i�ϥ� auto 
	
}

