//C2112

#include <stdio.h>

int main()
{
    printf("C2112\n");
    printf("5030302/20005\n");
    printf("Tedeev A.A.\n");
    printf("data\n");
    printf("\n");

    int N, i, j;
    FILE *fin;
    fin=fopen("input2112.txt", "rt");
    fscanf(fin,"%i", &N);
    int Arr[N];
    for (i=0; i<N; i++)
        fscanf(fin, "%i", &Arr[i]);
    printf("%3i", N);
    for (i=0; i<N; i++)
    {   for (j=i; j%8==0; j=j)
            {
                printf("\n");
                break;
            }
        printf("%6i", Arr[i]);
    }
    return 0;
}
