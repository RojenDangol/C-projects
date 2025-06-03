#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
        std::string topping3;  

    Pizza(){}
        
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

    Pizza(std::string topping1, std::string topping2, std::string topping3){
        this->topping1 = topping1;
        this->topping2 = topping2;
        this->topping3 = topping3;
    }
};


int main(){
    Pizza pizza; // Default constructor
    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushrooms", "Olives");
    Pizza pizza3("Extra Cheese", "Bacon", "Pineapple");


    std::cout << "Pizza topping: " << pizza.topping1 << std::endl; // Should be empty
    std::cout << "Pizza topping: " << pizza1.topping1 << std::endl;
    std::cout << "Pizza topping: " << pizza2.topping2 << std::endl;
    std::cout << "Pizza topping: " << pizza3.topping3 << std::endl;

    return 0;
}