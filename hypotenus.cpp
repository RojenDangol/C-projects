#include <iostream>
#include <cmath>

int main(){
    double a, b, c;
    std::cout << "enter side A: ";
    std::cin >> a;

    std::cout << "enter side B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a+b);
    std::cout << "Hypotenuse is: " << c << std::endl;

    return 0;
}