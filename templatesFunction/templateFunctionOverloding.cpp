#include <iostream>
using namespace std;

template <class T>
class John {
    public:
        T data;
        John(T a){
            data = a;
        }
        void display();
};

template <class T>
void John<T>:: display() {
    cout << "Data: " << data << endl;
}

void func(int a){
    cout << "This is a first function"<< a << endl;
}

template <class T>
void func(T a){
    cout << "This is a templatized function"<< a << endl;
}

int main() {
    // John<int> obj1(10); 
    // John<float> obj1(10.22); 
    // cout << "Data in obj1: " << obj1.data << endl;
    // obj1.display();

    func(10.2); // Calls the non-template function
    return 0;
}