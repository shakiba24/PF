#include <cstring>
#include <iostream>
using namespace std;
int main(){

    char src[] = "It's Monday and it's raining";
    char dest[40];

    strncpy(dest,src,10);
    cout << dest << endl;

    strncpy(dest,src,strlen(src)+10);
    cout << dest << endl;
    return 0;
}
