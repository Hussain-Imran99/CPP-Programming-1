#include<iostream>
using namespace std;
int main() {

    float width;
    float length;
    float area;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;

    area = length * width;

    cout << " Area of rectangle is: " << area << endl;

    return 0;
}