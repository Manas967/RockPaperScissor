// This is a program for Rock Paper and Scissor gamer in which player choose the number assigned to the variables
// where computer takes the number randomly and also assigned to the variables.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int time1(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int compare(char char1, char char2)
{
    if (char1 == char2)
    {
        return 0;
    }

    else if (char1 == 'r' && char2 == 's')
    {
        return 1;
    }

    else if (char1 == 's' && char2 == 'r')
    {
        return -1;
    }

    else if (char1 == 'p' && char2 == 'r')
    {
        return 1;
    }

    else if (char1 == 'r' && char2 == 'p')
    {
        return -1;
    }

    else if (char1 == 's' && char2 == 'p')
    {
        return 1;
    }

    else if (char1 == 'p' && char2 == 's')
    {
        return -1;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    cout << "Hii gamer"
         << " Welcome to Rock Paper and Scissor game" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Player's turn" << endl
             << "Choose 1 for Rock , 2 for Paper or 3 for Scissor" << endl;
        cin >> temp;
        playerChar = dict[temp - 1];
        cout << "You chosen " << playerChar << endl
             << endl;

        cout << "Computer's turn" << endl;
        temp = time1(3) + 1;
        compChar = dict[temp - 1];
        cout << "Computer chosen " << compChar << endl
             << endl;
        int result = compare(compChar,playerChar);
        if (result == 1)
        {
            compScore += 1;
            cout << "Computer got it" << endl
                 << endl;
        }
        else if (result == 0)
        {
            compScore += 1;
            playerScore += 1;
            cout << "Its a draw" << endl
                 << endl;
        }
        else
        {
            playerScore += 1;
            cout << "You got it" << endl
                 << endl;
        }

        cout << "You got: " << playerScore << endl
             << "Computer got : " << compScore << endl;
    }
    if (playerScore > compScore)
    {
        cout << "Yay! You nailed it" << endl
             << "You won the game" << endl
             << "Play again." << endl
             << "Thankyou for playing";
    }
    else if (compScore > playerScore)
    {
        cout << "OOPS! Computer won the game" << endl
             << "Play again." << endl
             << "Thankyou for playing";
    }
    else
    {
        cout << "Sorry Its a draw" << endl
             << "Play again." << endl
             << "Thankyou for playing";
    }
    return 0;
}