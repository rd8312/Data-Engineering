#include <iostream>
#include <cmath>

using namespace std;

class Point{
	public:
		int x;
		int y;
		/*
		double Length(){
			return sqrt(x * x + y * y);
		}
		*/
		double Length();
};

double Point::Length(){
	return sqrt(x * x + y * y);
}

int main(){
	Point p = {3, 5}, q = {6, 4};
	cout << "p.Length() : " << p.Length() << endl
		 << "q.Length() : " << q.Length() << endl;
	return 0;
}
 
