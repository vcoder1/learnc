#include <stdio.h>
main()
{
        float lower, upper, step;
        float fahr, cels;
        lower=0;
        upper=300;
        step=20;
        cels=lower;
        printf("Cels\tFahr\n");
        while(cels<=upper)
        {
                fahr=((cels*9.0/5)+32);
                printf("%3.0f\t%3.2f\n", cels, fahr);
                cels+=step;
        }
}
