#include "commands/JumpCommand.h"
#include "actors/GameActor.h"

#include <iostream>


void JumpCommand::Execute(Game& game, GameActor& obj)
{
	// Implement the logic to make the character jump
	// For example, you could print a message or call a method on a character object
	std::cout << "Execute JumpCommand" << std::endl;

	obj.Jump();
}
