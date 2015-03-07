#include <stdio.h>

int check(char ch)
{
	char symbol[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	for(int i = 0; i < 10; i++)
	{
		if (ch == symbol[i])
			return i;
	}
	return -1;
}

int main()
{
	int Matr[100][50];
	FILE *f;
	f = fopen("013.txt","rt");
	if (!f) return -1;
	int i = 0, j = 0;
	while(!feof(f))
	{
		char ch;
		int el;
		fscanf(f, "%c", &ch);
		el = check(ch);
		if (el != -1)
		{
			Matr[i][j] = el;
			j++;
			if (j == 50)
			{
				j = j % 50;
				i++;
			}
		}
	}
	fclose(f);
	int res[50];
	for (int j = 0; j < 50; j++) res[j] = 0;
	for (int i = 49; i >= 0; i--)
	{
		for (int j = 0; j < 100; j++)
		{
			res[i] = Matr[j][i] + res[i];
		}
		if (i != 0 && res[i] > 9)
		{
			res[i - 1] = res[i] / 10;
			res[i] = res[i] % 10;
		}
	}
	for (int j = 0; j < 50; j++) printf("%d", res[j]);
	printf("\n");
	return 0;
}

