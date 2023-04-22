#include <stdio.h>

int main()
{
    printf("C2214\n");
    printf("5030302/20005\n");
    printf("Tedeev A.A.\n");
    printf("data\n");
    printf("\n");

    float MTRX1[4][4], MTRX2[4][4];
    int i, j;
    FILE *fin;
    fin=fopen("input.txt", "rt");
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            fscanf(fin, "%f", &MTRX1[i][j]);
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            MTRX2[j][i]=MTRX1[i][j];
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
            printf("%8.2f", MTRX1[i][j]);
        for (j=0;j<4;j++)
            printf("%8.2f", MTRX2[i][j]);
        printf("\n");
    }
    return 0;
}
