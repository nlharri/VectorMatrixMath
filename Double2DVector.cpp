#include "Double2DVector.hpp"
#include <iostream>
using namespace std;

Double2DVector::Double2DVector() {
  this->x = 0;
  this->y = 0;
}

Double2DVector::Double2DVector(double x, double y) {
  this->x = x;
  this->y = y;
}

Double2DVector::~Double2DVector() {
}

Double2DVector Double2DVector::operator + (Double2DVector &anotherDouble2DVector) {
  Double2DVector* result = new Double2DVector(
    this->x + anotherDouble2DVector.get_x(),
    this->y + anotherDouble2DVector.get_y()
  );
  return *result;
}

std::ostream& operator<< (std::ostream &os, Double2DVector &myDouble2DVector) {
  return os << "(" << myDouble2DVector.x << "; " << myDouble2DVector.y << ")" << endl;
}

double operator* (Double2DVector &a, Double2DVector &b) {
  return a.x * b.x + a.y * b.y;
};

Double2DVector Double2DVector::operator- (Double2DVector &anotherDouble2DVector) {
  Double2DVector* result = new Double2DVector(
    this->x - anotherDouble2DVector.get_x(),
    this->y - anotherDouble2DVector.get_y()
  );
  return *result;
}

void Double2DVector::set_x(double x) {
  this->x = x;
}

void Double2DVector::set_y(double y) {
  this->y = y;
}

double Double2DVector::get_x() {
  return this->x;
}

double Double2DVector::get_y() {
  return this->y;
}

void Double2DVector::set_coords(double x, double y) {
  this->x = x;
  this->y = y;
}
