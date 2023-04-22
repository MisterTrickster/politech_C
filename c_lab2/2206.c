#include <stdio.h>

int main()
{
 printf("C2206\n");
 printf("5030302/20005\n");
 printf("Tedeev A.A.\n");
 printf("data\n");
 printf("\n");

 int V[]={1,2,3,4,5};
 int V2[80], i, n, res, j, tmp;
 res=1;
 FILE *fin;
 fin=fopen("input.txt", "rt");
 fscanf(fin, "%i", &n);
 for (i=0; i<n; i++)
    fscanf(fin, "%i", &V2[i]);
 for (i=0; i<5; i++)
    printf("%i ", V[i]);
printf("\n");
 for (i=0; i<n; i++)
    printf("%i ", V2[i]);
printf("\n");
 for (i=1; i<n; i++)
 {
     tmp=1;
     for (j=0; j<i; j++)
        if (V2[i]==V2[j]) tmp=0;
        if (tmp!=0) res=res+1;
 }
 printf("%i", res);

 return 0;
}
