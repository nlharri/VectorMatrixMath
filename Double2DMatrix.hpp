#include <iostream>
using namespace std;

class Double2DMatrix {
  private:
    double x11, x12, x21, x22;
  public:
    Double2DMatrix();
    Double2DMatrix(double, double, double, double);
    ~Double2DMatrix();
    Double2DMatrix operator+ (Double2DMatrix&);
    friend std::ostream& operator<< (std::ostream&, Double2DMatrix&);
    Double2DMatrix operator* (Double2DMatrix&);
    Double2DMatrix operator- (Double2DMatrix&);
    void set_x11(double);
    void set_x12(double);
    void set_x21(double);
    void set_x22(double);
    double get_x11();
    double get_x12();
    double get_x21();
    double get_x22();
    void set_elements(double, double, double, double);
};
