#include <stdio.h>

int main()
{
 printf("C2104\n");
 printf("5030302/20005\n");
 printf("Tedeev A.A.\n");
 printf("data\n");
 printf("\n");

 float arr[3][4];
 int n,m,i,j;
 FILE *filik;
 n=4;
 m=3;
 filik=fopen("input.txt", "rt");
 for (i=1; i-1<n; i++)
 {
     for (j=1; j-1<m; j++)
        fscanf(filik, "%f", &arr[i][j]);
 }
  for (i=1; i-1<n; i++)
  {
      for (j=1; j-1<m; j++)
        printf("%9.3f", arr[i][j]);
 printf("\n");
  }
 return 0;
}
