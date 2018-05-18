#include "Double2DMatrix.hpp"
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793238463;

Double2DMatrix::Double2DMatrix() {
  this->x11 = 0;
  this->x12 = 0;
  this->x21 = 0;
  this->x22 = 0;
}

Double2DMatrix::Double2DMatrix(double x11, double x12, double x21, double x22) {
  this->x11 = x11;
  this->x12 = x12;
  this->x21 = x21;
  this->x22 = x22;
}

Double2DMatrix::~Double2DMatrix() {
}

Double2DMatrix Double2DMatrix::operator + (Double2DMatrix &anotherDouble2DMatrix) {
  Double2DMatrix result = Double2DMatrix(
    this->x11 + anotherDouble2DMatrix.x11,
    this->x12 + anotherDouble2DMatrix.x12,
    this->x21 + anotherDouble2DMatrix.x21,
    this->x22 + anotherDouble2DMatrix.x22
  );
  return result;
}

std::ostream& operator<< (std::ostream &os, Double2DMatrix &myDouble2DMatrix) {
  return os << "(" << myDouble2DMatrix.x11 << "; " << myDouble2DMatrix.x12        << endl \
            << " " << myDouble2DMatrix.x21 << "; " << myDouble2DMatrix.x22 << ")" << endl;
}

Double2DMatrix Double2DMatrix::operator* (Double2DMatrix &anotherDouble2DMatrix) {
  Double2DMatrix result = Double2DMatrix(
    this->x11 * anotherDouble2DMatrix.x11 + this->x12 * anotherDouble2DMatrix.x21,
    this->x11 * anotherDouble2DMatrix.x12 + this->x12 * anotherDouble2DMatrix.x22,
    this->x21 * anotherDouble2DMatrix.x11 + this->x22 * anotherDouble2DMatrix.x21,
    this->x21 * anotherDouble2DMatrix.x12 + this->x22 * anotherDouble2DMatrix.x22
  );
  return result;
};

Double2DMatrix Double2DMatrix::operator- (Double2DMatrix &anotherDouble2DMatrix) {
  Double2DMatrix result = Double2DMatrix(
    this->x11 - anotherDouble2DMatrix.x11,
    this->x12 - anotherDouble2DMatrix.x12,
    this->x21 - anotherDouble2DMatrix.x21,
    this->x22 - anotherDouble2DMatrix.x22
  );
  return result;
}

Double2DMatrix Double2DMatrix::get_rotation_matrix_by_degree(double fi) {
  return Double2DMatrix::get_rotation_matrix_by_radian(fi*PI/180.0);
}

Double2DMatrix Double2DMatrix::get_rotation_matrix_by_radian(double fi) {
  Double2DMatrix result = Double2DMatrix(
    cos(fi), -sin(fi),
    sin(fi), cos(fi)
  );
  return result;
}

void Double2DMatrix::set_x11(double x11) {
  this->x11 = x11;
}

void Double2DMatrix::set_x12(double x12) {
  this->x12 = x12;
}

void Double2DMatrix::set_x21(double x21) {
  this->x21 = x21;
}

void Double2DMatrix::set_x22(double x22) {
  this->x22 = x22;
}

double Double2DMatrix::get_x11() {
  return this->x11;
}

double Double2DMatrix::get_x12() {
  return this->x12;
}

double Double2DMatrix::get_x21() {
  return this->x21;
}

double Double2DMatrix::get_x22() {
  return this->x22;
}

void Double2DMatrix::set_elements(double x11, double x12, double x21, double x22) {
  this->x11 = x11;
  this->x12 = x12;
  this->x21 = x21;
  this->x22 = x22;
}
