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

using namespace std;

int main ()
{
    
    
    
    int initial;
    
    int receivedDisks;
    int steps;
    
    //RECURSIVE LOOP
    // Run through the recursive loop either the number of times provided
    // by steps or the solution of 91 disks is reached
    
    //
    
    return 0;
}