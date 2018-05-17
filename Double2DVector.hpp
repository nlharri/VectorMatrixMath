#include <iostream>
using namespace std;

class Double2DVector {
  private:
    double x, y;
  public:
    Double2DVector();
    Double2DVector(double, double);
    ~Double2DVector();
    Double2DVector operator+ (Double2DVector&);
    friend std::ostream& operator<< (std::ostream&, Double2DVector&);
    friend double operator* (Double2DVector&, Double2DVector&);
    Double2DVector operator- (Double2DVector&);
    void set_x(double);
    void set_y(double);
    double get_x();
    double get_y();
    void set_coords(double, double);
};
