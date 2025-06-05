#include <iostream>
using std::string;

class Employee {
    private:
        string Name;
        int Age;
        double Salary;

    public:
        void setName(string name){ //setter 
            Name = name;
        }

        string getName() { //getter
            return Name;
        }

        void setAge(int age) {
            if (age >= 18) {
                Age = age;
            }
        }

        int getAge() {
            return Age;
        }

        void setSalary(double salary) {
            if (salary > 0) {
                Salary = salary;
            }
        }

        double getSalary() {
            return Salary;
        }

        Employee(string name, int age, double salary) {
            this->Name = name;
            this->Age = age;
            this->Salary = salary;
        }

        void introduceEmployee() {
            std::cout << "Name: " << Name << ", Age: " << Age << ", Salary: $" << Salary << std::endl;
        }
    

};

int main(){
    Employee employee1("Alice", 30, 50000.0);
    employee1.introduceEmployee();

    Employee employee2("Bob", 25, 60000.0);
    employee2.introduceEmployee();

    employee1.setAge(19);
    std::cout << "Updated Age of Employee 1: " << employee1.getAge() << std::endl;
   

    return 0;
}