#pragma once
#include <memory>
#include "input/InputKey.h"

class Command;

class InputHandler
{
public:
	InputHandler() {}
	~InputHandler() = default;

	std::unique_ptr<Command> HandleInput(InputKey key);
};

