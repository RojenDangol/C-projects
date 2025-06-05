#include <iostream>
using namespace std;

template <class T1=int, class T2=double>
class Rojen {
public:
    T1 a;
    T2 b;

    Rojen(T1 a, T2 b) {
        this->a = a;
        this->b = b;
    }

    void display() {
        cout << "Data1: " << a << ", Data2: " << b << endl;
    }
};


int main() {
    Rojen <> obj1(5, 5.5);
    obj1.display();
    return 0;
}