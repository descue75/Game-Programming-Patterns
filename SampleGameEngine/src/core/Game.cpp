#include "core/Game.h"

#include "actors/Character.h"

#include "commands/Command.h"

#include "input/ConsoleInputDevice.h"
#include "input/IInputDevice.h"
#include "input/InputHandler.h"
#include "input/InputKey.h"

#include <iostream>

Game::Game():
    m_isRunning(false),
    m_character(std::make_unique<Character>()),
	m_inputHandler(std::make_unique<InputHandler>()),
    m_inputDevice(std::make_unique<ConsoleInputDevice>())
{
}

Game::~Game() = default;

int Game::Run()
{
    std::cout << "Game is running..." << std::endl;

	m_isRunning = true;
    int returnCode = 0;
    while (m_isRunning)
	{
		ProcessInput();
        ProcessActions();
	}
	std::cout << "Game has stopped." << std::endl;
    return returnCode;
}

void Game::Stop()
{
    m_isRunning = false;
}

void Game::ProcessInput()
{
    if (m_inputDevice->HasInput())
    {
        const InputKey key = m_inputDevice->ReadKey();

        std::cout << "Input: " << InputKeyToString(key) << std::endl;

        auto command =  m_inputHandler->HandleInput(key);

        if (command)
        {
            command->Execute(*this, *m_character);
        }
    }
}

void Game::ProcessActions()
{
    // Future gameplay logic
}
