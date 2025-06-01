#include <iostream>
#include <ctime>

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(0));
    num = rand() % 100 +1;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    do{
        std::cout << "Please enter a number between 1 and 100: ";
        std::cin >> guess;
        tries ++;

        if (guess < num) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > num) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number " << num << " in " << tries << " tries!" << std::endl;
        }

    }while (guess!= num); 

}