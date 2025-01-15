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
	�b�����禡���A this ����r��ܩҩI�s��Ҫ��󪺰O�����}(����) 
	this ��� &p, *this ��� *&p, �Y�� p
	*/ 
	// return sqrt((*this).x * (*this).x + (*this).y * (*this).y);
	// this->x ���P (*this).x 
	return sqrt((*this).x * (*this).x + (*this).y * (*this).y);
}

int main(){
	Point p = {3, 5};
	cout << "Length(p) : " << Length(p) << endl
	     << "p.Length() : " << p.Length() << endl;
	return 0;
}

