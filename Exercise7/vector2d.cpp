#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b) {
    // Write your code here
    this -> x = a;
    this -> y = b;

}

v2d::v2d(const v2d & v) {
    // Write your code here
    this -> x = v.x;
    this -> y = v.y;
    

}

v2d::~v2d() {
    // Write your code here
}

v2d & v2d::operator=(const v2d &v) {
    // Write your code here
    this -> x = v.x;
    this -> y = v.y;
    return *this;
}

v2d & v2d::operator+(const v2d &v) {
    // Write your code here
    this -> x = x + v.x;
    this -> y = y + v.y;
    return *this;
}

double v2d::operator*(const v2d &v) {
    // Write your code here
    //double dotProduct;
    return (x * v.x) + (y * v.y);
    
}

v2d & v2d::operator*(double k) {
    // Write your code here
    this -> x = k * x;
    this -> y = k * y;
    return *this;

}

double v2d::length() {
    // Write your code here
    double length; 
    length = sqrt(pow(x,2)+pow(y,2));
    return length;
}

