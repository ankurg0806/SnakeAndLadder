#pragma once
namespace snakeandladder
{
    class Snake
    {
    private:
        int start;
        int end;

    public:
        Snake(int s, int e) : start(s), end(e) {}
        int getStart() const
        {
            return start;
        }
        int getEnd() const
        {
            return end;
        }
    };
} // namespace snakeandladder