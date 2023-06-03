#include "normal_player.hpp"
#include "human_player.hpp"
#include "game_controller.hpp"

#include <iostream>
#include <string>

int main() {
    HumanPlayer cross = HumanPlayer(Color::CROSS);
    GameController game_controller;
    std::string ans;

    while (true) {
        std::cout << "Gegen welchen der drei Computerspieler Sie spielen möchten?" <<
                     "Antworten 0 falls random, 1 falls normal, 2 falls perfect" << std::endl;
        std::getline(std::cin, ans);
        if (std::stoi(ans) == 2 || std::stoi(ans) == 1 || std::stoi(ans) == 0) {
            break;
        } else {
            ans = "";
            std::cout << "Eingabe ist ungültig" << std::endl;
        }
    }

    if (std::stoi(ans) == 0) {
        RandomPlayer circle = RandomPlayer(Color::CIRCLE);
        game_controller.play(cross, circle);
    } else if (std::stoi(ans) == 1) {
        NormalPlayer circle = NormalPlayer(Color::CIRCLE);
        game_controller.play(cross, circle);
    } else {
        PerfectPlayer circle = PerfectPlayer(Color::CIRCLE);
        game_controller.play(cross, circle);
    }
}
