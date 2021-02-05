#include <stdio.h>


int main()
{
   int n,c=0,sum=0;
   double avg;
   for(; ;)
   {
       scanf("%d" , &n);
       
       if(n<0) break;
       sum = sum + n;
       c++;

   }

   avg = sum/(float)c;
   printf("%.2lf\n", avg);
    return 0;
}
