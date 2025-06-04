#include <iostream>

class Animal{
    public:
        bool isAlive = true;

    void eat(){
        std::cout << "This animal is eating." << std::endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        std::cout << "The dog is barking." << std::endl;
    }
};

class Cat : public Animal{
    public:
    void meow(){
        std::cout << "The cat is meowing." << std::endl;
    }
};

int main(){
    Dog dog;
    Cat cat;

    dog.eat(); 
    dog.bark();
    std::cout << "Is the dog alive? " << (dog.isAlive ? "Yes" : "No") << std::endl;

    cat.eat();
    cat.meow();
    std::cout << "Is the cat alive? " << (cat.isAlive ? "Yes" : "No") << std::endl;
    return 0;
}