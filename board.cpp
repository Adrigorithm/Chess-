#include "board.h"

Board::Board()
{

}

void Board::init(){
    char id [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    for(int y = 0; y < 8; y++){
        std::vector<Case> row;
        for(int x = 0; x < 8; x++){
            row.push_back(Case(id[x] + std::to_string(y + 1)));
        }
        cases.push_back(row);
    }
}

std::vector<std::vector<Case>> Board::getCases(){
    return cases;
}

void Board::setup(){
    // Check for saved instance(s)
}
