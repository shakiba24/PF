#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char src[] = "Hello Programmers. ";

    char dest[20];

    strcpy(dest, src);

    cout<<dest;
    return 0;

}