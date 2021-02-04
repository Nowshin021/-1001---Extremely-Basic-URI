#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a , b ,s=0,d=0;
   for(; ;)
   {

       if(d==2)
       {
           break;
       }
           scanf("%lf" , &a);
            if(a>=0 && a<=10)
            {
                d++;
                s=s+a;

            }
              else{
                 printf("nota invalida\n");
              }
   }


   b = s/2.0;
   printf("media = %.2lf\n", b);


    return 0;
}
