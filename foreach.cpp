#include <iostream>
using namespace std;

int main() {
    string name[] = {"Dylan", "Kenth", "Jan Meinard", "Robert"};
    for (string names : name) {
        cout << names << endl;
    }

    int number[] = {10, 20, 30, 40};
    for (int numbers : number) {
        cout << numbers << endl;
    }

    return 0;
}
