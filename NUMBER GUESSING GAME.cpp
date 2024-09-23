#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << name << endl;

    srand(time(0));
    int numberToGuess = rand() % 100 + 1; // Generate number between 1 and 100

    cout << "Guess a number between 1 and 100.\n";

    while (true)
    {
        int userGuess;
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess < 1 || userGuess > 100)
        {
            cout << "Please enter a number between 1 and 100.\n";
        }
        else if (userGuess < numberToGuess)
        {
            cout << "Too low! Try again with higher number.\n";
        }
        else if (userGuess > numberToGuess)
        {
            cout << "Too high! Try again with smaller number.\n";
        }
        else
        {
            cout << "Congratulations, You guessed it right! "<<endl;
            cout<<"                Game over  ";
            break;
        }
    }
    return 0;
}
