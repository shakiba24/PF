#include <iostream>
using namespace std;

int findHighestNumber(int arr[3][4]) {
    int maxNumber = arr[0][0]; 
    for (int i = 0; i < 3; ++i) { 
        for (int j = 0; j < 4; ++j) { 
            if (arr[i][j] > maxNumber) {
                maxNumber = arr[i][j]; }}}
    return maxNumber;
}

int main() {
    int myArray[3][4] = {
        {5, 12, 7, 3},
        {9, 21, 19, 15},
        {11, 6, 8, 25}
    };

    cout<<"Finding the highest number in the 2D array.....\n";
    int highest = findHighestNumber(myArray);
    cout<<"The highest number in the array is: "<<highest<<endl;
    return 0;
}
