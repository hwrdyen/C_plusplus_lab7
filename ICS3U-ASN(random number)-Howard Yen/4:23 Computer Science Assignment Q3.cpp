/* 4/23 Computer Science Assignment Q3
Howard Yen
April 23, 2018
Write the program so that it will count and print out the number of guesses it took to find the random number.  Include a counter that stops the program after 10 tries and says you loose (challenge).*/

#include <iostream>
#include <ctime>
using namespace std; 

int main()
{
	srand(time(0));
	int x;
	int a;
	x = rand()%101;
	do {
		cout<< "Please enter a number.\n";
		cin >> a;
		if (a!=x) {
			if (a>x) {
				cout << "too high, please guess again.\n";
			}
			else {
				cout << "too low, please guess again.\n";
			}
		}
	} while (a!=x);
	if (a==x) {
		cout << "Congratulations.\n";
	}
	system("pause");
}
