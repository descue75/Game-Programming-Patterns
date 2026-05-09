#pragma once
#include "types/Position.h"

class GameActor
{
public:
	GameActor() {};
	virtual ~GameActor() = default;

	virtual void Jump() = 0;
	Position GetPosition() const { return m_position; }

private:
	Position m_position{0, 0};
};

