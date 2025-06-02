#include <iostream>

double getTotal(int numbers[], int size);

int main() {
    bool isRaining = false;
    std::string name = "Rojen";
    std::cout << "Hello "<< name << std::endl;
    std::cout << "It's a beautiful day!";
    std::cout << (isRaining ? " It is raining." : " It is not raining.") << std::endl;

    int number[] = {1,2,3,4,5,6,7,8,9,10};
    // std::cout << sizeof(number)/sizeof(int) << " elements in the array." << std::endl;

    // for(int i = 0; i < sizeof(number)/sizeof(int); i++) {
    //     std::cout << number[i] << "\n";
    // }
    // std::cout << "*******************" << std::endl;
    // for(int num : number){
    //     std::cout << num << "\n";
    // }
    // int size = sizeof(number) / sizeof(int);
    // getTotal(number, size);
    // std::cout << "Total: " << getTotal(number, size) << std::endl;
    
    return 0;

} 

// double getTotal(int numbers[], int size){
//     double total = 0;
//     for(int i = 0; i < size; i++){
//         total += numbers[i];
//     }
//     return total;
// }