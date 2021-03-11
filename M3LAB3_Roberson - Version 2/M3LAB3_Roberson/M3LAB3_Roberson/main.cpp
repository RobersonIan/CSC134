//
//Ian Roberson
//2-11-2021
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    //Declare Variables
    int roll; //d20 (1-20)
    int ac; //Armor class
    int atk_bonus; //add to attack
    int hp = 10;

    //Random seed
    cout << "The time is a random dice roller" << time(0) << endl;
    cout << "What is the armor class of the enemy? (10- 20)" << endl;
    cin >> ac;
    srand(time(0));
    while(true) {
        roll = (rand() % 20) + 1;
        cout << "You rolled: " << roll << endl;

        //Compare roll with armor class
        //20: always hit
        //1: always miss
        //Otherwise >=Ac hits, else miss

        if (20 == roll) {
            cout << "Critical hit" << endl;
            break;
        } else if (1 == roll) {
            cout << "Critical miss" << endl;
            break;
        } else if (roll >= ac) {
            cout << "Hit (" << roll << ") vs. target AC of (" << ac << ")" << endl;
        } else if (roll < ac) {
            cout << "Miss (" << roll << ") vs. target AC of (" << ac << ")" << endl;
        } else {
            cout << "Error. Invalid input." << endl;
        }

    }
    //cout << rand() % 20 << endl;
    //cout << rand() % 20 << endl;
    //cout << rand() % 20 << endl;
    return 0;
}
