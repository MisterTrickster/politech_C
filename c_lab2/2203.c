#include <stdio.h>

int main()
{
 printf("C2203\n");
 printf("5030302/20005\n");
 printf("Tedeev A.A.\n");
 printf("data\n");
 printf("\n");

 int a, b;
 FILE *fin;
 fin=fopen("input.txt", "rt");
 fscanf(fin, "%i%i", &a, &b);
 printf("%i %i\n", a, b);
 if (a<b) printf("<\n");
 if (a>b) printf(">\n");
 if (a<=b) printf("<=\n");
 if (a>=b) printf(">=\n");
 if (a==b) printf("==\n");
 if (a!=b) printf("!=\n");
 if (!(a<b)) printf("!<\n");
 if (!(a>b)) printf("!>\n");
 if (!(a<=b)) printf("!<=\n");
 if (!(a>=b)) printf("!>=\n");
 if (!(a==b)) printf("!==\n");
 if (!(a!=b)) printf("!!=\n");
 return 0;
}
