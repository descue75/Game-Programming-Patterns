#pragma once

enum class Direction
{
    Up,
    Down,
    Left,
    Right
};

constexpr const char* ToString(Direction direction)
{
    switch (direction)
    {
    case Direction::Up:
        return "Up";

    case Direction::Down:
        return "Down";

    case Direction::Left:
        return "Left";

    case Direction::Right:
        return "Right";

    default:
        return "Unknown";
    }
}
