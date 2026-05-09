#pragma once

#include <memory>

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

    void ProcessInput();
    void ProcessActions();
};