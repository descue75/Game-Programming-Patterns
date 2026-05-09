#pragma once
#include "actors/GameActor.h"

class Character : public GameActor
{
	public:
	Character() {}
	~Character() {}
	void Jump() override;
};

