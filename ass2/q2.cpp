#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char STRING1[100] = "Hello";
    char STRING2[100] = "World";
    char STRING3[100];

    strcpy(STRING3, STRING1);
    cout << "After copying, STRING3: " << STRING3 << endl;

    strcat(STRING1, STRING2);
    cout << "After concatenation, STRING1: " << STRING1 << endl;

    int length = strlen(STRING1);
    cout << "Total length of STRING1 after concatenation: " << length << endl;

    return 0;
}
