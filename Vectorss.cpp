#include <iostream>
#include "Vectors.h"
#include <cmath>

vector::vector(double x, double y) : x(x), y(y) {}




double vector::lenght() const {
    return std::sqrt(x * x + y * y);
}

double vector::angle() const {
    return std::atan2(y, x);
}

void vector::set(double x, double y) {
    this->x = x;
    this->y = y;
}

double vector::getX() const {
    return x;
}

double vector::getY() const {
    return y;
}

vector vector::createVector(double angle, double length) {
    return vector(length * std::cos(angle), length * std::sin(angle));
}

void vector::display() const {
    std::cout << "vector: (" << x << "," << y << ")" << std::endl;
}