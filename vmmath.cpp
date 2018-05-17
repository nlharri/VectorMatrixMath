#include "Double2DVector.hpp"
#include "Double2DMatrix.hpp"

#include <iostream>
#include <cmath>

using namespace std;


int main() {
  cout << "Welcome to Vectors" << endl;
  Double2DVector a, b, c;
  Double2DMatrix m1, m2, m3;
  a = Double2DVector(1.4,2.6);
  b = Double2DVector(3.342,4.5);
  c = a + b;
  cout << c;
  a = Double2DVector(1,2);
  b = Double2DVector(3,4);
  c = a - b;
  cout << c;
  cout << a*b << endl;
  m1 = Double2DMatrix(1, 2, 3, 4);
  m2 = Double2DMatrix(2, 0, 1, 2);
  m3 = m1 * m2;
  cout << m3;
  m3 = m2 * m1;
  cout << m3;
  return 0;
}
