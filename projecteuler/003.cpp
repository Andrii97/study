#include <iostream>

using namespace std;

int main()
{
    long long int a = 600851475143;
    long long int b = 3;
    long long int res = 1;
    while(1 != a)
    {
        if (0 == a % b)
        {
            a = a / b;
            res = b;
        }
        else b+= 2;
    }
    printf("%llu\n", res);
    return 0;
}

