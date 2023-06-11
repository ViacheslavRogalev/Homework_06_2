#pragma once

class Counter
{
private:
    int counterResult = 0;

public:
    Counter(int initialInitValue);
    int getCounter();
    int counterPlus();
    int counterMinus();
};