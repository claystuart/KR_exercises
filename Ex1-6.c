#include <stdio.h>

/* print value of getchar() != EOF 
 * to run: echo -n ABC | ./a.out
 * use -n switch for echo to stop echo from adding a newline 
 */

int
main()
{
	int c;

	while (c = (getchar() != EOF))
		printf("Test result was %d\n",c);
		
	printf("Final Test result: %d\n",c);
	return 0;
}

	
