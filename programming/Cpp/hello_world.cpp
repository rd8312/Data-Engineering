#include <iostream>
using namespace std;

int main(){
    std::cout << "Hello";
    std::cout << "world!";
    
    /*在一般實作上，標準輸出在印換行字元時就會自動清出緩衝區*/
    std::cout << "Hello";
    std::cout << "\n";
    std::cout << "world!\n";
    
    std::cout << "Hello\nworld!";
    
    std::cout << "Hello" "\n" "world!";
    
    std::cout << "Hello" << "\n" << "world!";
	
	/*
	std:endl 會印換行字元並強制清出緩衝區(buffer)
	<< endl 相當於 << "\n" << std::flush; 
	*/
	std::cout << "Hello" << std::endl << "world!" << std::endl;
	std::cout << "Hello" << std::endl << "world!" << std::endl;
	
	std::cout << "Hello \"C++\" world!" << std::endl;
    
    cout << "Hello world!" << endl;
    return 0;
}

