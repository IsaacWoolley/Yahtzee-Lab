#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include <string>

class ConsoleUI
{
public:

    void displayDice(int dice[], int size);

    void displayScore(int score);

    int getCategoryChoice();

    void displayMessage(std::string message);

    bool playAgain();
};

#endif