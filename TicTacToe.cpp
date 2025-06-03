#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    std::cout << "Do you want to play again? (y/n): ";
    char choice;
    std::cin >> choice;
    if(choice == 'y' || choice == 'Y'){
        main(); // Restart the game
    } else {
        std::cout << "Thanks for playing!" << std::endl;
    }

    return 0;
}

void drawBoard(char *spaces){
    std::cout << "     |     |     " << "\n";
    std::cout << "  "<< spaces[0] <<"  |  "<<  spaces[1] <<"  |  "<<  spaces[2] <<"  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  "<< spaces[3] <<"  |  "<<  spaces[4] <<"  |  "<< spaces[5] <<"  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  "<< spaces[6] <<"  |  "<<  spaces[7] <<"  |  "<< spaces[8] <<"  " << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "\n";
}

void playerMove(char *spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
}

void computerMove(char *spaces, char computer){
    int number;
    srand(time(nullptr));
    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){
    if(spaces[0] == player && spaces[1] == player && spaces[2] == player ||
       spaces[3] == player && spaces[4] == player && spaces[5] == player ||
       spaces[6] == player && spaces[7] == player && spaces[8] == player ||
       spaces[0] == player && spaces[3] == player && spaces[6] == player ||
       spaces[1] == player && spaces[4] == player && spaces[7] == player ||
       spaces[2] == player && spaces[5] == player && spaces[8] == player ||
       spaces[0] == player && spaces[4] == player && spaces[8] == player ||
       spaces[2] == player && spaces[4] == player && spaces[6] == player){
        std::cout << "Player wins!" << std::endl;
    }else if(spaces[0] == computer && spaces[1] == computer && spaces[2] == computer ||
              spaces[3] == computer && spaces[4] == computer && spaces[5] == computer ||
              spaces[6] == computer && spaces[7] == computer && spaces[8] == computer ||
              spaces[0] == computer && spaces[3] == computer && spaces[6] == computer ||
              spaces[1] == computer && spaces[4] == computer && spaces[7] == computer ||
              spaces[2] == computer && spaces[5] == computer && spaces[8] == computer ||
              spaces[0] == computer && spaces[4] == computer && spaces[8] == computer ||
              spaces[2] == computer && spaces[4] == computer && spaces[6] == computer){
        std::cout << "Computer wins!" << std::endl;
    }else{
        return false;
    }
    return true;
}   

bool checkTie(char *spaces){

    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "It's a tie!" << std::endl;

    return true;
}