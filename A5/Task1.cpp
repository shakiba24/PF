#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input upper limit: ";
    cin >> n;

    cout << "Output using for-loop: ";
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << endl;


    cout << "Output using while-loop: ";
    int i = 1;
    while (i <= n)
        cout << i++ << " ";
    cout << endl;

    return 0;
}
