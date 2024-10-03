#include <iostream>

namespace a{
	int b = 3; // a::b 
}

using namespace a;

/*
解析錯誤(ambiguous):
有兩個以上使用到的命名空間具有同樣的名稱造成無法區別時就會發生此錯誤 
 
int b = 5; //::b
 
*/

int main(){
	int b = 5;
	
	std::cout << "a::b : " << a::b << std::endl
			  << "b    : " << b    << std::endl;
	return 0;
}

