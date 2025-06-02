#include <iostream>
#include <cctype>
#include <random>
#include <vector>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You choice: ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);
    chooseWinner(player, computer);
    return 0;
}

char getUserChoice(){
    char player;
    do{
        std::cout << "Rock, Paper, Scissors Game!" << std::endl;
        std::cout << "***************************\n";
        std::cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
        std::cin >> player;
        player = std::tolower(player); // Convert to lowercase for consistency
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){
    std::vector<char> computer = {'r', 'p', 's'};
    std::srand(std::time(nullptr));
    char computerChoice = computer[std::rand() % computer.size()];
    return computerChoice;
}

void showChoice(char choice){
    switch(choice){
        case 'r':
            std::cout << "Rock" << std::endl;
            break;
        case 'p':
            std::cout << "Paper" << std::endl;
            break;
        case 's':
            std::cout << "Scissors" << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
    }
}

void chooseWinner(char player, char computer){
    char playAgain;
    switch (player){
    case 'r':
        if(computer == 's'){
            std::cout << "You win! Rock crushes Scissors." << std::endl;
        } else if (computer == 'p'){
            std::cout << "You lose! Paper covers Rock." << std::endl;
        } else {
            std::cout << "It's a tie! Both chose Rock." << std::endl;
        }
        break;
    case 'p':
        if(computer == 'r'){
            std::cout << "You win! Paper covers Rock." << std::endl;
        } else if (computer == 's'){
            std::cout << "You lose! Scissors cut Paper." << std::endl;
        } else {
            std::cout << "It's a tie! Both chose Paper." << std::endl;
        }
        break;
    case 's':
        if(computer == 'p'){
            std::cout << "You win! Scissors cut Paper." << std::endl;
        } else if (computer == 'r'){
            std::cout << "You lose! Rock crushes Scissors." << std::endl;
        } else {
            std::cout << "It's a tie! Both chose Scissors." << std::endl;
        }
        break;
    default:
        break;
    }
    std::cout << "***************************\n";
    std::cout << "Play again? (Y/N): ";
    std::cin >> playAgain;
    playAgain = std::tolower(playAgain);
    if(playAgain == 'y'){
        main(); // Restart the game
    } else {
        std::cout << "Thanks for playing!" << std::endl;
    }
}