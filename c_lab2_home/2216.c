#include <stdio.h>

int main()
{
    printf("C2216\n");
    printf("5030302/20005\n");
    printf("Tedeev A.A.\n");
    printf("data\n");
    printf("\n");

    int n, m, MTRX[50][50], i, j;
    FILE *fin;
    fin=fopen("input.txt", "rt");
            fscanf(fin, "%i%i", &n, &m);
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
        {
            if (i%2==0)
                MTRX[n-j-1][i]=i*n+j+1;
            else
                MTRX[j][i]=i*n+j+1;
        }
    printf("%4i%4i\n", n, m);
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
            printf("%5i", MTRX[i][j]);
        printf("\n");
    }
    return 0;
}
