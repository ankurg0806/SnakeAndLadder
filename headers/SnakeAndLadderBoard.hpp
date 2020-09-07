#pragma once
#include <vector>

#include "Ladder.hpp"
#include "Player.hpp"
#include "Snake.hpp"

namespace snakeandladder {
class SnakeAndLadderBoard
{
private:
    std::vector<Snake>  snakes;
    std::vector<Ladder> ladders;

public:
    SnakeAndLadderBoard(std::vector<Snake> s, std::vector<Ladder> l) : snakes(s), ladders(l) {}
    std::vector<Snake> getSnakes()
    {
        return snakes;
    }
    std::vector<Ladder> getLadders()
    {
        return ladders;
    }
};
}  // namespace snakeandladder