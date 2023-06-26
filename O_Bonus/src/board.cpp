#include "board.hpp"
#include "player.hpp"

GameStatus asGameStatus(Color color) {
    switch (color) {
        case Color::CROSS:
            return GameStatus::CROSS;
        default:
            return GameStatus::CIRCLE;
    }
}

GameStatus asGameStatus(Field field) {
    switch (field) {
        case Field::CROSS:
            return GameStatus::CROSS;
        case Field::CIRCLE:
            return GameStatus::CIRCLE;
        default:
            std::abort();
    }
}

Field asField(Color color) {
    switch (color) {
        case Color::CROSS:
            return Field::CROSS;
        default:
            return Field::CIRCLE;
    }
}

Color enemyOf(Color color) {
    switch (color) {
        case Color::CROSS:
            return Color::CIRCLE;
        default:
            return Color::CROSS;
    }
}

Board::Board() : fields(std::vector<std::vector<Field>>(3, std::vector<Field>(3, Field::EMPTY))) {}

std::optional<GameStatus> Board::whoWon() const {

    if (fields[1][1] != Field::EMPTY && (fields[0][0] == fields[1][1] && fields[1][1] == fields[2][2] ||
                                         fields[0][2] == fields[1][1] && fields[1][1] == fields[2][0])) {
        return asGameStatus(fields[1][1]);
    }

    for (int i = 0; i < 3; ++i) {
        if (fields[i][0] != Field::EMPTY && fields[i][0] == fields[i][1] && fields[i][1] == fields[i][2]) {
            return asGameStatus(fields[i][0]);
        }
        if (fields[0][i] != Field::EMPTY && fields[0][i] == fields[1][i] && fields[1][i] == fields[2][i]) {
            return asGameStatus(fields[0][i]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (fields[i][j] == Field::EMPTY) {
                return {};
            }
        }
    }

    return GameStatus::TIE;
}

std::ostream &operator<<(std::ostream &os, const Board &board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            char sym;
            switch (board[i][j]) {
                case Field::CROSS:
                    sym = 'X';
                    break;
                case Field::CIRCLE:
                    sym = 'O';
                    break;
                default:
                    sym = ' ';
            }
            os << " | " << sym;
        }
        os << " |" << std::endl;
    }
    return os;
}
