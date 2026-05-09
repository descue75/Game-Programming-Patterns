#include "input/ConsoleInputDevice.h"

#include <conio.h>

bool ConsoleInputDevice::HasInput() const
{
    return _kbhit() != 0;
}

InputKey ConsoleInputDevice::ReadKey()
{
    const int key = _getch();

    switch (key)
    {
    case 27:
        return InputKey::Escape;

    case ' ':
        return InputKey::Space;

    case 26:
        return InputKey::Undo;

    case 25:
        return InputKey::Redo;

    case 224: // Arrow Key
    {
        const int arrowKey = _getch();

        switch (arrowKey)
        {
        case 72:
            return InputKey::Up;
        case 80:
            return InputKey::Down;
        case 75:
            return InputKey::Left;
        case 77:
            return InputKey::Right;
        default:
            return InputKey::Unknown;
        }
    }

    default:
        return InputKey::Unknown;
    }
}