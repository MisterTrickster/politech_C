//C2103
//5030302/20005
//Tedeev A.A.
//data

#include <stdio.h>

int main()
{
 printf("C2103\n");
 printf("5030302/20005\n");
 printf("Tedeev A.A.\n");
 printf("data\n");
 printf("\n");

 int n,m,arr[3][4],i,j;
 FILE *filik;
 n=3;
 m=4;
 filik=fopen("input.txt", "rt");
 for (i=1; i-1<n; i++)
     for (j=1; j-1<m; j++)
        fscanf(filik, "%i", &arr[i][j] );
  for (i=1; i-1<n; i++)
  {
      for (j=1; j-1<m; j++)
        printf("%6i", arr[i][j] );
 printf("\n");
  }
 return 0;
}
