#include <iostream>
using namespace std;

class Point{
	// {} ���O���O���i���d�� 
	public:
		int x;
		int y;
};

int main(){
	// Point p;
	// p.x = 3;
	// p.y = 5;
	Point p = {3, 5};
	Point q{6, 4};
	cout << "p : (" << p.x << ", " << p.y << ")" << endl;
	cout << "q : (" << q.x << ", " << q.y << ")" << endl;
	return 0;
}
 
