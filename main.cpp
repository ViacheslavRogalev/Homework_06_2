#include <iostream>
#include <Windows.h>
#include <cstring>
#include "counter.h"

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    std::string checkInitialInitValue;
    int initialInitValue = 0;
    bool checkTrueInitialInitValue = false;

    do
    {
        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
        std::cin >> checkInitialInitValue;

        if (checkInitialInitValue == "��")
        {
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> initialInitValue;
            checkTrueInitialInitValue = true;
        }
            if (checkInitialInitValue == "���")
        {
                return 0;
        }
    } while (!checkTrueInitialInitValue);

    Counter Counter(initialInitValue);

    std::string commandValue;
    bool checkCommand = false;

    do
    {
        std::cout << "������� ������� ('+', '-', '=' ��� '�'): ";
        std::cin >> commandValue;

        if (commandValue == "�")
        {
            std::cout << "�� ��������!";
            return 0;
        }
        else if (commandValue == "+")
        {
            Counter.counterPlus();
        }
        else if (commandValue == "-")
        {
            Counter.counterMinus();
        }
        else if (commandValue == "=")
        {
            std::cout << Counter.getCounter() << std::endl;
        }
        else
        {
            std::cout << "�� ����� �������� �������: " << std::endl;
        }
    } while (!checkCommand);

    return 0;
}