#include<stdio.h>

int main()
{
	while (1)
	{
		int count;
		int dan;

		printf("Enter 0 to exit\n");
		printf("Enter your multiplication table from 2 to 9 : ");
		scanf_s("%d", &dan);
		if (dan == 0) break;

		if (dan < 10 && dan>1)
		{
			for (count = 1;count < 10; ++count)
			{
				printf("%d*%d=%d\n", dan, count, dan * count);
			}
		}
		else(dan >= 10 && dan <= 1);
		{
			printf("You entered it incorrectly.");

		}
		printf("\n");
	}
}
