#include <stdio.h>

int main(void)
{
	char name[10] = "Gildo";
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%c",name[i]);
	}
	putchar('\n');
}
