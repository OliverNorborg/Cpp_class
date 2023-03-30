#ifndef __Shape__
#define __Shape__

class Shape{
public:
    // Standard constructor: builds a vector (a,b)
    Shape();

    // Returns the area of the rectangle
    virtual double area(void) = 0;
    virtual double perimeter(void) = 0;
    virtual double height(void) = 0;
    virtual double width(void) = 0;
    virtual void rotate(void) = 0;
};

class Rectangle : public Shape {
public:
    // Standard constructor: builds a vector (a,b)
    Rectangle(double a, double b);

    // Returns the area of the rectangle
    double area(void);
    double perimeter(void);
    double height(void);
    double width(void);
    void rotate(void);

private:
    // Internal representation of a vector with just two doubles x and y
    double width_private;
    double height_private;
};

class Square : public Rectangle {
public:
    // Standard constructor: builds a vector (a,b)
    Square(double length);
};

class Circle : public Shape{
public:
    // Standard constructor: builds a vector (a,b)
    Circle(double a);

    // Returns the area of the rectangle
    double area(void);
    double perimeter(void);
    double height(void);
    double width(void);
    void rotate(void);

private:
    // Internal representation of a vector with just two doubles x and y
    int radius;
};
#endif