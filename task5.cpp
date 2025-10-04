#include <iostream>
using namespace std;
int main() {

    string name;
    cout << "Enter your name: ";
    cin >> name;

    int matric;
    int intermediate;
    int ecat;
    float aggregate;
    cout << "Enter matric marks: ";
    cin >> matric;
    cout << "Enter intermediate marks: ";
    cin >> intermediate;
    cout << "Enter ECAT marks: ";
    cin >> ecat;

    float matricPercent = (matric / 1100.0) * 10;
    float interPercent = (intermediate / 550.0) * 40;
    float ecatPercent = (ecat / 400.0) * 50;
    aggregate = matricPercent + interPercent + ecatPercent;
    cout << " Your aggregate is: " << aggregate << endl;
    return 0;
}