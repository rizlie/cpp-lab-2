#include <iostream>
#include <cmath>
using namespace std;

long long int fact(long long int z)
{
    long long int f = 1;
    if (z % 2 == 0)
    {
        for (int i = 2; i <= z; i += 2)
        {
            f *= i;
        }
    }
    else
    {
        for (int i = 1; i <= z; i += 2)
        {
            f *= i;
        }
    }
    return f;
}




long double t(long double x)
{
    long double s1 = 0;
    long double s2 = 0;
    for (int k = 0; k <= 10; k++)
    {
        s1 += (pow(x, 2 * k + 1)) / (fact(2 * k + 1));
        s2 += (pow(x, 2 * k )) / (fact(2 * k));
    }
    return s1/s2;
}



int main()
{
    long double y;
    cin >> y;
    cout << (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(pow(y, 2) - 1));
}
