#pragma once
namespace snakeandladder
{
    class Ladder
    {
    private:
        int start;
        int end;

    public:
        Ladder(int s, int e) : start(s), end(e) {}
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