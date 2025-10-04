#include <iostream>
using namespace std;
int main() {
    float current;
    float voltage;
    float power;
    cout << "Enter current: ";
    cin >> current;
    cout << "Enter voltage: ";
    cin >> voltage;
    power = voltage * current;
    cout << "Power obtained: " << power << endl;
    return 0;
}