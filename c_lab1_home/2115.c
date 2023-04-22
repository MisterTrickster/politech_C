#include <stdio.h>

int main()
{
    printf("C2115\n");
    printf("5030302/20005\n");
    printf("Tedeev A.A.\n");
    printf("data\n");
    printf("\n");

    int N, M, i, j;
    FILE *fin;
    fin=fopen("input2115.txt", "rt");
    fscanf(fin,"%i%i", &N, &M);
    float Arr[N][M], S, tmp;
    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
            fscanf(fin, "%f", &Arr[i][j]);
    S=0;
    for (i=0; i<N; i++)
    {
        S+=Arr[i][0]+Arr[i][M-1];
        //printf("%6.1f\n", S);
        for (j=i; (j==M-1&&j==N-1&&M<2); j=j)
        {
            S+=-Arr[i][i];
            break;
        }
    }
    //printf("%6.1f\n", S);
    for (i=1; i<M-1; i++)
        S+=Arr[0][i]+Arr[N-1][i];
    //printf("%6.1f\n", S);
    for (i=1; i<N-1; i++)
    {
        //tmp+=Arr[i][i]+Arr[i][M-i-1];
        //printf("%6.1f\n", tmp);
        for (j=i; j==M-j-1; j=j)
        {
            S+=-Arr[i][i];
            break;
        }
        S+=Arr[i][i]+Arr[i][M-i-1];
    }
    printf("%3i%3i\n", N, M);
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
            printf("%6.1f", Arr[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("%6.1f", S);
    return 0;
}
