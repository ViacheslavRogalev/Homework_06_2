#include "counter.h"

Counter::Counter(int initialInitValue)
{
    counterResult = initialInitValue;
};

int Counter::getCounter()
{
    return counterResult;
};

int Counter::counterPlus()
{
    return ++counterResult;
};

int Counter::counterMinus()
{
    return --counterResult;
};