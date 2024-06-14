#pragma once
#include <string>

class vector {
private:
    double x, y;

public:
    vector(double x, double y);


    void display() const;
    double lenght() const;
    double angle() const; // angle in radians
    void set(double x, double y);
    double getX() const;
    double getY() const;

    static vector createVector(double angle, double length);
};