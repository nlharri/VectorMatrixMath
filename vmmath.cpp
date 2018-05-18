#include "Double2DVector.hpp"
#include "Double2DMatrix.hpp"

#include <iostream>
#include <cmath>

using namespace std;


int main() {
  cout << "Welcome to Vectors!" << endl << endl;
  Double2DVector a, b, c, d, e, f, g;
  Double2DMatrix m1, m2, m3, rotation90;

  cout << "------------------------------------" << endl;
  cout << "define 2 vectors and add them" << endl;
  // define 2 vectors
  a = Double2DVector(1.4,2.6);
  b = Double2DVector(3.342,4.5);

  // add them
  c = a + b;
  cout << a << endl << b << endl << c << endl;

  cout << "------------------------------------" << endl;
  cout << "subtract them" << endl;
  // subtract them
  c = a - b;
  cout << c << endl;

  cout << "------------------------------------" << endl;
  cout << "calculate dot product of the vectors" << endl;
  // calculate dot product of the vectors
  cout << a*b << endl << endl;

  cout << "------------------------------------" << endl;
  cout << "define 2 matrices and multiply them" << endl;
  // define 2 matrices
  m1 = Double2DMatrix(1, 2, 3, 4);
  m2 = Double2DMatrix(2, 0, 1, 2);

  // multiply them
  m3 = m1 * m2;
  cout << m1 << endl << m2 << endl << m3 << endl;

  cout << "------------------------------------" << endl;
  cout << "multiply them in the another order" << endl;
  // multiply them in the another order
  m3 = m2 * m1;
  cout << m3 << endl;

  cout << "------------------------------------" << endl;
  cout << "multiply a vector with a matrix" << endl;
  // multiply a vector with a matrix
  d = a * m3;
  cout << a << endl << m3 << endl << d << endl;

  cout << "------------------------------------" << endl;
  cout << "rotate a vector by using a rotation matrix" << endl;
  // rotate a vector by using a rotation matrix
  e = Double2DVector(1,1);
  rotation90 = Double2DMatrix::get_rotation_matrix_by_degree(90);
  e = e * rotation90;
  cout << e << endl;

  return 0;
}
