#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numbers[5];
    cout << "\n[ENTER FIVE NUMBERS TO BE PUT IN THE ARRAY]\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nNUMBER " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\n[THE UPDATED VALUE OF ARRAYS OF NUMBERS ARE]\n";
    cout << right << setw(14) << "{" << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << ", " << numbers[3] << ", "
    << numbers[4] << "}" << endl;

    cout << endl << "ggs";
}