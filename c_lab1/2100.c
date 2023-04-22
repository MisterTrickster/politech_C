//C2100
//5030302/20005
//Tedeev A.A.
//data

#include <stdio.h>

int main()
{
 printf("C2100\n");
 printf("20001\n");
 printf("Tedeev A.A.\n");
 printf("Data\n");
 printf("\n");

 int x;
 FILE *filik;
 filik=fopen("input.txt", "rt");
 fscanf(filik, "%i", &x);
 printf("%i\n",x);

 return 0;
}
