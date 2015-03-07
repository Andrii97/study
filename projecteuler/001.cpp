#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int current = 1; current < 1000; current++)
    {
        if (current % 3 == 0 || current % 5 == 0)
        {
            sum = sum + current;
        }
    }
    printf("%d\n",sum);
    return 0;
}

