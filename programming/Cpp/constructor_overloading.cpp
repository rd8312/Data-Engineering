#include <iostream>
using namespace std;

class Grade {
  public:
    Grade() {
      cout << "Grade()" << endl;
    }
    Grade(int v) {
      cout << "Grade(int v): " << v << endl;
    }
};

int main() {
  Grade g1(3); 
  Grade g2{5};
  Grade g3;
}

