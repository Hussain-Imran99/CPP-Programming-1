#include <iostream>
using namespace std;
int main() {
    int mb;
    int kb;
    int bytes;
    int bits;
    cout << "Enter data in MB: ";
    cin >> mb;

    kb = mb * 1024;
    bytes = kb * 1024;
    bits = bytes * 8;
 
    cout << "Your data in Bits: " << bits << endl;
    return 0; 
}