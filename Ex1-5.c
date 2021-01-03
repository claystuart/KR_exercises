#include <stdio.h>

/* Print temps from 300 to 0 */

#define STEP 20

int 
main()
{
	printf("Cel Fahr\n");
	for(int cel = 300; cel >= 0; cel-=STEP)
	{
		printf("%3d %6.1f\n", cel, (9 * cel / 5.0 + 32));
	}

	return 0;
}
