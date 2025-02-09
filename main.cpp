#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool game = true;
int money = 500;
int input;
int win;
int lose;
double percentage;

int main() {
    srand(time(0)); // Seed once at the beginning

    cout << "-- This is a test to identify if you are a solo or a single Player --" << endl;

    while (game) {
        win = rand() % 100;
        lose = 100 - win;
        percentage = rand() % 100;

        cout << win << "% win: +500$ " << lose << "% lose: -200$" << endl;
        cout << "Type (1) to Play \nType (2) to Exit" << endl;
        cin >> input;

        if (input == 1) {
            if (percentage < win) {
                money += 500;
                cout << "You won! Current money: " << money << endl;
            } else {
                money -= 200;
                cout << "You lost! Current money: " << money << endl;
            }
        } else if (input == 2) {
            game = false; // Exit the game
            cout << "Exiting game. Final money: " << money << endl;
        } else {
            cout << "Invalid input. Try again." << endl;
        }
    }

    return 0;
}