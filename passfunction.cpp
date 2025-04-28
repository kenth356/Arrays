#include <iostream>
using namespace std;

double getTOTAL(double prices[], int size);

int main() {
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTOTAL(prices, size);
    cout << "$ " << total;

    return 0;
}

double getTOTAL(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}