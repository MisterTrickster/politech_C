#include <stdio.h>

int main()
{
    printf("C2213\n");
    printf("5030302/20005\n");
    printf("Tedeev A.A.\n");
    printf("data\n");
    printf("\n");


    float C, F;
    for (C=-40; C<201; C+=10)
    {
        F=C*9/5+32;
        printf("%5.0f%8.1f\n", C, F);
    }
    return 0;
}
