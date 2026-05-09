#pragma once

#include <memory>
#include <vector>

class Character;
class InputHandler;
class IInputDevice;

class Game
{
public:
    Game();
    ~Game();

    int Run();

    void Stop();

private:
    bool m_isRunning = false;
    std::unique_ptr<Character> m_character;
    std::unique_ptr<InputHandler> m_inputHandler;
    std::unique_ptr<IInputDevice> m_inputDevice;
	std::vector<std::unique_ptr<class Command>> m_pendingCommands;

    void ProcessInput();
    void ProcessActions();
};