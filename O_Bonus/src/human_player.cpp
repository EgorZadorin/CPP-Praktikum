#include "human_player.hpp"

#include <iostream>

HumanPlayer::HumanPlayer(Color color) : Player(color) {}

void HumanPlayer::performNextMove(Board& board) {
    while (true) {
        std::cout << "Wo wollen sie ihr Kreuz setzen? (Zählend von 0)" << std::endl
                  << "Eingabeformat: <Zeile> <Spalte>, zum Beispiel '2 0':" << std::endl;
        std::string place;
        std::getline(std::cin, place);
        if (place[0] > '2' || place[0] < '0' || place[1] != ' ' || place[2] > '2' || place[2] < '0'
            || place[3] != '\0') {
            std::cout << "Eingabe ist ungültig" << std::endl;
        } else if (board[place[0] - '0'][place[2] - '0'] != Field::EMPTY) {
            std::cout << "Eingabe ist ungültig" << std::endl;
        } else {
            board[place[0] - '0'][place[2] - '0'] = asField(color);
            std::cout << "Alles klar." << std::endl;
            break;
        }
    }

}
