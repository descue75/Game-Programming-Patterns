#pragma once
#include "commands/Command.h"
#include "types/Direction.h"

class MoveCommand : public Command
{
public:
	MoveCommand(Direction direction);
	~MoveCommand() {}
	void Execute(Game& game, GameActor& obj) override;

private:
	Direction m_direction;
};

