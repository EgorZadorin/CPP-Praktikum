#include "normal_player.hpp"
#include <cstdlib>

NormalPlayer::NormalPlayer(Color color) : PerfectPlayer(color), RandomPlayer(color), Player(color) {}

void NormalPlayer::performNextMove(Board& board) {
    int rand = std::rand() % 2;
    if (rand) {
        PerfectPlayer::performNextMove(board);
    } else {
        RandomPlayer::performNextMove(board);
    }
}
