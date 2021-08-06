/* 4/25 Computer Science Assignment Q4
Howard Yen
April 25, 2018
Write a program to simulate this game,
starting with a random number between 10 and 20.
Display the number of pennies each turn.
Generate the number of pennies
removed by the second player randomly (the computer).
Include and if statement for the sentence
that outputs the number of pennies
the computer removed to decide if you should use the word penny or pennies.
The user should be asked if they want to play again.*/

#include <iostream> //include header iostream
#include <ctime> //include random number
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	srand(time(0)); //random number
	int pile; //interger pile
	int number; //interger number
	int removed; //interger removed
	int moves = 0; //interger moves
	int play = 1; //interer play

	cout << "This is the game of NIM.\n"; //output this is the game of NIM
	cout << "In a variation of the game of NIM, two players take away alternatively 1,2 or 3 coins from a given pile of pennis.\n"; //output the rules of the NIM
	do {
		pile = rand()%11+10; //pile equals to a random number between 10 and 20

		do {
			for (int counter = 0; counter < pile; counter++){
				cout << "o";
			} //output the amounts of "o" 
			cout << "\n";

			do {
				cout << "Please enter the number of pennies you wish to remove (choose 1,2 or 3).\n"; //ask the user to enter the number of pennis they wish to remove
				cin >> removed; //input the removed
				if (removed>3||removed<1||removed>pile){
					cout << "This is not a valid entry.\n";
				} //if removed>3 or removed<1 or removed>pile output this is not a valid entry
			} while (removed>3||removed<1||removed>pile); //re-do the program if the removed>3 or removed<1 or removed>pile

			pile-=removed; //pile-removed = pile
			moves++; //moves+1=moves

			if (pile==0) {
				break;
			} //if pile equals to zero, end the program

			for (int counter = 0; counter < pile; counter++){
				cout << "o";
			} //output the amounts of "o"
			cout << "\n";

			do {
				removed = rand()%3+1;
			} while (removed>pile); //re-do the program while removed>pile

			if (removed>1) {
				cout << "The computer has removed: " << removed << " pennies.\n";
			} //if removed>1 output the computer has removed ____ pennies
			else {
				cout << "The computer has removed: " << removed << " penny.\n";
			} //else output the computer has removed _____ penny

			pile-=removed; //pile-removed=pile
			moves++; //moves+1=moves

		} while (pile>0); //re-do the progam if the pile is bigger than zero

		if (moves%2 == 1) {
		cout << "You are the winner!\n";
		} //if moves%2 equals to 1 output you are the winner
		else {
		cout << "Computer is the winner!\n";
		} //else output computer is the winner
		do {	
			cout << "Do you want to play this game again? (type 1 to represents Yes or type 2 to represents No).\n"; //ask the user if they want to play this game agian
			cin >> play; //input yes or no by typing 1 or 2
		} while (play!=1 && play!=2); //re-do the program if the interger play is not equals to 1 and 2	
	} while (play == 1); //re-do the program if the interger play equals to 1

	return(0); //end of the program
}

