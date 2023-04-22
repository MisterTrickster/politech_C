#include <stdio.h>

int main()
{
 printf("C2204\n");
 printf("5030302/20005\n");
 printf("Tedeev A.A.\n");
 printf("data\n");
 printf("\n");

 float F, C;
 F=0;
 C=0;
 while(F<301)
 {
    C=5*(F-32)/9;
    printf("%8.0f%8.1f\n", F, C);
    F=F+20;
 }
 return 0;
}
