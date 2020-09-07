#pragma once
#include <string>
namespace snakeandladder {
class Player
{
private:
    std::string name;
    int         player_id;
    static int  count;

public:
    Player(std::string n) : name(n), player_id(++count) {}
    std::string getName() const
    {
        return name;
    }
    int getPlayerId() const
    {
        return player_id;
    }
};
}  // namespace snakeandladder