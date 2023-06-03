#include "game_controller.hpp"
#include <cstdlib>
#include <iostream>

void GameController::play(Player& cross, Player& circle) {
    while (true) {
        int rand = std::rand() % 2;
        if (rand) {
            while (!board.whoWon().has_value()) {
                cross.performNextMove(board);
                std::cout << board << std::endl;
                if (board.whoWon().has_value()) {
                    break;
                }
                circle.performNextMove(board);
                std::cout << board << std::endl;
            }
        } else {
            while (!board.whoWon().has_value()) {
                circle.performNextMove(board);
                std::cout << board << std::endl;
                if (board.whoWon().has_value()) {
                    break;
                }
                cross.performNextMove(board);
                std::cout << board << std::endl;
            }
        }

        if (board.whoWon() == GameStatus::CROSS) {
            std::cout << "Sie haben gewinnen! :)" << std::endl;
        } else if (board.whoWon() == GameStatus::CIRCLE){
            std::cout << "Sie haben verloren! :(" << std::endl;
        }

        std::string ans;
        while (true) {
            std::cout << "Wollen Sie erneut spielen? Antworten 1 falls Ja und 0 falls Nein" << std::endl;
            std::getline(std::cin, ans);
            if (std::stoi(ans) == 1 || std::stoi(ans) == 0) {
                break;
            } else {
                ans = "";
                std::cout << "Eingabe ist ungültig" << std::endl;
            }
        }

        if (std::stoi(ans) == 0) {
            break;
        }

        board = Board();
    }
}