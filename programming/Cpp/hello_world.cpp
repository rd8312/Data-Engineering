#include <iostream>
using namespace std;

int main(){
    std::cout << "Hello";
    std::cout << "world!";
    
    /*�b�@���@�W�A�зǿ�X�b�L����r���ɴN�|�۰ʲM�X�w�İ�*/
    std::cout << "Hello";
    std::cout << "\n";
    std::cout << "world!\n";
    
    std::cout << "Hello\nworld!";
    
    std::cout << "Hello" "\n" "world!";
    
    std::cout << "Hello" << "\n" << "world!";
	
	/*
	std:endl �|�L����r���ñj��M�X�w�İ�(buffer)
	<< endl �۷�� << "\n" << std::flush; 
	*/
	std::cout << "Hello" << std::endl << "world!" << std::endl;
	std::cout << "Hello" << std::endl << "world!" << std::endl;
	
	std::cout << "Hello \"C++\" world!" << std::endl;
    
    cout << "Hello world!" << endl;
    return 0;
}

