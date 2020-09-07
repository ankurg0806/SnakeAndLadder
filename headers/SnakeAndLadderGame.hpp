#pragma once
#include <cstdlib>
#include <ctime>
#include <list>
#include <map>

#include "SnakeAndLadderBoard.hpp"

namespace snakeandladder {
class Dice
{
public:
    static int rollDice()
    {
        return rand() % 6 + 1;
    }
};
class SnakeAndLadderGame
{
private:
    std::vector<Snake>  snakes;
    std::vector<Ladder> ladders;
    std::list<Player>   players;
    SnakeAndLadderBoard board;
    std::map<int, int>  playerPos;
    int                 initialPlayers;

public:
    SnakeAndLadderGame(std::vector<Snake> s, std::vector<Ladder> l, std::list<Player> p);
    void setPlayers();
    void startGame();
    bool isGameCompleted();
    void movePlayer(Player& p, int pos);
    bool hasPlayerWon(const Player& p);
};
}  // namespace snakeandladder