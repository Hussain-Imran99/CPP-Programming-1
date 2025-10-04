#include <iostream>
using namespace std;
int main() {
    int ageYears;
    int ageDays;
    cout << "Enter age in Years: ";
    cin >> ageYears;
    ageDays = ageYears * 365;
    cout << " Your age in days: " << ageDays << endl; 
    return 0;
}