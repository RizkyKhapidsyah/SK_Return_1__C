#include <stdio.h>
#include <conio.h>

char gimmeAnA(void);

int main()
{
	char grade;

	grade = gimmeAnA();
	printf("On this test you received an %c.\n", grade);

	_getch();
	return(0);
}

char gimmeAnA(void)
{
	return('A');
}

