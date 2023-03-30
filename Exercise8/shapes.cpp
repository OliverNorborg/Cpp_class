#include "shapes.h"
#include <cmath>

Shape::Shape(){

}


/*
    The Rectanlge class
*/

Rectangle::Rectangle(double a, double b) {
    this -> height_private= a;
    this -> width_private = b;
}
double Rectangle::area(void) {
    return width_private*height_private;
}
double Rectangle::perimeter() {
    return 2*(width_private+height_private);
}
double Rectangle::height(){
    return height_private;
}
double Rectangle::width(){
    return width_private;
}
void Rectangle::rotate(){
    double temp = width_private;
    width_private = height_private;
    height_private = temp;
}

/*
    The Square class
*/

Square::Square(double a): Rectangle(a, a) {
    
}


/*
    The Circle class
*/
Circle::Circle(double a) {
    this -> radius = a;
}
double Circle::area() {
    return M_PI*pow(radius,2);
}
double Circle::perimeter() {
    return 2*M_PI*radius;
}
double Circle::height(){
    return 2*radius;
}
double Circle::width(){
    return 2*radius;
}
void Circle::rotate(){

}