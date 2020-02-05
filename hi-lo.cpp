// this program plays the hi-lo game
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	int num = rand() % 10 + 1;
	int guess;
	int counter = 0;
	int guesses = 5;

	while (counter < 5)
	{
		cout << "Please guess my number between 1-100 and press enter. You get 5 guesses.\n\n";
		cin >> guess;

		if (guess == num)
		{
			cout << "You guessed the number!!!\n";
			exit(0);
		}
		else if (guess < num)
		{
			counter++;
			guesses--;
			cout << "Your number was too small, try again. You have " << guesses << " guesses left.\n\n";
			continue;
		}
		else if (guess > num)
		{
			counter++;
			guesses--;
			cout << "Your number was too big, try again. You have " << guesses << " guesses left.\n\n";
			continue;
		}
	}
	
	cout << "You did not guess the number.\n";
	exit(0);
}