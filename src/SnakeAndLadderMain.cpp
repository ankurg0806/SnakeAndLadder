#include <iostream>
#include <list>
#include <string>
#include <vector>

#include "../headers/SnakeAndLadderGame.hpp"
using namespace snakeandladder;
int main()
{
    int n, ns, nl;
    std::cout << "\nEnter number of snakes: ";
    std::cin >> ns;
    int                beg, end;
    std::vector<Snake> snakes;
    for (int i = 0; i < ns; i++)
    {
        std::cin >> beg >> end;
        Snake s(beg, end);
        snakes.push_back(s);
    }
    std::cout << "\nEnter number of ladders: ";
    std::cin >> nl;
    std::vector<Ladder> ladders;
    for (int i = 0; i < nl; i++)
    {
        std::cin >> beg >> end;
        Ladder l(beg, end);
        ladders.push_back(l);
    }
    std::cout << "Enter no of players: ";
    std::cin >> n;
    std::list<Player> players;
    for (int i = 0; i < n; i++)
    {
        std::string name = "";
        std::cout << "enter name";
        std::cin >> name;
        Player p(name);
        players.push_back(p);
    }
    SnakeAndLadderGame slg(snakes, ladders, players);
    slg.startGame();
}