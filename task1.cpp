#include<iostream>
using namespace std;
int main() {
    string name;
    float aggregate;
    int rollNo;
    char section;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your aggregate: ";
    cin >> aggregate;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter your section: ";
    cin >> section;
    cout << "Your name: " << name << "\n Your aggregate: " << aggregate << "\n Your roll number: " << rollNo << "\n Your section: " << section;

    return 0;
}