#include <iostream>

namespace a{
	int b = 3; // a::b 
}

using namespace a;

/*
�ѪR���~(ambiguous):
����ӥH�W�ϥΨ쪺�R�W�Ŷ��㦳�P�˪��W�ٳy���L�k�ϧO�ɴN�|�o�ͦ����~ 
 
int b = 5; //::b
 
*/

int main(){
	int b = 5;
	
	std::cout << "a::b : " << a::b << std::endl
			  << "b    : " << b    << std::endl;
	return 0;
}

