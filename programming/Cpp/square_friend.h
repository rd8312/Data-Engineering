#include<iostream>
using namespace std;
 
class Square
{
    public:
        Square();
        Square( int n );
        int area();
        void setLen(int n);
        int getLen();
        friend void cmpSquare(Square &q1, Square &q2);
 
    private:
        int len;
};
 
void cmpSquare(Square &q1, Square &q2);
