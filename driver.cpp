/* This is a number puzzle project. Here are the
rules: Your instructor is going to give you a
certain number of floppy disks. The number
of disks is called initial. You then have two
choices: (a) You ask for (and receive) 53 more disks,
or (b) if you have an even number of disks, then you
may give half of them back to your instructor. Each
time you do (a) or (b), that is called a step in the
game. Your goal is to end up with exactly 91 disks
in n steps or fewer. For example, if initial is 99
and n is 4, then the following sequence of steps will
reach the goal of 91:
99 152 76 38 91
For this project, write a recursive function, goal,
which determines whether it is possible to reach the
goal (91) starting with some initial number, and
allowing no more than n steps. The base case occurs
when initial is 91 (since in this case, the answer
is yes), or when n is zero and initial is not 91
(since in this case, the answer is no). If you
do not have a base case, then solve the problem
by making one or two recursive calls (one to
goal(initial+53, n-1) and the other to
goal(initial/2, n-1)—although this second call
is made only if initial is an even number).
*/

#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int goal(int floppyCount, int steps count);

int main ()
{
    int NINTEY_ONE = 91;
    
    int initial;
    
    int receivedDisks;
    int steps;
    
    //RECURSIVE LOOP
    // Run through the recursive loop either the number of times provided
    // by steps or the solution of 91 disks is reached
    
    //
    
    
    //Student Information
	cout << "Nathanael Meyers and Alan Dunn" << endl;
	cout << "CS 2420" << endl;
	cout << "Assignment 6" << endl << endl;

	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Valid input consits of a positive whole number such as 4." << endl;
	cout << "To Exit the program type: \"quit\"" << endl;
	cout << endl << "===========================================================================" << endl << endl;

	string userInput;
	double userInputNum;
	bool keepGoing = true;
    
    do
	{
		//Ask for input
		cout << "Please enter the \"N\" value for the board size: ";

		cin >> userInput;

		cout << endl;

		stringstream convert(userInput); // stringstream used for the conversion initialized with the contents of Text

		//Give the value to userInputNum using the characters in the string
		//If it fails check for "quit" input. Otherwise give error and ask for new input.
		if (!(convert >> userInputNum))//give the value to Result using the characters in the string
		{
			if (userInput == "quit")
			{
				keepGoing = false;
			}

			else
			{
				cout << endl << "Error: Invalid input." << endl;
				cout << "Enter \"quit\" to exit the program." << endl;
				cout << "Otherwise please enter a positive whole number." << endl << endl;
				cin.clear();
			}
		}
		// Valid input for N, find the answer to n-queens
		else
		{
			const int N = userInputNum;

            // Check that the number entered is a whole number
			if (userInputNum != N)
			{
				cout << "Error: Number entered is not a whole number." << endl << endl;
			}

			//Valid input. Code for assignment starts here
			else
			{
				initial = N;

                
			}
		}

	} while (keepGoing != false);

	cout << endl << "===========================================================================" << endl;
	cout << endl << "=========             Thanks for using this program!             ==========" << endl;
	cout << endl << "===========================================================================" << endl;


	// End program
	system("PAUSE");
	exit(1);
}

int goal(int floppyCount, int stepCount)
{
    // Check if the floppyCount is the answer
    if(floppyCount == NINTEY_ONE)
    {
        cout << "Congradulations! You reached 91" << endl; 
        return 0;
    }
    // Check that all of the steps have not been used.
    else if (stepCount <= 0)
    {
        cout << "Sorry you have run out of steps." << endl;
        cout << "Please try again." << endl << endl;
        return 0;
    }
    
    //Take in user input for the choice
    cout << "Your current floppy disk count is: " << endl;
    cout << "Enter 'a' if you would like to add 53 more floppies to your count." << endl;
    cout << "Enter 'b' if you would like to cut your floppy count in half." << endl;
    cout << "- ";
    
    char userChoice = NULL;
    
    cin >> userChoice;
    
    if (userChoice == 'a')
    {
    //(a) - add 53 floppys to the stack, subtract a step since one was used.
    goal(floppyCount+53, stepCount-1)
    }
    else if (userChoice == 'b')
    {
    //(b) - cut floppyCount in half, subtract a step since one was used.
    goal(floppyCount/2, stepCount-1)
    }
    
}