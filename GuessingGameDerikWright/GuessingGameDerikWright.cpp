// GuessingGameDerikWright.cpp : Defines the entry point for the console application.
// Guess My Number

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));	//seed random number generator
	int secretNumber = rand() % 100 + 1;		//random number between 1 and 100
	int tries = 0;								//recoords number of tries
	int guess;									//records number of guesses

	cout <<"\tWelcome to Guess My Number \n\n";


		do

		{
			cout <<"Enter a guess: ";
			cin >> guess;
			++tries;

			if (guess > secretNumber)
			{
				cout << "Too high!\n\n";
			}
			else if (guess < secretNumber)
			{
				cout << "Too low!\n\n";
			}
			else
			{
				cout << "\nThat's it! You go it in " << tries << " guesses!\n";
			}
		} while (guess != secretNumber);

    return 0;
}

