#ifndef BOARD_H
#define BOARD_H

#include "case.h"

#include <vector>

class Board
{
public:
    Board();
    void init();
    void setup();
    std::vector<std::vector<Case>> getCases();
private:
    std::vector<std::vector<Case>> cases;
};

#endif // BOARD_H
