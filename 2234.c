#include <stdio.h>

int main()
{
   int a,b;
   double avg;
   scanf("%d %d" ,&a ,&b);
   avg = a/(float)b;
   printf("%.2lf\n" ,avg);
    return 0;
}
