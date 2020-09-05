#include <stdio.h>
main()
{
	float lower, upper, step;
	float fahr, cels;
	lower=0;
	upper=300;
	step=20;
	fahr=lower;
	printf("Fahr\tCels");
	while(fahr<=upper)
	{
		cels=(fahr-32)*5/9.0;
		printf("%3.0f\t%3.2f\n", fahr, cels);
		fahr+=step;
	}
}
