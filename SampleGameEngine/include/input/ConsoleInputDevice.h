#pragma once

#include "input/IInputDevice.h"

class ConsoleInputDevice : public IInputDevice
{
public:
    ConsoleInputDevice() {}
    ~ConsoleInputDevice() = default;

    bool HasInput() const override;
    InputKey ReadKey() override;
};