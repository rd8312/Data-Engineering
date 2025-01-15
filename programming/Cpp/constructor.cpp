#include <iostream>
using namespace std;

class Grade {
  public:
    Grade() {
      cout << "Grade::Grade()" << endl;
    }
};

int main() {
  Grade g1;
  return 0;
}

