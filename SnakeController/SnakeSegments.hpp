#pragma once

#include <list>


namespace Snake
{

class SnakeSegments
{
public:
    SnakeSegments();

    bool isSegmentAtPosition(int x, int y) const;

    struct Segment
    {
        int x;
        int y;
    };

    std::list<Segment> m_segments;
};

}