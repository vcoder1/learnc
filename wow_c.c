/*This is a program made to experiment with C.
 * see...... 1 in C is exactly the same as what other languages call 'true'*/
#include<stdio.h>
main()
{
	for(int i=1;i<=100;i++)
	{
		printf("%d : ", i);
		putchar(i);
		putchar('\n');
	}
	printf("Also,\n");
	if(48=='0')
		printf("\n48(unicode) and 0(int) are the same entity.\n");
	else
		printf("\n48(unicode) and 0(int) aren't the same entity.\n");
}
