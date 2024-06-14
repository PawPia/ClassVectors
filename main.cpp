#include <iostream>
#include "Vectors.h"
int main() {

    int choice;
    double x, y, angle, length;
    vector vec(0, 0);

    while (true) {
        std::cout << "\n Menu:\n";
        std::cout << "1 - Set vector" << std::endl;
        std::cout << "2 - Print vector" << std::endl;
        std::cout << "3 - X coordinate of the end of the vector" << std::endl;
        std::cout << "4 - Y coordinate of the end of the vector" << std::endl;
        std::cout << "5 - Length of the vector" << std::endl;
        std::cout << "6 - Angle of the vector" << std::endl;
        std::cout << "7 - Create new vector using angle and length" << std::endl;
        std::cout << "8 - Exit" << std::endl;
        std::cout << "\nEnter your choice: \n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter x and y: ";
                std::cin >> x >> y;
                vec.set(x, y);
                break;
            case 2:
                vec.display();
                break;
            case 3:
                std::cout << "X coordinate: " << vec.getX() << std::endl;
                break;
            case 4:
                std::cout << "Y coordinate: " << vec.getY() << std::endl;
                break;
            case 5:
                std::cout << "Length: " << vec.lenght() << std::endl;
                break;
            case 6:
                std::cout << "Angle: " << vec.angle() << std::endl;
                break;
            case 7:
                std::cout << "Enter angle and length: ";
                std::cin >> angle >> length;
                vec = vector::createVector(angle, length);
                break;
            case 8:
                return 0;
            default:
                std::cout << "Choose the right option." << std::endl;
                break;
        }
    }
    return 0;
}