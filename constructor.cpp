#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa)  {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};
 
int main() {
    Student student1("Alice", 20, 3.5);
    Student student2("Bob", 22, 3.8);

    std::cout << "Student 1: " << student1.name << ", Age: " << student1.age << ", GPA: " << student1.gpa << std::endl;
    std::cout << "Student 2: " << student2.name << ", Age: " << student2.age << ", GPA: " << student2.gpa << std::endl;

    return 0;
}