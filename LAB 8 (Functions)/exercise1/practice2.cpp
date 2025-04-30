#include <iostream>
using namespace std;

class sum
{
    int a, b, t, num;

public:
    void getdata(void);
    void sumdata(void);
    void subtractdata(void);
    void multiplydata(void);
    void dividedata(void);
};
void sum ::getdata(void)
{
    cout << "enter value of a: ";
    cin >> a;
    cout << "enter value of b: ";
    cin >> b;
    cout << "Select from the following: \n";
    cout << "1. addition\n";
    cout << "2. subtract\n";
    cout << "3. multiply\n";
    cout << "4. divide\n";
    cin >> num;
}

if (num == 1)
{
    void sum ::sumdata(void)
    {
        t = a + b;
        cout << "Addition of " << a << " and " << b << " is " << t;
    }
}

elseif(num == 2)
{
    void sum ::subtractdata(void)
    {
        t = a - b;
        cout << "subtraction of " << a << " and " << b << " is " << t;
    }
}
elseif(num = 3)
{
    void sum ::multiplydata(void)
    {
        t = a * b;
        cout << "multiply of " << a << " and " << b << " is " << t;
    }
}
elseif(num = 4)
{
    void sum ::dividedata(void)
    {
        t = a / b;
        cout << "Division of " << a << " and " << b << " is " << t;
    }
}
int main()
{
    sum object;
    object.getdata(); // sir nay bola object is calling the function.
    object.sumdata(); // object is PERFORMING the action.
    object.subtractdata();
    object.multiplydata();
    object.dividedata();
}