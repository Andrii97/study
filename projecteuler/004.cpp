#include <iostream>

using namespace std;

int main()
{
    long int res=0, tmp;
    for(int i = 999; i >= 100; i--)
    {
        for(int j = 999; j >= i; j--)
        {
            tmp = i * j;
            if (tmp > 100000)
            {
                if (tmp % 10 == tmp / 100000 && (tmp % 100 - (tmp % 10))/10 == tmp/10000 - (tmp/100000)*10 &&
                        (tmp / 1000) - (tmp / 10000) * 10 == ((tmp % 1000) - (tmp % 100)) / 100)
                {
                    if (res < tmp) res = tmp;
                }
            }
        }
    }
    printf("%lu\n",res);
    return 0;
}

