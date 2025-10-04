#include <iostream>
using namespace std;
int main() {
    float hours;
    float seconds;
    cout << "Enter hours: ";
    cin >> hours;

    seconds = hours * 60 * 60;
    
    cout << " Your hours in seconds: " << seconds;
    return 0;
}