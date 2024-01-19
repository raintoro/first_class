#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

class Cone {
private:
    double radius;
    double height;
public:
    Cone(double r, double h) {
        radius = r;
        height = h;
    }
    ~Cone() {
        std::cout << "объект в помойке" << std::endl;
    }
    double square() {
        return M_PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
    }
    double Volume() {
        return (M_PI * pow(radius, 2) * height) / 3;
    }
};

int main() {
    setlocale(LC_ALL, "Rus");
    double r, h;
    std::cout << "радиус конуса: ";
    std::cin >> r;
    std::cout << "высота конуса: ";
    std::cin >> h;

    Cone cone(r, h);

    std::cout << "площадь поверхности: " << cone.square() << std::endl;
    std::cout << "объем конуса: " << cone.Volume() << std::endl;

    return 0;
}
