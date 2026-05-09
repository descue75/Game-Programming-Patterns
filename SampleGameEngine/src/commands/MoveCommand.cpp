#include "commands/MoveCommand.h"
#include "actors/GameActor.h"

#include <iostream>

MoveCommand::MoveCommand(Direction direction) : m_direction(direction) {};

void MoveCommand::Execute(Game& game, GameActor& obj)
{
	// Implement the logic to move the character
	// For example, you could print a message or call a method on a character object
	std::cout << "Execute MoveCommand(" << ToString(m_direction) << ")" << std::endl;
}
