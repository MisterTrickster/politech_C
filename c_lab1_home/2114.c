#include <stdio.h>

int main()
{
    printf("C2115\n");
    printf("5030302/20005\n");
    printf("Tedeev A.A.\n");
    printf("data\n");
    printf("\n");


    int N, M, K, i, j, t;
    FILE *fin;
    fin=fopen("input2114.txt", "rt");
    fscanf(fin,"%i%i%i", &N, &M, &K);
    int Arr1[N][K], Arr2[K][M], Arr3[N][M];
    for (i=0; i<N; i++)
        for (j=0; j<K; j++)
            fscanf(fin, "%i", &Arr1[i][j]);
    printf("%4i%4i\n", N, K);
    for (i=0; i<N; i++)
    {
        for (j=0; j<K; j++)
            printf("%5i", Arr1[i][j]);
        printf("\n");
    }
    for (i=0; i<K; i++)
        for (j=0; j<M; j++)
            fscanf(fin, "%i", &Arr2[i][j]);
    printf("%4i%4i\n", K, M);
    for (i=0; i<K; i++)
    {
        for (j=0; j<M; j++)
            printf("%5i", Arr2[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
    {
        Arr3[i][j]=0;
        for (t=0; t<K; t++)
            Arr3[i][j]+=Arr1[i][t]*Arr2[t][j];
    }
    printf("%4i%4i\n", N, M);
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
            printf("%5i", Arr3[i][j]);
        printf("\n");
    }
    return 0;
}
