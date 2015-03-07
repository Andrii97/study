#include <stdio.h>
#include <math.h>

bool TheSameDigits(int number1, int number2)
{
    char C1[4], C2[4];
    for(int i = 3; i >= 0; i--)
    {
        C1[i] = number1 % 10;
        number1 = number1 / 10;
        C2[i] = number2 % 10;
        number2 = number2 / 10;
    }
    for(int i = 0; i < 4; i++)
    {
        bool flag = 0, flag2 = 0;
        for(int j = 0; j < 4; j++)
        {
           if (C1[i] == C2[j])
               flag = 1;
           if (C2[i] == C1[j])
               flag2 = 1;
        }
        if (0 == flag || 0 == flag2) return 0;
    }
    return 1;
}

bool isPrime(int number)
{
    if(2 != number && 0 == number % 2) return 0;
    for(int i = 3; i < sqrt((double)number) + 1; i = i + 2)
    {
        if(0 == number % i) return 0;
    }
    return 1;
}

int main()
{
    int max = 9999 - 3330 * 2;
    for(int i = 1001; i < max; i += 2)
    {
        if(TheSameDigits(i, i + 3330) && TheSameDigits(i, i + 6660) &&
                isPrime(i) && isPrime(i + 3330) && isPrime(i + 6660)) printf("%d\t%d\t%d\n", i, i+3330, i+6660);
    }
    return 0;
}

