#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the upper limit
    cout << "Input upper limit: ";
    cin >> n;

    // Using a for-loop
    cout << "Using for-loop:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Using a while-loop
    cout << "Using while-loop:" << endl;
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}
