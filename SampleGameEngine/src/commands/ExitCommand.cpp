#include "commands/ExitCommand.h"
#include "core/Game.h"

#include <iostream>

void ExitCommand::Execute(Game& game, GameActor& obj)
{
	std::cout << "Execute ExitCommand" << std::endl;
	game.Stop();
}
