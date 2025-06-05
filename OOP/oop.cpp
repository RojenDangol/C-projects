#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(std::string name){
            std::cout << name + " is eating." << std::endl;
        }

        void drink(){
            std::cout << "This person is drinking." << std::endl;
        }

        void sleep(){
            std::cout << "This person is sleeping." << std::endl;
        }
};

int main(){
    Human human1;
    human1.name = "John";
    human1.occupation = "Engineer";
    human1.age = 30;
    
    std::cout << "Name: " << human1.name << std::endl;
    std::cout << "Occupation: " << human1.occupation << std::endl;
    std::cout << "Age: " << human1.age << std::endl;    

    human1.eat(human1.name);
    return 0;
}