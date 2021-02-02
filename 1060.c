#include <stdio.h>


int main()
{
   double n;
   int i, c=0;
   for(i = 0 ; i < 6 ; i++)
   {
       scanf("%lf" , & n);
       if(n > 0)
       {
           c++ ;
       }
   }

   printf("%d valores positivos\n" , c);


    return 0;
}
