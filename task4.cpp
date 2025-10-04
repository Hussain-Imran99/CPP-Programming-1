#include <iostream>
using namespace std;
int main() {

    float Q;
    float t;
    float curr;

    cout << "Enter charge: ";
    cin >> Q;
    cout << "Enter time: ";
    cin >> t;

    curr = Q/t;

    cout << "Your current is: " << curr;

    return 0;

}