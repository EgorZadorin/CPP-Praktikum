#pragma once

#include "player.hpp"
#include "board.hpp"

class GameController {
public:
  void play(Player& cross, Player& circle);

private:
  Board board;
};
