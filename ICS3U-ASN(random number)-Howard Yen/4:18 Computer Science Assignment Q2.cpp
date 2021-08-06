/* 4/18 Computer Science Assignment Q2
Howard Yen
April 18, 2018
Write a program that simulates the rolling of 2 die and outputs the sum of the values on the die.*/

#include <iostream> //include header iostream
#include <ctime> //include random number
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	srand(time(0));
	int a; //interger a 
	int b; //interger b
	a = rand()%7; //a random number between 1 and 6
	b = rand()%7; //a random number between 1 and 6
	cout << "The sum of the values on the die is " << a+b << ".\n"; //output the sum of the values on the die
	return(0); //end of th program
}