#pragma once

class Game;
class GameActor;

class Command
{
	public:
		Command() {}
		virtual ~Command() = default;
	virtual void Execute(Game& game, GameActor& obj) = 0;
};

