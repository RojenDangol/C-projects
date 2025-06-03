#include <iostream>

enum  DayOfWeek {
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    DayOfWeek today = Wednesday;

    switch (today) {
        case Sunday:
            std::cout << "Today is Sunday." << std::endl;
            break;
        case Monday:
            std::cout << "Today is Monday." << std::endl;
            break;
        case Tuesday:
            std::cout << "Today is Tuesday." << std::endl;
            break;
        case Wednesday:
            std::cout << "Today is Wednesday." << std::endl;
            break;
        case Thursday:
            std::cout << "Today is Thursday." << std::endl;
            break;
        case Friday:
            std::cout << "Today is Friday." << std::endl;
            break;
        case Saturday:
            std::cout << "Today is Saturday." << std::endl;
            break;
        default:
            std::cout << "Invalid day!" << std::endl;
    }

    return 0;
}