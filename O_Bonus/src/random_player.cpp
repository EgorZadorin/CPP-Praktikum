#include "random_player.hpp"
#include <cstdlib>

RandomPlayer::RandomPlayer(Color color) : Player(color) {}

void RandomPlayer::performNextMove(Board& board) {
    int empty_fields = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == Field::EMPTY) {
                empty_fields++;
            }
        }
    }
    int rand = std::rand() % empty_fields;
    int flag = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == Field::EMPTY) {
                if (!rand) {
                    board[i][j] = asField(color);
                    flag = 1;
                    break;
                } else {
                    rand--;
                }
            }
        }
        if (flag) {
            break;
        }
    }
}
