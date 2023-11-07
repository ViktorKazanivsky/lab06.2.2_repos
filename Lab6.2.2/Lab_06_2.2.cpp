#include <iostream>
#include <iomanip>

using namespace std;

double AverageEvenIndexedElements(int a[], int n, int index = 0, int sum = 0, int count = 0) {
    if (index == n) {
        if (count == 0) {
            return 0;
        }
        return static_cast<double>(sum) / count;
    }

    if (index % 2 == 0) {
        sum += a[index];
        count++;
    }

    return AverageEvenIndexedElements(a, n, index + 1, sum, count);
}

void printRecursive(int* a, int n, int index = 0) {
    if (index < n) {
        cout << a[index] << setw(4);
        if (index == n - 1) {
            cout << setw(4) << endl;
        }
        printRecursive(a, n, index + 1);
    }
}

int main() {
    int a[] = { 10, 5, 30, -5, 15 };
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Array:" << endl;
    printRecursive(a, n);

    double result = AverageEvenIndexedElements(a, n);

    cout << "Average of elements with even indices: " << result << endl;

    return 0;
}