#include <iostream>
using namespace std;

int main() {
    int population;  
    int n;           

    cout << "Enter current world population: ";
    cin >> population;

    cout << "Enter no of people born per month: ";
    cin >> n;

    long long months = 30 * 12;
    long long finalPopulation = population + (n * months);
    cout << " Population after 3 decades: " << finalPopulation << endl;

    return 0;
}
