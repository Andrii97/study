#include <iostream>

using namespace std;

int main()
{
    long int a = 1, b = 1, c = 0, sum = 0;
    while (c < 4000000)
    {
        c = a + b;
        if (c % 2 == 0) sum = sum + c;
        a = b;
        b = c;
    }
    printf("%lu\n",sum);
    return 0;
}

