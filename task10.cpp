#include <iostream>
using namespace std;
int main() {

    int wins, draws, losses;
    int points;
    cout << "Total wins: ";
    cin >> wins;

    cout << "Total draws: ";
    cin >> draws;

    cout << "Total losses: ";
    cin >> losses;

    points = (wins * 3) + (draws * 1) + (losses * 0);

    cout << " Total Points = " << points << endl;

    return 0;
}