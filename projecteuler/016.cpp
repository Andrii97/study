#include <stdio.h>


int main()
{
    char A[400];
    char tmp = 0;
    for(int j = 0; j < 400; j++)
    {
        A[j]*=0;
    }
    A[0] = 1;
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 400; j++)
        {
            A[j]=2*A[j]+tmp;
            if (A[j] > 9)
            {
                tmp = 1;
                A[j] -= 10;
            }
            else tmp = 0;

        }
    }
    int sum = 0;
    for(int j = 399; j >= 0; j--)
    {
        sum += A[j];
        printf("A[%d]=%d\t%d\n", j, A[j], sum);
    }
    printf("sum=%d\t", sum);
    return 0;
}

