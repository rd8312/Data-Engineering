#include <iostream>
using namespace std;

class Grade {
  public:
    Grade();
    Grade(const Grade&);
};



int main() {
  const Grade g1;
  // µ¥¦P©ó Grade g2(g1); 
  Grade g2 = g1;
}

Grade::Grade() {
  cout << "Grade::Grade()" << endl;
}

Grade::Grade(const Grade& g) {
  cout << "Grade::Grade(const Grade&)" << endl;
} 

