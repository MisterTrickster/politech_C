#include <stdio.h>

int main()
{
    printf("C2111\n");
    printf("5030302/20005\n");
    printf("Tedeev A.A.\n");
    printf("data\n");
    printf("\n");

    int x;
    FILE *fil;
    fil=fopen("input2111.txt", "r");
    fscanf(fil, "%i", &x);
    printf("%4i", (x-1)/2*2+3);
    return 0;
}
