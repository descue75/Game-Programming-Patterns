#pragma once

#include "commands/Command.h"

class Game;
class GameActor;

class ExitCommand : public Command
{
	public:
	ExitCommand() {}
	~ExitCommand() {}

	void Execute(Game& game, GameActor& obj) override;
};

