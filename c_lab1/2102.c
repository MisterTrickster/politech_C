//C2102
//5030302/20005
//Tedeev A.A.
//data

#include <stdio.h>

int main()
{
 printf("C2102\n");
 printf("5030302/20005\n");
 printf("Tedeev A.A.\n");
 printf("data\n");
 printf("\n");

 int n,arr[5],i;
 FILE *filik;
 n=5;
 filik=fopen("input.txt", "rt");
 for (i=1; i-1<n; i=i+1)
    fscanf(filik, "%i", &arr[i]);
 for (i=1; i-1<n; i=i+1)
    printf("%5i", arr[i]);
 printf("\n");
 return 0;
}
