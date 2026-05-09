#pragma once

enum class InputKey
{
    Unknown,
    Escape,
    Space,
    Up,
    Down,
    Left,
    Right,
    Undo,
    Redo
};

constexpr const char* InputKeyToString(InputKey key)
{
    switch (key)
    {
    case InputKey::Unknown:
        return "Unknown";

    case InputKey::Escape:
        return "Escape";

    case InputKey::Space:
        return "Space";

    case InputKey::Up:
        return "Up";

    case InputKey::Down:
        return "Down";

    case InputKey::Left:
        return "Left";

    case InputKey::Right:
        return "Right";

    case InputKey::Undo:
        return "Undo";

    case InputKey::Redo:
        return "Redo";

    default:
        return "Invalid";
    }
}
