#include <iostream>

int main(){

    std::string name = "Rojen";
    std::string *Pname = &name; // Pointer to the string variable name
    std::string y = *Pname;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Pointer to name: " << *Pname << std::endl;
    std::cout << "Pointer to name (using y): " << y << std::endl;
    return 0;
}