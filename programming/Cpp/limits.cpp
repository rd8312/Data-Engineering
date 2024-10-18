#include <iostream>
#include <limits>
using namespace std;

/*
<limits> 柑Τ std::numeric_limits<T> 琩高
T 计篈ボ程(max)籔程(min) 
*/
int main() {
  cout << "[int]"                                         << endl
       << "  Max: "   << numeric_limits<int>::max()       << endl
       << "  Min: "   << numeric_limits<int>::min()       << endl
       << "[unsigned]"                                    << endl
       << "  Max: "   << numeric_limits<unsigned>::max()  << endl
       << "  Min: "   << numeric_limits<unsigned>::min()  << endl
       << "[long long]"                                   << endl
       << "  Max: "   << numeric_limits<long long>::max() << endl
       << "  Min: "   << numeric_limits<long long>::min() << endl
  	   << "[float]"                                        << endl
       << "  Max: "  << numeric_limits<float>::max()       << endl
       << "  Min: "  << numeric_limits<float>::min()       << endl
       << "[double]"                                       << endl
       << "  Max: "  << numeric_limits<double>::max()      << endl
       << "  Min: "  << numeric_limits<double>::min()      << endl
       << "[long double]"                                  << endl
       << "  Max: "  << numeric_limits<long double>::max() << endl
       << "  Min: "  << numeric_limits<long double>::min() << endl;
  return 0;
}

