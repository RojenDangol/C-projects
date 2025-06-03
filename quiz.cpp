#include <iostream>

int main(){
    std::string questions[] = {
        "1. What is the capital of Nepal?",
        "2. What is the capital of India?",
        "3. What is the capital of China?",
        "4. What is the capital of Japan?",
    };

    std::string option[][4] = {
        {"a) Pokhara", "b) Kathmandu", "c) Butwal", "d) Janakpur"},
        {"a) Mumbai", "b) New Delhi", "c) Punjab", "d) Kolkata"},
        {"a) Shanghai", "b) New Delhi", "c) Beijing", "d) Tokyo"},
        {"a) Tokyo", "b) Hirosima", "c) Osaka", "d) Kyoto"}
    };

    char answer[] = {'b', 'b', 'c', 'a'};

    int size = sizeof(questions)/sizeof(questions[0]);
    int score=0;
    char guess;

    for(int i = 0; i < size; i++){
        std::cout << "*******************************\n";
        std::cout << questions[i] << std::endl;
        std::cout << "*******************************\n";

        for(int j = 0; j < sizeof(option[i])/sizeof(option[i][0]); j++){
            std::cout << option[i][j] << std::endl;
        }
        std::cin >> guess;
        guess = tolower(guess);

        if(guess == answer[i]){
            std::cout << "Correct!" << std::endl;
            score++;
        } else {
            std::cout << "Wrong! The correct answer is: " << answer[i] << std::endl;
        }
    }
    std::cout << "*******************************\n";
    std::cout << "Your score is: " << score << " out of " << size << std::endl;
    std::cout << "*******************************\n";

    return 0;
}