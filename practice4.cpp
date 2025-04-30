#include <iostream>
using namespace std;

class Time
{
    int h, m;
public:
    void gettime(int, int);
    void puttime(void);
    void sum(Time, Time);
};

void Time::gettime(int x, int y)
{
    h = x;
    m = y;
}

void Time::puttime(void)
{
    cout << "Hours = " << h << endl;
    cout << "Minutes = " << m << endl;
}

void Time::sum(Time t1, Time t2)
{
    m = t1.m + t2.m;
    h = t1.h + t2.h + (m / 60);
    m = m % 60;
}

int main()
{
    Time t1, t2, t3;

    t1.gettime(7, 59);
    t2.gettime(4, 30);


    t3.sum(t1, t2);
    t4.sum(t1)

    cout << "Time 1: " << endl;
    t1.puttime();

    cout << "Time 2: " << endl;
    t2.puttime();

    cout << "Total Time: " << endl;
    t3.puttime();

    return 0;
}
