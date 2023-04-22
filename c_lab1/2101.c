//C2101
//5030302/50002
//Tedeev A.A.
//data

#include <stdio.h>

int main()
{
 printf("C2101\n");
 printf("5030302/20005\n");
 printf("Tedeev A.A.\n");
 printf("data\n");
 printf("\n");

 int x, y;
 FILE *filik;
 filik=fopen("input.txt", "rt");
 fscanf(filik, "%i", &x);
 fscanf(filik, "%i", &y);
 printf("%i\n",x + y);

 return 0;
}
