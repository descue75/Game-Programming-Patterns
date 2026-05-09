#pragma once

#include "input/InputKey.h"

class IInputDevice
{
public:
    virtual ~IInputDevice() = default;

    virtual bool HasInput() const = 0;
    virtual InputKey ReadKey() = 0;
};