#include <iostream>
#include <ctime>

#include "GameLogic.h"
#include "ConsoleUI.h"

using namespace std;


int main()
{
    srand(time(0));

    ConsoleUI ui;

    bool again = true;


    while (again)
    {

        GameLogic game;


        for (int round = 1; round <= 3; round++)
        {

            bool keep[5] = { false,false,false,false,false };


            for (int roll = 1; roll <= 3; roll++)
            {

                game.rollDice(keep);


                ui.displayDice(game.getDiceValues(), 5);


                if (roll < 3)
                {
                    char choice;

                    cout << "Keep dice? (y/n): ";

                    cin >> choice;


                    if (choice == 'y')
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            int keepChoice;

                            cout << "Keep die "
                                << i + 1
                                << "? (1=yes 0=no): ";

                            cin >> keepChoice;

                            keep[i] = keepChoice;
                        }
                    }
                }
            }


            int category = ui.getCategoryChoice();

            int points = game.calculateScore(category);

            cout << "Round score: " << points << endl;

        }


        ui.displayScore(game.getScore());


        again = ui.playAgain();

    }


    return 0;
}