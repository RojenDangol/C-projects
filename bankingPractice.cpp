#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){
    double balance = 0.0;
    int choice = 0;

    do {
        std::cout << "********************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "********************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "*********************\n";
        std::cin >> choice;

        std::cin.clear(); // Clear the input buffer
        fflush(stdin); // Clear the input buffer

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2 :
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }while (choice != 4);
    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance: "<< std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit(){
    double amount = 0;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Invalid amount. Cannot deposit a negative value." << std::endl;
        return 0;
    }
    return amount;
}

double withdraw(double balance){
    double amount = 0;

    std::cout << "Current balance: " << balance << std::endl;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "Insufficient funds. Cannot withdraw " << amount << std::endl;
        return 0;
    } else if(amount < 0){
        std::cout << "Invalid amount. Cannot withdraw a negative value." << std::endl;
        return 0;
    } else {
        return amount;
    }
}