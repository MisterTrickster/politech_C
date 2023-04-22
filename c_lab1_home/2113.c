#include <stdio.h>

int main()
{
    printf("C2113\n");
    printf("5030302/20005\n");
    printf("Tedeev A.A.\n");
    printf("data\n");
    printf("\n");

    int x, t;
    FILE *fil;
    fil=fopen("input2113.txt", "r");
    fscanf(fil, "%i", &x);
    int fir[x];
    for (t=0; t<x; t++)
        fscanf(fil, "%i", &fir[t]);
    int sec[x];
    for (t=0; t<x; t++)
        fscanf(fil, "%i", &sec[t]);
    int sum;
    sum=0;
    for (t=0; t<x; t++)
        sum=sum+fir[t]*sec[t];
    printf("%4i\n", x);
    for (t=0; t<x; t++)
        printf("%5i", fir[t]);
    printf("\n");
    for (t=0; t<x; t++)
        printf("%5i", sec[t]);
    printf("\n");
    printf("\n");
    printf("%10i", sum);
    return 0;
}
