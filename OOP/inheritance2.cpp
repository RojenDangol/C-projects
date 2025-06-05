#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void askForPromotion() = 0; // pure virtual function
};

class Employee: AbstractEmployee {
    private:
        
        int Age;
        double Salary;
    protected:
        string Name;
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

class Developer : public Employee {
    public:
        string FavProgrammingLanguage;
    
        Developer(string name, int age, double salary,  string FavProgrammingLanguage):
        Employee(name, age,salary){
            this->FavProgrammingLanguage = FavProgrammingLanguage;
        }

        void FixBug(){
            std::cout << Name << " fixed a bug using " << FavProgrammingLanguage << std::endl;
        }

};

class Teacher: public Employee
{
    public:
        string Subject;
        Teacher(string name, int age, double salary, string subject):Employee(name, age, salary) {
            this->Subject = subject;
        }

        void PrepareLesson() {
            std::cout << Name << " is preparing a lesson on " << Subject << std::endl;
        }
};

int main(){
    Developer dev1 = Developer("Charlie", 28, 70000.0, "C++");
    dev1.FixBug();
    dev1.introduceEmployee();

    Teacher teacher1 = Teacher("Alice", 35, 80000.0, "Mathematics");
    teacher1.PrepareLesson();
    teacher1.introduceEmployee();
    teacher1.askForPromotion();

    return 0;
}