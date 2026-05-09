#pragma once
#include "commands/Command.h"

class GameActor;

class JumpCommand : public Command
{
public:
	JumpCommand() {}
	~JumpCommand() {}
	void Execute(Game& game, GameActor& obj) override;
};

