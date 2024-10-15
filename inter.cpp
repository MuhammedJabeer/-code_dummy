#include <iostream>
using namespace std;
void interchange(int a[][100], int row1, int row2, int n) {
    for (int j = 0; j < n; j++) {
        int temp = a[row1][j];
        a[row1][j] = a[row2][j];
        a[row2][j] = temp;
    }
}

int main() {
    int a[100][100];
    int row1, row2, i, j, n;

    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    cout << "Enter the matrix values:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the rows to interchange (0 to " << n-1 << "): ";
    cin >> row1 >> row2;

    interchange(a, row1, row2, n);

    cout << "After interchanging rows:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << " " << a[i][j];
        }
        cout << "\n";
    }

    return 0;
}
