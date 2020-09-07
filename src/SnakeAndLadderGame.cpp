#include "../headers/SnakeAndLadderGame.hpp"

#include <iostream>
namespace snakeandladder {
int Player::count = 0;
SnakeAndLadderGame::SnakeAndLadderGame(std::vector<Snake> s, std::vector<Ladder> l, std::list<Player> p)
    : snakes(s), ladders(l), players(p), board(snakes, ladders), initialPlayers(p.size())
{
}
void SnakeAndLadderGame::setPlayers()
{
    for (Player player : players)
    {
        playerPos[player.getPlayerId()] = 0;
    }
}
bool SnakeAndLadderGame::isGameCompleted()
{
    return players.size() < initialPlayers;
}
void SnakeAndLadderGame::movePlayer(Player& p, int pos)
{
    int currentPos = playerPos[p.getPlayerId()];
    currentPos     = currentPos + pos;
    if (currentPos > 100)
    {
        currentPos = currentPos - pos;
        return;
    }
    int prevPos;

    do
    {
        prevPos = currentPos;
        for (auto snake : snakes)
        {
            if (snake.getStart() == currentPos)
            {
                std::cout << "Lol , bitten by snake, you will go down to " << snake.getEnd() << std::endl;
                currentPos = snake.getEnd();
            }
        }
        for (auto ladder : ladders)
        {
            if (ladder.getStart() == currentPos)
            {
                std::cout << "Bravo , got the ladder, you will jump up to " << ladder.getEnd() << std::endl;
                currentPos = ladder.getEnd();
            }
        }
    } while (prevPos != currentPos);
    std::cout << p.getName() << " moved to " << currentPos << std::endl;
    playerPos[p.getPlayerId()] = currentPos;
}
bool SnakeAndLadderGame::hasPlayerWon(const Player& p)
{
    return playerPos[p.getPlayerId()] == 100;
}
void SnakeAndLadderGame::startGame()
{
    setPlayers();
    std::cin.get();
    while (!isGameCompleted())
    {
        Player p = players.front();
        players.pop_front();
        std::cout << p.getName() + " turn, Press enter to roll the dice\n";
        std::cin.get();
        int diceroll = Dice::rollDice();
        std::cout << p.getName() + "got" << diceroll << std::endl;
        movePlayer(p, diceroll);
        if (hasPlayerWon(p))
        {
            std::cout << p.getName() + " wins the game" << std::endl;
        }
        else
        {
            players.push_back(p);
        }
    }
}
}  // namespace snakeandladder
