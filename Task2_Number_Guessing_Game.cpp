#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main() {
    srand(time(0)); //to generate a different randon number each time
    int num = rand() % 10 + 1; //to generate a number ranging from 1 to 10
    int m;

    do {
        cout << "Guess the number (1 to 10): ";
        cin >> m;

        if (m > num) {
            cout << "Lower.\n";
        } else if (m < num) {
            cout << "Higher.\n";
        }
    } while (m != num);  //loop terminated when user guesses the number

    cout << "Congratulations! You guessed the number.\n";
    getch();  
    return 0;
}