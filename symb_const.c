#include<stdio.h>
#define LOWER 0 /*lower limit of the table*/
#define UPPER 300 /*upper limit*/
#define STEP 20 /*step size*/
/*print the Fahrenheit- Celsius Table*/
main()
{
	printf("Fahr\tCels\n");
	int fahr;
	for(fahr=LOWER;fahr<=UPPER;fahr+=STEP)
		printf("%d\t%6.1f\n",fahr,5.0/9.0*(fahr-32));

}
