#include <iostream>
#include <cmath>
using namespace std;

class Point{
	public:
		int x;
		int y;
		double Length();
};

double Length(Point p){
	return sqrt(p.x * p.x + p.y * p.y);
}

double Point::Length(){
	/*
	在成員函式中， this 關鍵字表示所呼叫實例物件的記憶體位址(指標) 
	this 表示 &p, *this 表示 *&p, 即為 p
	*/ 
	// return sqrt((*this).x * (*this).x + (*this).y * (*this).y);
	// this->x 等同 (*this).x 
	return sqrt((*this).x * (*this).x + (*this).y * (*this).y);
}

int main(){
	Point p = {3, 5};
	cout << "Length(p) : " << Length(p) << endl
	     << "p.Length() : " << p.Length() << endl;
	return 0;
}

