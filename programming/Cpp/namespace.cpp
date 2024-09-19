#include <iostream>

namespace a{
	int b = 3;
}

int b = 5;
int c = 7;

int main(){
	int c = 9;
	{
		int c = 11;
	}
	
	std::cout << "a::b : " << a::b << std::endl
			  << "b    : " << b    << std::endl
			  << "::b  : " << ::b  << std::endl
			  << "c    : " << c    << std::endl
			  << "::c  : " << ::c  << std::endl;
	return 0;
}

