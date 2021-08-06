/* 4/5 Computer Science Assignment Q1
Howard Yen
April 5, 2018
Write a program that generates a random number between 21 and 34.  Output the value to the user.*/

#include <iostream> //include header iostream
#include <ctime> //include random number
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
    srand(time(0));
    int x;
    x = rand()%14+21; //the random number is between 21 and 34
    cout << x << "\n" ; //output the random number
    system("pause"); //end of the program
}
