#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
    
}

template <class T, class U>
float funcAverage(T a, U b) {
    return (a + b) / 2.0;
}

int main() {
    float a;
    a = funcAverage(5, 2);
    cout << "Average of 10 and 20 is: " << a << endl;
    int x=10, y=20;
    swapp(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}