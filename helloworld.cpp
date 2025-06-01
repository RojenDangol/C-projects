#include <iostream>

int main() {
    bool isRaining = false;
    std::string name = "Rojen";
    std::cout << "Hello "<< name << std::endl;
    std::cout << "It's a beautiful day!";
    std::cout << (isRaining ? " It is raining." : " It is not raining.") << std::endl;
    return 0;
}
