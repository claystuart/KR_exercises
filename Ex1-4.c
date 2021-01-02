#include <stdio.h>

/* Build: gcc -Wall -Werror Ex1-3.c */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("%3s %5s\n", "Fahr", "Cel");
	celsius = lower;

	while (celsius <= upper)
	{
		fahr = celsius * (9.0/5.0) + 32.0; 
		printf("%3.0f %6.0f\n", fahr, celsius); 
		celsius += step;
	}
	
	return 0;
}
