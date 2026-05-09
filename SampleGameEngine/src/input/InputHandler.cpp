#include "input/InputHandler.h"

#include "commands/ExitCommand.h"
#include "commands/JumpCommand.h"
#include "commands/MoveCommand.h"

#include "types/Direction.h"

std::unique_ptr<Command>
InputHandler::HandleInput(InputKey key)
{
    switch (key)
    {
    case InputKey::Space:
        return std::make_unique<JumpCommand>();

    case InputKey::Escape:
        return std::make_unique<ExitCommand>();

    case InputKey::Up:
        return std::make_unique<MoveCommand>(Direction::Up);

    case InputKey::Down:
        return std::make_unique<MoveCommand>(Direction::Down);

    case InputKey::Left:
        return std::make_unique<MoveCommand>(Direction::Left);

    case InputKey::Right:
        return std::make_unique<MoveCommand>(Direction::Right);

    default:
        return nullptr;
    }
}