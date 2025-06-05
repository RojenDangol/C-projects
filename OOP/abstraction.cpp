#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void askForPromotion() = 0; // pure virtual function
};

class Employee: AbstractEmployee {
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
        
        void askForPromotion(){
            if(Age > 30){
                std::cout << Name << " got promoted!" << std::endl;
            } else {
                std::cout << Name << ", sorry, no promotion for you." << std::endl;
            }
        }

};

int main(){
    Employee employee1("Alice", 30, 50000.0);
    Employee employee2("Bob", 33, 60000.0);

    employee1.askForPromotion();
    employee2.askForPromotion();

    return 0;
}